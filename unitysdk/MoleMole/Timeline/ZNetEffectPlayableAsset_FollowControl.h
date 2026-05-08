#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3E48DFCDC4A97B6A.h"
#include "unitysdk/Enum_3_AA5E322261F64EE5.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config::EffectPattern { class MonoEffectPluginFollowSoData_New; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0x15BCC9A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0x15BCDB70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0x15BCD880)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x15BCD490)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x15BCCD00)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0C29AEF00864BB0B_OFFSET UNITYSDK_OFFSET(0x15BCDEC0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_160E725E42D4E74E_OFFSET UNITYSDK_OFFSET(0x15BCDF20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15BCCE50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_688F76EE272C1B51_OFFSET UNITYSDK_OFFSET(0x15BCD270)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_9A90429BA583E7C4_OFFSET UNITYSDK_OFFSET(0x15BCD580)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15BCD840)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0x15BCCEB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0x15BCDCB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0x15BCD9C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x15BCD5D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCDE60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_FollowControl_TypeDefinitionIndex = 79662;

	class ZNetEffectPlayableAsset_FollowControl : public ::System::Object
	{
	public:
		// static const ::System::String* UN_ATTACH_GROUP_NAME; // 0x0
		::System::Boolean _isDynamicBindPoint; // 0x10
		::System::Boolean followCamera; // 0x11
		::System::String* sceneFollowPath; // 0x18
		::System::String* logicBindPointName; // 0x20
		::System::String* bindingPath; // 0x28
		::Enum_3_3E48DFCDC4A97B6A Option; // 0x30
		::Enum_3_AA5E322261F64EE5 posOffsetRelativeOption; // 0x34
		::Enum_3_AA5E322261F64EE5 angleOffsetRelativeOption; // 0x38
		::System::Boolean OnlyFirstFrame; // 0x3C
		::UnityEngine::GameObject* m_stGoCtx; // 0x40
		::System::String* m_sFxPath; // 0x48
		::MoleMole::Timeline::ZNetEffectPlayableAsset* m_stZNetAsset; // 0x50
		::System::String* m_sAnimClipName; // 0x58
		::System::Boolean m_bIsNormalFx; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_bindingTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET))(this);
		}

		::System::Void set_bindingTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET))(this, a1);
		}

		::System::Boolean get_useUnAttachConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET))(this);
		}

		::System::Void set_useUnAttachConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_unAttachMaxEndFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachMaxEndFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET))(this, a1);
		}

		::System::Int32 get_unAttachEndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachEndFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET))(this, a1);
		}

		::System::Void Method_1_688F76EE272C1B51(::UnityEngine::Transform* a1, ::System::String* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_Struct_2_EB3E19A852D50FD1&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_688F76EE272C1B51_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New* Method_1_9A90429BA583E7C4(::System::Boolean a1)
		{
			return ((::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_9A90429BA583E7C4_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C29AEF00864BB0B(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0C29AEF00864BB0B_OFFSET))(this, a1, a2);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_1_160E725E42D4E74E()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_160E725E42D4E74E_OFFSET))(this);
		}

		::System::Boolean Method_1_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
		}
	};
}
