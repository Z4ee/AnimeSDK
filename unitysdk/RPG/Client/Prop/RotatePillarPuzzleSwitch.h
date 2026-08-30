#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3100354E684764E9_1;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class RotatePillarPuzzlePillar; }
namespace RPG::Client::Prop { class RotatePillarPuzzleSwitchData; }
namespace RPG::Client::Prop { class RotateSelectParamData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xDD0C890)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD121D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDD117D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDD09EC0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDD12670)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xDD12DC0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0xDD129F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0xDD12780)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xDD12F10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xDD12BD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_9D5266455A5FDA1B_OFFSET UNITYSDK_OFFSET(0xDD12210)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xDD12410)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_DEBB69024F9AF32D_OFFSET UNITYSDK_OFFSET(0xDD13010)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0xDD12EB0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD124E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xDD13510)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xDD13550)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__ONROTATESELECTCLICK_B__12_0_OFFSET UNITYSDK_OFFSET(0xDD13570)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleSwitch_TypeDefinitionIndex = 78343;

	class RotatePillarPuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleSwitch_TypeDefinitionIndex)->GetStaticField(0x14F20);
		}
		::RPG::GameCore::OptionTriggerInfo* RotateOptionInfo; // 0x18
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotateSelectParamData*>* RotateParam; // 0x28
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x30
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x38
		::System::String* EnterTriggerCustomString; // 0x40
		::System::String* LeaveTriggerCustomString; // 0x48
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x50
		::RPG::Client::Prop::RotatePillarPuzzlePillar* MHJDDCJLBKB; // 0x58
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x60
		::Class_3_3100354E684764E9_1* GALAHGAJODG; // 0x68
		::RPG::Client::Prop::RotatePillarPuzzleSwitchData* APPIHABBCGK; // 0x70
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x78
		::UnityEngine::Animator* APPGGMLEPLN; // 0x80
		::System::Action* JCGFOCCPHEH; // 0x88
		::System::Int32 JMNBEELOLGF; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RotatePillarPuzzleSwitchData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RotatePillarPuzzleSwitchData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Void DisableSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISABLESWITCH_OFFSET))(this);
		}

		::System::Boolean Method_5_A0433AB55CC45192()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_A0433AB55CC45192_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_9D5266455A5FDA1B(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_9D5266455A5FDA1B_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void Method_5_62167C28EC14CC63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_62167C28EC14CC63_OFFSET))(this);
		}

		::System::Void Method_5_557CBF1730FC2E87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_557CBF1730FC2E87_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_F4C8B018D655630D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_F4C8B018D655630D_OFFSET))(this);
		}

		::System::Void Method_5_7835DD7D7F7FF1B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7835DD7D7F7FF1B7_OFFSET))(this);
		}

		::System::Void Method_5_DEBB69024F9AF32D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_DEBB69024F9AF32D_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__ONROTATESELECTCLICK_B__12_0_OFFSET))(this);
		}
	};
}
