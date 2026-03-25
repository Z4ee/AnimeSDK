#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class String; }

#define CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11512920)
#define CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11512A90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x11513730)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET UNITYSDK_OFFSET(0x11513000)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x11513580)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11512FB0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4306F3E882709A3A_OFFSET UNITYSDK_OFFSET(0x11512F60)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x115129B0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET UNITYSDK_OFFSET(0x11512E00)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x11513990)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET UNITYSDK_OFFSET(0x11512E70)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11512D60)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9D86A9A378EEE9C7_OFFSET UNITYSDK_OFFSET(0x11513CE0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x115132D0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_A3954765C309C87A_OFFSET UNITYSDK_OFFSET(0x11513080)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_C436A2848092EB88_1_OFFSET UNITYSDK_OFFSET(0x11513C90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x11513C30)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11513E90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x115131A0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11513250)
#define CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET UNITYSDK_OFFSET(0x11512A20)
#define CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11513EA0)
#define CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11512910)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__15_0_OFFSET UNITYSDK_OFFSET(0x11513EF0)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x11513FA0)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11514030)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11514020)

inline static constexpr unsigned int Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex = 46200;

class Class_2_5FF2340E88CFFA8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_11()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex)->GetStaticField(0x40910);
	}
	::Class_1_23F67DD15593C8D6* Field_2_9; // 0x18
	::System::String* Field_2_5; // 0x20
	::RPG::GameCore::CharacterVisibleComponent* Field_2_0; // 0x28
	::System::String* Field_2_6; // 0x30
	::System::Nullable_1<::System::Boolean> Field_2_1; // 0x38
	::System::Boolean Field_2_4; // 0x3A
	::System::Boolean Field_2_10; // 0x3B
	::System::Boolean Field_2_8; // 0x3C
	::System::Boolean Field_2_2; // 0x3D
	::System::Boolean Field_2_12; // 0x3E
	::System::Single Field_2_7; // 0x40
	::RPG::GameCore::StoryCharacterApperMode Field_2_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_469B5B6FF2B897D9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4306F3E882709A3A(::RPG::GameCore::StoryCharacterApperMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterApperMode))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4306F3E882709A3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD6A0326CCBE110(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A3954765C309C87A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_A3954765C309C87A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_81855C54613E2F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_2_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_C436A2848092EB88_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_C436A2848092EB88_1_OFFSET))(this);
	}

	::System::Void Method_2_9D86A9A378EEE9C7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9D86A9A378EEE9C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __BeginFadeIn_OnlyEffectMode_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__15_0_OFFSET))(this);
	}

	::System::Void __BeginFadeOut_OnlyEffectMode_b__16_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__16_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
