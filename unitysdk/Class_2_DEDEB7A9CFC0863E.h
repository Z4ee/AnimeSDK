#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DEDEB7A9CFC0863E_ChangeSource.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_DEDEB7A9CFC0863E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1298D880)
#define CLASS_2_DEDEB7A9CFC0863E_GET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1298DF60)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_086AF5E1F81FD4BC_OFFSET UNITYSDK_OFFSET(0x1298D1B0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_0FF711E1520484B8_OFFSET UNITYSDK_OFFSET(0x1298D350)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1298C6A0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_4E4517540F7A2678_OFFSET UNITYSDK_OFFSET(0x1298D0E0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_66B58BEE3C528647_OFFSET UNITYSDK_OFFSET(0x1298C990)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1298CEF0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x1298DEC0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0x1298DE00)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x1298D500)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_A4A798E0E81B27AE_OFFSET UNITYSDK_OFFSET(0x1298C4C0)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x1298C700)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_CFB4683D7465D57F_OFFSET UNITYSDK_OFFSET(0x1298DA10)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1298CD40)
#define CLASS_2_DEDEB7A9CFC0863E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1298DF50)
#define CLASS_2_DEDEB7A9CFC0863E_SET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1298DF70)
#define CLASS_2_DEDEB7A9CFC0863E_TICK_OFFSET UNITYSDK_OFFSET(0x1298D990)
#define CLASS_2_DEDEB7A9CFC0863E__CTOR_OFFSET UNITYSDK_OFFSET(0x1298C410)
#define CLASS_2_DEDEB7A9CFC0863E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1298DF80)

inline static constexpr unsigned int Class_2_DEDEB7A9CFC0863E_TypeDefinitionIndex = 67510;

class Class_2_DEDEB7A9CFC0863E : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 Field_2_8 = 0x3DB4E2; // 0x0
	::RPG::Client::AchievementData* Field_2_5; // 0x18
	::RPG::Client::EraFlipperCommonConfig* __CommonConfig_k__BackingField; // 0x20
	::RPG::Client::EraFlipperManager* Field_2_7; // 0x28
	::System::Boolean Field_2_0; // 0x30
	::System::Boolean Field_2_1; // 0x31
	::System::Boolean Field_2_6; // 0x32
	::System::Boolean Field_2_2; // 0x33
	::System::Nullable_1<::RPG::GameCore::EraStateType> Field_2_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4A798E0E81B27AE(::Class_2_DEDEB7A9CFC0863E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DEDEB7A9CFC0863E*))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_A4A798E0E81B27AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_086AF5E1F81FD4BC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_086AF5E1F81FD4BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_4E4517540F7A2678(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_4E4517540F7A2678_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_66B58BEE3C528647(::System::Boolean a1, ::Class_2_DEDEB7A9CFC0863E_ChangeSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_DEDEB7A9CFC0863E_ChangeSource))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_66B58BEE3C528647_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB4683D7465D57F(::System::Boolean a1, ::Class_2_DEDEB7A9CFC0863E_ChangeSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_DEDEB7A9CFC0863E_ChangeSource))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_CFB4683D7465D57F_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_0FF711E1520484B8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_0FF711E1520484B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_812B27EF664F59CD(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::RPG::Client::EraFlipperCommonConfig* get__CommonConfig()
	{
		return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_GET__COMMONCONFIG_OFFSET))(this);
	}

	::System::Void set__CommonConfig(::RPG::Client::EraFlipperCommonConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E_SET__COMMONCONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEDEB7A9CFC0863E___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
