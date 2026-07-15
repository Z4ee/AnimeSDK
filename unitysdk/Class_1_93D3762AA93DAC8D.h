#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define CLASS_1_93D3762AA93DAC8D_METHOD_1_0075C29CF13D25C8_OFFSET UNITYSDK_OFFSET(0x15B1A090)
#define CLASS_1_93D3762AA93DAC8D_METHOD_1_729D77C134B69609_OFFSET UNITYSDK_OFFSET(0x15B1A270)
#define CLASS_1_93D3762AA93DAC8D_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x15B1A1E0)
#define CLASS_1_93D3762AA93DAC8D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1A350)

inline static constexpr unsigned int Class_1_93D3762AA93DAC8D_TypeDefinitionIndex = 68855;

class Class_1_93D3762AA93DAC8D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D3762AA93DAC8D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0075C29CF13D25C8(::System::Boolean a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_93D3762AA93DAC8D_METHOD_1_0075C29CF13D25C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_93D3762AA93DAC8D_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::RPG::GameCore::DamageTextTeamPoolConfig* Method_1_729D77C134B69609(::System::Boolean a1)
	{
		return ((::RPG::GameCore::DamageTextTeamPoolConfig*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93D3762AA93DAC8D_METHOD_1_729D77C134B69609_OFFSET))(a1);
	}
};
