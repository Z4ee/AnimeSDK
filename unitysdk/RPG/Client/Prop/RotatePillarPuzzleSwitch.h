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

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xA1412D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA140260)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xA13F520)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xA1402A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_09161FEE113B1CBD_OFFSET UNITYSDK_OFFSET(0xA1414A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0xA141880)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0xA1415A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_424A8E8E51A30867_OFFSET UNITYSDK_OFFSET(0xA141DA0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA141CE0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xA141A70)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7E51582B7C30F073_OFFSET UNITYSDK_OFFSET(0xA141E40)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_9D5266455A5FDA1B_OFFSET UNITYSDK_OFFSET(0xA140F80)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_AC0B31FFDDF7B4BF_OFFSET UNITYSDK_OFFSET(0xA141F20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0xA141190)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xA141370)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA142360)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xA1423A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__ONROTATESELECTCLICK_B__12_0_OFFSET UNITYSDK_OFFSET(0xA1423C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleSwitch_TypeDefinitionIndex = 64263;

	class RotatePillarPuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleSwitch_TypeDefinitionIndex)->GetStaticField(0x3C80);
		}
		::RPG::GameCore::OptionTriggerInfo* RotateOptionInfo; // 0x18
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotateSelectParamData*>* RotateParam; // 0x28
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x30
		::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_5_4; // 0x38
		::System::String* EnterTriggerCustomString; // 0x40
		::System::String* LeaveTriggerCustomString; // 0x48
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x50
		::RPG::Client::Prop::RotatePillarPuzzlePillar* Field_5_8; // 0x58
		::RPG::Client::MonoTriggerRegion* Field_5_9; // 0x60
		::Class_3_3100354E684764E9_1* Field_5_10; // 0x68
		::RPG::Client::Prop::RotatePillarPuzzleSwitchData* Field_5_11; // 0x70
		::RPG::GameCore::GameEntity* Field_5_12; // 0x78
		::UnityEngine::Animator* Field_5_13; // 0x80
		::System::Action* Field_5_14; // 0x88
		::System::Int32 Field_5_16; // 0x90

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

		::System::Boolean Method_5_E639AC66E23A9DAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_E639AC66E23A9DAF_OFFSET))(this);
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

		::System::Void Method_5_3306F24AC967FE79()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_3306F24AC967FE79_OFFSET))(this);
		}

		::System::Void Method_5_307F2A71BD13D1FE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_307F2A71BD13D1FE_OFFSET))(this);
		}

		::System::Void Method_5_09161FEE113B1CBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_09161FEE113B1CBD_OFFSET))(this);
		}

		::System::Void Method_5_424A8E8E51A30867()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_424A8E8E51A30867_OFFSET))(this);
		}

		::System::Void Method_5_7E51582B7C30F073()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7E51582B7C30F073_OFFSET))(this);
		}

		::System::Void Method_5_AC0B31FFDDF7B4BF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_AC0B31FFDDF7B4BF_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7A150941533E8F96_OFFSET))(this);
		}

		::System::Void Method_5_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_METHOD_5_7646FFE662147970_OFFSET))(this);
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
