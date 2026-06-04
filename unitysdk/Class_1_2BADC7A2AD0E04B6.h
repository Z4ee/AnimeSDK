#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define CLASS_1_2BADC7A2AD0E04B6_METHOD_1_5341C87A6C39F0F1_OFFSET UNITYSDK_OFFSET(0x14276780)
#define CLASS_1_2BADC7A2AD0E04B6_METHOD_1_729D77C134B69609_OFFSET UNITYSDK_OFFSET(0x14276900)
#define CLASS_1_2BADC7A2AD0E04B6_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x142768A0)
#define CLASS_1_2BADC7A2AD0E04B6__CTOR_OFFSET UNITYSDK_OFFSET(0x142769E0)

inline static constexpr unsigned int Class_1_2BADC7A2AD0E04B6_TypeDefinitionIndex = 67386;

class Class_1_2BADC7A2AD0E04B6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BADC7A2AD0E04B6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5341C87A6C39F0F1(::System::Boolean a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2BADC7A2AD0E04B6_METHOD_1_5341C87A6C39F0F1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BADC7A2AD0E04B6_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::RPG::GameCore::DamageTextTeamPoolConfig* Method_1_729D77C134B69609(::System::Boolean a1)
	{
		return ((::RPG::GameCore::DamageTextTeamPoolConfig*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2BADC7A2AD0E04B6_METHOD_1_729D77C134B69609_OFFSET))(a1);
	}
};
