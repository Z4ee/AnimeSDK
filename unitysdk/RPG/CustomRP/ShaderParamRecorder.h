#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DrawCallParams.h"
#include "unitysdk/RPG/CustomRP/MaterialParams.h"
#include "unitysdk/RPG/CustomRP/ParamTable.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class CommandBufferExt; }

#define RPG_CUSTOMRP_SHADERPARAMRECORDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F25D00)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DISABLEKEYWORDANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26590)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWMESHANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F265D0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F266D0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_2_OFFSET UNITYSDK_OFFSET(0x18F26730)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_3_OFFSET UNITYSDK_OFFSET(0x18F26780)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26680)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENABLEKEYWORDANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F265B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDCAPTURE_OFFSET UNITYSDK_OFFSET(0x18F25EB0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x18F26070)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GETDRAWCALLPARAMS_OFFSET UNITYSDK_OFFSET(0x18F260D0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_GLOBALPARAMS_OFFSET UNITYSDK_OFFSET(0x18F261B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISCAPTURING_OFFSET UNITYSDK_OFFSET(0x18F25C20)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISRECORDINGPARAM_OFFSET UNITYSDK_OFFSET(0x18F25BC0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x18F25C80)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETCOLORANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26220)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26250)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F262A0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26270)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALCOLORANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26810)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALFLOATANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F267D0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALMATRIXANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26830)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F269B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F268B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F267F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26850)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETINTANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26320)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26350)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F263D0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F263A0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETRENDERSTATEANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26450)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F26490)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F26470)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F264B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x18F26510)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x18F264E0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTCAPTURE_OFFSET UNITYSDK_OFFSET(0x18F25C90)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTSESSION_OFFSET UNITYSDK_OFFSET(0x18F25F10)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F26A00)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDDRAWCALL_OFFSET UNITYSDK_OFFSET(0x18F269F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDGLOBALPARAM_OFFSET UNITYSDK_OFFSET(0x18F269E0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDMPBPARAM_OFFSET UNITYSDK_OFFSET(0x18F269D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderParamRecorder_TypeDefinitionIndex = 35598;

	class ShaderParamRecorder : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>** StaticGet__CurrentSessionParams()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A70);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::MaterialPropertyBlock*, ::RPG::CustomRP::ParamTable>** StaticGet__MpbParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::MaterialPropertyBlock*, ::RPG::CustomRP::ParamTable>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A78);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet__Id2Name()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A80);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::RPG::CustomRP::MaterialParams>** StaticGet__MatParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::RPG::CustomRP::MaterialParams>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*>** StaticGet__SessionParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A90);
		}
		static ::RPG::CustomRP::MaterialParams* StaticGet__GlobalParams()
		{
			return (::RPG::CustomRP::MaterialParams*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62A98);
		}
		static ::System::String** StaticGet__SessionName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x62AA8);
		}
		static ::System::Boolean* StaticGet__IsCapturing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x13660);
		}
		static ::System::Boolean* StaticGet__IsRecordingParam()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x13661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsRecordingParam()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISRECORDINGPARAM_OFFSET))();
		}

		static ::System::Boolean get_IsCapturing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISCAPTURING_OFFSET))();
		}

		static ::System::Int32 PropertyToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_PROPERTYTOID_OFFSET))(a1);
		}

		static ::System::Void StartCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTCAPTURE_OFFSET))();
		}

		static ::System::Void EndCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDCAPTURE_OFFSET))();
		}

		static ::System::Void StartSession(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTSESSION_OFFSET))(a1);
		}

		static ::System::Void EndSession()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDSESSION_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_CLEAR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>* GetDrawCallParams(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GETDRAWCALLPARAMS_OFFSET))(a1);
		}

		static ::RPG::CustomRP::MaterialParams get_GlobalParams()
		{
			return ((::RPG::CustomRP::MaterialParams(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_GLOBALPARAMS_OFFSET))();
		}

		static ::System::Void SetColorAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETCOLORANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetFloatAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetFloatArrayAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetFloatArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetIntAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETINTANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMatrixAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMatrixArrayAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMatrixArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRenderStateAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::UnityEngine::Rendering::RenderStateBlock& a2)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETRENDERSTATEANDRECORD_OFFSET))(a1, a2);
		}

		static ::System::Void SetTextureAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::UnityEngine::Rendering::RenderTextureSubElement a4)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTextureAndRecord_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetVectorAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetVectorArrayAndRecord(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetVectorArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DisableKeywordAndRecord(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DISABLEKEYWORDANDRECORD_OFFSET))(a1, a2);
		}

		static ::System::Void EnableKeywordAndRecord(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENABLEKEYWORDANDRECORD_OFFSET))(a1, a2);
		}

		static ::System::Void DrawMeshAndRecord(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Mesh* a3, ::UnityEngine::Matrix4x4 a4, ::UnityEngine::Material* a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::MaterialPropertyBlock* a8, ::Il2CppArray<::System::String*>* a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWMESHANDRECORD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DrawRendererAndRecord(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Renderer* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawRendererAndRecord_1(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Renderer* a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::System::Int32 a6, ::Il2CppArray<::System::String*>* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawRendererAndRecord_2(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Renderer* a3, ::UnityEngine::Material* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawRendererAndRecord_3(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Renderer* a3, ::UnityEngine::Material* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetGlobalFloatAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALFLOATANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGlobalVectorAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGlobalColorAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALCOLORANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGlobalMatrixAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALMATRIXANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGlobalVectorArrayAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORARRAYANDRECORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGlobalTextureAndRecord(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetGlobalTextureAndRecord_1(::UnityEngine::Rendering::CommandBufferExt* a1, ::System::Int32 a2, ::UnityEngine::Rendering::RenderTargetIdentifier& a3, ::System::Int16 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _RecordMpbParam(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDMPBPARAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RecordGlobalParam(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDGLOBALPARAM_OFFSET))(a1, a2);
		}

		static ::System::Void _RecordDrawCall(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2, ::UnityEngine::Material* a3, ::UnityEngine::MaterialPropertyBlock* a4, ::Il2CppArray<::System::String*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDDRAWCALL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
