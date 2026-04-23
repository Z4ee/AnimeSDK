#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_382;
class Class_2_D3EA6D8283D6026E;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_098DE510031D8543_METHOD_2_0A4471CBCF67C562_OFFSET UNITYSDK_OFFSET(0x12121560)
#define CLASS_2_098DE510031D8543_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x12121BE0)
#define CLASS_2_098DE510031D8543_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x12121130)
#define CLASS_2_098DE510031D8543_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12121250)
#define CLASS_2_098DE510031D8543_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0x121212E0)
#define CLASS_2_098DE510031D8543_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x12121070)
#define CLASS_2_098DE510031D8543_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12121F50)
#define CLASS_2_098DE510031D8543_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12121EF0)
#define CLASS_2_098DE510031D8543_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x12121C80)
#define CLASS_2_098DE510031D8543_METHOD_2_CE0B13F1CB0D9C10_OFFSET UNITYSDK_OFFSET(0x12120CC0)
#define CLASS_2_098DE510031D8543_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x12122020)
#define CLASS_2_098DE510031D8543_METHOD_2_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0x12121630)
#define CLASS_2_098DE510031D8543_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x12120DA0)
#define CLASS_2_098DE510031D8543__CTOR_OFFSET UNITYSDK_OFFSET(0x12121E50)
#define CLASS_2_098DE510031D8543__ONBIND_OFFSET UNITYSDK_OFFSET(0x12120C00)
#define CLASS_2_098DE510031D8543__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x121211A0)
#define CLASS_2_098DE510031D8543__ONTICK_OFFSET UNITYSDK_OFFSET(0x12121010)
#define CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12121E90)
#define CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12122090)
#define CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x12121FB0)

inline static constexpr unsigned int Class_2_098DE510031D8543_TypeDefinitionIndex = 66042;

class Class_2_098DE510031D8543 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68
	::RPG::GameCore::EventManager* Field_2_4; // 0x70
	::RPG::GameCore::TeamDataComponent* Field_2_6; // 0x78
	::RPG::Client::MonoInControlTip* Field_2_2; // 0x80
	::RPG::GameCore::TeamDataComponent* Field_2_5; // 0x88
	::UnityEngine::Animation* Field_2_0; // 0x90
	::Class_2_D3EA6D8283D6026E* Field_2_7; // 0x98
	::System::Boolean Field_2_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CE0B13F1CB0D9C10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_CE0B13F1CB0D9C10_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A4471CBCF67C562(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_0A4471CBCF67C562_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_098DE510031D8543___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
