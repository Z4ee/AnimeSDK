#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3100354E684764E9;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleBoard; }
namespace RPG::Client::Prop { class LaserTurnableSelectParamData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC94EC0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDC94260)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDC91310)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xDC95340)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDC95290)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xDC95840)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xDC95990)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xDC95650)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0xDC94F00)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xDC95500)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xDC95030)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_DEBB69024F9AF32D_OFFSET UNITYSDK_OFFSET(0xDC95A80)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0xDC95930)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC95100)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xDC95F40)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xDC95F80)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__ONROTATESELECTCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0xDC95FA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleSwitch_TypeDefinitionIndex = 78203;

	class LaserTurnablePuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LaserTurnablePuzzleSwitch_TypeDefinitionIndex)->GetStaticField(0x14BA0);
		}
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnableSelectParamData*>* RotateParam; // 0x20
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x28
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x30
		::System::String* EnterTriggerCustomString; // 0x38
		::System::String* LeaveTriggerCustomString; // 0x40
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x48
		::RPG::Client::Prop::LaserTurnablePuzzleBoard* AGAHPOHHGMP; // 0x50
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x58
		::Class_3_3100354E684764E9* GALAHGAJODG; // 0x60
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::System::Action* JCGFOCCPHEH; // 0x78
		::System::Int32 JMNBEELOLGF; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LaserTurnablePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LaserTurnablePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_A0433AB55CC45192()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_A0433AB55CC45192_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_7AAD06186762BE3C(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7AAD06186762BE3C_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void Method_5_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_5_8DC652D916C182B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_8DC652D916C182B2_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_F4C8B018D655630D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_F4C8B018D655630D_OFFSET))(this);
		}

		::System::Void Method_5_7835DD7D7F7FF1B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7835DD7D7F7FF1B7_OFFSET))(this);
		}

		::System::Void Method_5_DEBB69024F9AF32D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_DEBB69024F9AF32D_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__ONROTATESELECTCLICK_B__11_0_OFFSET))(this);
		}
	};
}
