#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class AttrKeyFrames; }
namespace MoleMole::Timeline { class FrameRecorder; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x190C1060)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET UNITYSDK_OFFSET(0x190C0150)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x190BFEE0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x190C1040)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x190C2B80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x190C2D60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_1AF357BC8EC348BD_OFFSET UNITYSDK_OFFSET(0x190C5F10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0x190C34A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2A564F70387767F8_OFFSET UNITYSDK_OFFSET(0x190C3BE0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2D331162118AACA5_OFFSET UNITYSDK_OFFSET(0x190C6090)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0x190C22A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x190C1FB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_37C87C00722A8F4B_OFFSET UNITYSDK_OFFSET(0x190C3090)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x190C3D70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_493D6328E01546D4_OFFSET UNITYSDK_OFFSET(0x190C3190)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_49AD48FB799E2E42_OFFSET UNITYSDK_OFFSET(0x190C5200)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4DC7D80C2275A666_OFFSET UNITYSDK_OFFSET(0x190C6360)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4F7257DB3153C8CF_OFFSET UNITYSDK_OFFSET(0x190C40D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_5531F30DCA0CB07B_OFFSET UNITYSDK_OFFSET(0x190C0D50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_571FA3C9F915CC8F_OFFSET UNITYSDK_OFFSET(0x190C3620)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_6167403524611113_OFFSET UNITYSDK_OFFSET(0x190C45A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_6D6B58868C572AE8_OFFSET UNITYSDK_OFFSET(0x190C4010)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_72DCA587D9B741B5_OFFSET UNITYSDK_OFFSET(0x190C2260)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_749CA2576B2ED62D_OFFSET UNITYSDK_OFFSET(0x190C5AA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_7A4EB7A4DA062DE3_OFFSET UNITYSDK_OFFSET(0x190C1BB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_816E2BA102546CE3_OFFSET UNITYSDK_OFFSET(0x190C5B00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9339CF0298A5CC7D_OFFSET UNITYSDK_OFFSET(0x190C27E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9E8F031DC61EDEFE_OFFSET UNITYSDK_OFFSET(0x190C56B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_BAB83D85B9DE2B2C_OFFSET UNITYSDK_OFFSET(0x190C2550)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_BB02C484ADDCDD8A_OFFSET UNITYSDK_OFFSET(0x190C1B40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x190C37D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C8C2BBB8EE38E9A8_OFFSET UNITYSDK_OFFSET(0x190C58B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_D0749CF6E87B297A_OFFSET UNITYSDK_OFFSET(0x190C5510)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_D1B42C039BBC3ECE_OFFSET UNITYSDK_OFFSET(0x190C49F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EAE8161D6C1EE982_OFFSET UNITYSDK_OFFSET(0x190C1090)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x190C2A40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_F2935B4A36EE90BA_OFFSET UNITYSDK_OFFSET(0x190C4680)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_FFDA4DC3E9BF4C47_OFFSET UNITYSDK_OFFSET(0x190C4160)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x190C08D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_TypeDefinitionIndex = 73705;

	class RuntimeMaterialCompRecorderInfo : public ::System::Object
	{
	public:
		// static const ::System::Single mixDeltaFloat; // 0x0
		// static const ::System::String* MultiMaterialKey; // 0x0
		// static const ::System::String* MultiMaterialPattern; // 0x0
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x10
		::UnityEngine::Renderer* MeshRenderer; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* sourceMaterials; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::RuntimeMaterialInfo*>* UpdateMeshRenderers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* _frameAttrs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::AttrKeyFrames*>* frameAttrsList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _lastFrameSignatureByMaterialIndex; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*>* _runtimeKeyframeCacheByMaterialIndex; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*>* _runtimeKeyframeEntryPoolByMaterialIndex; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* _resolvedFrameKeyCacheByMaterialIndex; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::RecorderUnitType>* _frameRecorderTypeCache; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::KFrameFieldType>* _frameFieldTypeCache; // 0x68
		::MoleMole::Timeline::FrameRecorder* _runtimeFrameRecorder; // 0x70
		::MoleMole::Timeline::FrameRecorder* _inspectorFrameRecorder; // 0x78

		::System::Void _ctor(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_instanceMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* get_FrameAttrs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_EAE8161D6C1EE982(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EAE8161D6C1EE982_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7A4EB7A4DA062DE3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_7A4EB7A4DA062DE3_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_BAB83D85B9DE2B2C(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_BAB83D85B9DE2B2C_OFFSET))(a1);
		}

		::System::Void Method_1_9339CF0298A5CC7D(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9339CF0298A5CC7D_OFFSET))(this, a1);
		}

		::System::Void Method_1_EE7339DA6ECF5F6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
		}

		::System::Void Method_1_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_1_493D6328E01546D4(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_493D6328E01546D4_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_571FA3C9F915CC8F(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_571FA3C9F915CC8F_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_BB02C484ADDCDD8A(::System::Int32 a1, ::System::Double a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_BB02C484ADDCDD8A_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Timeline::RecorderUnitType Method_1_2A564F70387767F8(::MoleMole::Timeline::RuntimeMaterialInfo* a1, ::System::String* a2)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialInfo*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2A564F70387767F8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_03BFDB1C3240A55A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
		}

		::System::Void Method_1_414C8F92528E4746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_414C8F92528E4746_OFFSET))(this);
		}

		static ::System::Boolean Method_1_6D6B58868C572AE8(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_6D6B58868C572AE8_OFFSET))(a1, a2);
		}

		::System::Void Method_1_3060617FE14209CC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_3060617FE14209CC_OFFSET))(this, a1);
		}

		::MoleMole::Timeline::KeyframeMBP* Method_1_FFDA4DC3E9BF4C47(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Keyframe a3, ::MoleMole::Timeline::RecorderUnitType a4, ::UnityEngine::Timeline::KFrameFieldType a5)
		{
			return ((::MoleMole::Timeline::KeyframeMBP*(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Keyframe, ::MoleMole::Timeline::RecorderUnitType, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_FFDA4DC3E9BF4C47_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_1_F2935B4A36EE90BA(::UnityEngine::Renderer* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_F2935B4A36EE90BA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_5531F30DCA0CB07B(::System::Boolean a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_5531F30DCA0CB07B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D1B42C039BBC3ECE(::System::Int32 a1, ::System::Double a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_D1B42C039BBC3ECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_367B9590522079D1_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_9E8F031DC61EDEFE(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9E8F031DC61EDEFE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C8C2BBB8EE38E9A8(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Timeline::KFrameFieldType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C8C2BBB8EE38E9A8_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_37C87C00722A8F4B(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_37C87C00722A8F4B_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_49AD48FB799E2E42(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_49AD48FB799E2E42_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_22E26A255EB831DA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_22E26A255EB831DA_OFFSET))(this);
		}

		static ::System::Boolean Method_1_6167403524611113(::MoleMole::Timeline::KeyframeMBP* a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Timeline::KeyframeMBP*, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_6167403524611113_OFFSET))(a1, a2);
		}

		::System::Void Method_1_749CA2576B2ED62D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_749CA2576B2ED62D_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::KFrameFieldType Method_1_D0749CF6E87B297A(::MoleMole::Timeline::RecorderUnitType a1, ::System::String* a2)
		{
			return ((::UnityEngine::Timeline::KFrameFieldType(*)(::PVOID, ::MoleMole::Timeline::RecorderUnitType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_D0749CF6E87B297A_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_1_72DCA587D9B741B5(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_72DCA587D9B741B5_OFFSET))(a1);
		}

		static ::System::String* Method_1_4F7257DB3153C8CF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4F7257DB3153C8CF_OFFSET))(a1);
		}

		::System::Void Method_1_816E2BA102546CE3(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_816E2BA102546CE3_OFFSET))(this, a1);
		}

		::System::Void Method_1_1AF357BC8EC348BD(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_1AF357BC8EC348BD_OFFSET))(this, a1);
		}

		::System::Void Method_1_2D331162118AACA5(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2D331162118AACA5_OFFSET))(this, a1);
		}

		::System::Void Method_1_4DC7D80C2275A666(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4DC7D80C2275A666_OFFSET))(this, a1);
		}
	};
}
