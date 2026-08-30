#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_DBCE1D6F45BA29F0_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1D0CD7D0)
#define CLASS_3_DBCE1D6F45BA29F0_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1D0CD810)
#define CLASS_3_DBCE1D6F45BA29F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CD800)

inline static constexpr unsigned int Class_3_DBCE1D6F45BA29F0_TypeDefinitionIndex = 19720;

class Class_3_DBCE1D6F45BA29F0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::Client::TextID GBBGMEMBFJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBCE1D6F45BA29F0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DBCE1D6F45BA29F0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DBCE1D6F45BA29F0*&))((::PBYTE)hIl2Cpp + CLASS_3_DBCE1D6F45BA29F0_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DBCE1D6F45BA29F0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DBCE1D6F45BA29F0*))((::PBYTE)hIl2Cpp + CLASS_3_DBCE1D6F45BA29F0_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
