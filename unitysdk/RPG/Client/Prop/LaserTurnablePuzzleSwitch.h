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

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C4D50)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xA0C4060)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xA0C0F60)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xA0C51D0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0xA0C5890)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA0C57D0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xA0C5570)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0xA0C4D90)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7E51582B7C30F073_OFFSET UNITYSDK_OFFSET(0xA0C5930)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_896FA9EAB4C29FB4_OFFSET UNITYSDK_OFFSET(0xA0C5130)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_AC0B31FFDDF7B4BF_OFFSET UNITYSDK_OFFSET(0xA0C5A10)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0xA0C4EC0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xA0C5400)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0C5000)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C5E30)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xA0C5E70)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__ONROTATESELECTCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0xA0C5E90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleSwitch_TypeDefinitionIndex = 64123;

	class LaserTurnablePuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LaserTurnablePuzzleSwitch_TypeDefinitionIndex)->GetStaticField(0x12DB0);
		}
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnableSelectParamData*>* RotateParam; // 0x20
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x28
		::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_5_3; // 0x30
		::System::String* EnterTriggerCustomString; // 0x38
		::System::String* LeaveTriggerCustomString; // 0x40
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x48
		::RPG::Client::Prop::LaserTurnablePuzzleBoard* Field_5_7; // 0x50
		::RPG::Client::MonoTriggerRegion* Field_5_8; // 0x58
		::Class_3_3100354E684764E9* Field_5_9; // 0x60
		::RPG::GameCore::GameEntity* Field_5_10; // 0x68
		::UnityEngine::Animator* Field_5_11; // 0x70
		::System::Action* Field_5_12; // 0x78
		::System::Int32 Field_5_14; // 0x80

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

		::System::Boolean Method_5_E639AC66E23A9DAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_E639AC66E23A9DAF_OFFSET))(this);
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

		::System::Void Method_5_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_EBAB6A35C21A2A5B_OFFSET))(this);
		}

		::System::Void Method_5_896FA9EAB4C29FB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_896FA9EAB4C29FB4_OFFSET))(this);
		}

		::System::Void Method_5_6CC0E8D2DB72D85E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_6CC0E8D2DB72D85E_OFFSET))(this);
		}

		::System::Void Method_5_7E51582B7C30F073()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7E51582B7C30F073_OFFSET))(this);
		}

		::System::Void Method_5_AC0B31FFDDF7B4BF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_AC0B31FFDDF7B4BF_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET))(this);
		}

		::System::Void Method_5_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_METHOD_5_7646FFE662147970_OFFSET))(this);
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
