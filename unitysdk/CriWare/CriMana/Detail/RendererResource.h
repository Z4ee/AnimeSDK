#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET UNITYSDK_OFFSET(0x164F5860)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET UNITYSDK_OFFSET(0x164F5890)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET UNITYSDK_OFFSET(0x164F5870)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET UNITYSDK_OFFSET(0x164F5880)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET UNITYSDK_OFFSET(0x164F5850)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE025F7B72_OFFSET UNITYSDK_OFFSET(0x164F5B40)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE197CA6FD_OFFSET UNITYSDK_OFFSET(0x164F5AA0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE6349A829_OFFSET UNITYSDK_OFFSET(0x164F5440)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE83C2C2D1_OFFSET UNITYSDK_OFFSET(0x164F5BE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREDCA79991_OFFSET UNITYSDK_OFFSET(0x164F5920)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET UNITYSDK_OFFSET(0x164F58A0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x164F51A0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164F51D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164F5130)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET UNITYSDK_OFFSET(0x164F56F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETDISPLAYEDFRAMENO_OFFSET UNITYSDK_OFFSET(0x164F57E0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x164F53C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x164F57D0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET UNITYSDK_OFFSET(0x164F5820)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x164F57F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET UNITYSDK_OFFSET(0x164F5780)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTART_OFFSET UNITYSDK_OFFSET(0x164F57B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x164F57A0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOP_OFFSET UNITYSDK_OFFSET(0x164F5790)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x164F5760)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x164F5720)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x164F5770)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x164F54C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SHOULDSKIPDESTROYONSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x164F57C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x164F5C80)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResource_TypeDefinitionIndex = 38936;

	class RendererResource : public ::System::Object
	{
	public:
		::UnityEngine::Material* currentMaterial; // 0x10
		::UnityEngine::Shader* shader; // 0x18
		::System::Boolean applyTargetAlpha; // 0x20
		::System::Boolean hasAlpha; // 0x21
		::System::Boolean additive; // 0x22
		::System::Boolean ui; // 0x23
		::System::Boolean disposed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int32 GetNumberOfFrameBeforeDestroy(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET))(this, a1);
		}

		::System::Void SetupStaticMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void GetBlendModes(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET))(this, a1, a2);
		}

		::System::Void SetApplyTargetAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET))(this, a1);
		}

		::System::Void SetUiRenderMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET))(this, a1);
		}

		::System::Void OnPlayerPause(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOP_OFFSET))(this);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Void OnPlayerStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTART_OFFSET))(this);
		}

		::System::Boolean ShouldSkipDestroyOnStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SHOULDSKIPDESTROYONSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Int32 GetDisplayedFrameNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETDISPLAYEDFRAMENO_OFFSET))(this);
		}

		static ::System::UInt32 NextPowerOfTwo(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Int32 NextPowerOfTwo_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET))(a1);
		}

		static ::System::Int32 CeilingWith(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET))(a1, a2);
		}

		static ::System::Int32 Ceiling16(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling32(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling64(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling256(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET))(a1);
		}

		static ::System::Void DisposeTextures(::Il2CppArray<::UnityEngine::Texture*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET))(a1);
		}

		static ::System::Void SetKeyword(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWAREDCA79991(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3, ::CriWare::CriMana::FrameInfo* a4, ::System::Boolean& a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREDCA79991_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CRIWARE197CA6FD(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE197CA6FD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWARE025F7B72(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE025F7B72_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWARE83C2C2D1(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE83C2C2D1_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CRIWARE6349A829(::System::Int32 a1)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE6349A829_OFFSET))(a1);
		}
	};
}
