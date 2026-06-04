#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"

class Class_0_16E4307DCC419505_401;
class Class_1_D63DE2EC2835DB62;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_BD05FCC7D4CB35F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFF1D30)
#define CLASS_2_BD05FCC7D4CB35F0_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0xAFF1BB0)
#define CLASS_2_BD05FCC7D4CB35F0_METHOD_2_5A959B01CAC89C9F_OFFSET UNITYSDK_OFFSET(0xAFF2020)
#define CLASS_2_BD05FCC7D4CB35F0_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xAFF2250)
#define CLASS_2_BD05FCC7D4CB35F0_METHOD_2_B8D62B19020E5EA4_OFFSET UNITYSDK_OFFSET(0xAFF22B0)
#define CLASS_2_BD05FCC7D4CB35F0_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0xAFF2370)
#define CLASS_2_BD05FCC7D4CB35F0_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xAFF1E90)
#define CLASS_2_BD05FCC7D4CB35F0_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xAFF1F40)
#define CLASS_2_BD05FCC7D4CB35F0_TICK_OFFSET UNITYSDK_OFFSET(0xAFF1FB0)
#define CLASS_2_BD05FCC7D4CB35F0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF2460)
#define CLASS_2_BD05FCC7D4CB35F0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAFF2470)

inline static constexpr unsigned int Class_2_BD05FCC7D4CB35F0_TypeDefinitionIndex = 53692;

class Class_2_BD05FCC7D4CB35F0 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_D63DE2EC2835DB62* Field_2_0; // 0x18
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_1; // 0x20
	::RPG::GameCore::TimeRewindView Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A959B01CAC89C9F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_METHOD_2_5A959B01CAC89C9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_B8D62B19020E5EA4(::RPG::GameCore::TimeRewindView a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_METHOD_2_B8D62B19020E5EA4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD05FCC7D4CB35F0___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
