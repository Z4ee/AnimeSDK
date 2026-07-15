#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26D3B5DABDB8336A_ChangeSource.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_26D3B5DABDB8336A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11627B60)
#define CLASS_2_26D3B5DABDB8336A_GET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x11628290)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_0FF711E1520484B8_OFFSET UNITYSDK_OFFSET(0x11627630)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x116269A0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11626A00)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x116281F0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x116277D0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0x11628120)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_96AA6C1865243526_OFFSET UNITYSDK_OFFSET(0x11626CE0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_A4A798E0E81B27AE_OFFSET UNITYSDK_OFFSET(0x116267D0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x116271D0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_CEE72EAC18ECC163_1_OFFSET UNITYSDK_OFFSET(0x116273C0)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x11627490)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_CFB4683D7465D57F_OFFSET UNITYSDK_OFFSET(0x11627D20)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x11627020)
#define CLASS_2_26D3B5DABDB8336A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11628280)
#define CLASS_2_26D3B5DABDB8336A_SET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x116282A0)
#define CLASS_2_26D3B5DABDB8336A_TICK_OFFSET UNITYSDK_OFFSET(0x11627CA0)
#define CLASS_2_26D3B5DABDB8336A__CTOR_OFFSET UNITYSDK_OFFSET(0x116266F0)

inline static constexpr unsigned int Class_2_26D3B5DABDB8336A_TypeDefinitionIndex = 69958;

class Class_2_26D3B5DABDB8336A : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x3DB4E2; // 0x0
	::RPG::Client::EraFlipperManager* Field_2_1; // 0x18
	::RPG::Client::EraFlipperCommonConfig* __CommonConfig_k__BackingField; // 0x20
	::RPG::Client::AchievementData* Field_2_3; // 0x28
	::System::Nullable_1<::RPG::GameCore::EraStateType> Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39
	::System::Boolean Field_2_7; // 0x3A
	::System::Boolean Field_2_8; // 0x3B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4A798E0E81B27AE(::Class_2_26D3B5DABDB8336A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_26D3B5DABDB8336A*))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_A4A798E0E81B27AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_CEE72EAC18ECC163_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_CEE72EAC18ECC163_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_96AA6C1865243526(::System::Boolean a1, ::Class_2_26D3B5DABDB8336A_ChangeSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_26D3B5DABDB8336A_ChangeSource))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_96AA6C1865243526_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB4683D7465D57F(::System::Boolean a1, ::Class_2_26D3B5DABDB8336A_ChangeSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_26D3B5DABDB8336A_ChangeSource))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_CFB4683D7465D57F_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_0FF711E1520484B8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_0FF711E1520484B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_812B27EF664F59CD(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::RPG::Client::EraFlipperCommonConfig* get__CommonConfig()
	{
		return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_GET__COMMONCONFIG_OFFSET))(this);
	}

	::System::Void set__CommonConfig(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_26D3B5DABDB8336A_SET__COMMONCONFIG_OFFSET))(this, a1);
	}
};
