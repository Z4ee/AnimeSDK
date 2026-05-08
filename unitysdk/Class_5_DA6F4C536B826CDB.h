#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_9670E27955E267E8.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_5_DA6F4C536B826CDB_METHOD_5_58568A80241DF00E_OFFSET UNITYSDK_OFFSET(0xD21D140)
#define CLASS_5_DA6F4C536B826CDB_METHOD_5_D6D811AB473606F4_OFFSET UNITYSDK_OFFSET(0xD21D240)
#define CLASS_5_DA6F4C536B826CDB__CTOR_OFFSET UNITYSDK_OFFSET(0xD21D230)

inline static constexpr unsigned int Class_5_DA6F4C536B826CDB_TypeDefinitionIndex = 82934;

class Class_5_DA6F4C536B826CDB : public ::Class_4_9670E27955E267E8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DA6F4C536B826CDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_58568A80241DF00E(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_DA6F4C536B826CDB_METHOD_5_58568A80241DF00E_OFFSET))(this, a1);
	}

	::System::Void Method_5_D6D811AB473606F4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_DA6F4C536B826CDB_METHOD_5_D6D811AB473606F4_OFFSET))(this, a1);
	}
};
