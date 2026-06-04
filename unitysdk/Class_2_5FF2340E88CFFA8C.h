#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class String; }

#define CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA550560)
#define CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5506F0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0xA551200)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET UNITYSDK_OFFSET(0xA550B60)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_23B529B4DB8AFE59_OFFSET UNITYSDK_OFFSET(0xA550BE0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA550B10)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4306F3E882709A3A_OFFSET UNITYSDK_OFFSET(0xA550AC0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA550910)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA550600)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET UNITYSDK_OFFSET(0xA550960)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_5587AE4B03E68C58_1_OFFSET UNITYSDK_OFFSET(0xA551790)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0xA551730)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET UNITYSDK_OFFSET(0xA5509D0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA550CB0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0xA550D90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_A75D7A9C1392E81B_OFFSET UNITYSDK_OFFSET(0xA5517E0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA551990)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xA551040)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA550D10)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0xA551470)
#define CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET UNITYSDK_OFFSET(0xA550680)
#define CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5519A0)
#define CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET UNITYSDK_OFFSET(0xA550550)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__15_0_OFFSET UNITYSDK_OFFSET(0xA5519F0)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0xA551AA0)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA551B30)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA551B20)

inline static constexpr unsigned int Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex = 53575;

class Class_2_5FF2340E88CFFA8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex)->GetStaticField(0x62E50);
	}
	::System::String* Field_2_1; // 0x18
	::Class_1_23F67DD15593C8D6* Field_2_2; // 0x20
	::RPG::GameCore::CharacterVisibleComponent* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39
	::System::Boolean Field_2_7; // 0x3A
	::System::Boolean Field_2_8; // 0x3B
	::System::Nullable_1<::System::Boolean> Field_2_9; // 0x3C
	::System::Boolean Field_2_10; // 0x3E
	::System::Single Field_2_11; // 0x40
	::RPG::GameCore::StoryCharacterApperMode Field_2_12; // 0x44

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

	::System::Void Method_2_23B529B4DB8AFE59(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_23B529B4DB8AFE59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_81855C54613E2F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_5587AE4B03E68C58_1_OFFSET))(this);
	}

	::System::Void Method_2_A75D7A9C1392E81B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_A75D7A9C1392E81B_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
