#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define CLASS_3_11CB91E0E8E31875_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CB70100)
#define CLASS_3_11CB91E0E8E31875_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CB70140)
#define CLASS_3_11CB91E0E8E31875__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB70130)

inline static constexpr unsigned int Class_3_11CB91E0E8E31875_TypeDefinitionIndex = 21215;

class Class_3_11CB91E0E8E31875 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimPortalTarget* MCLLALGABAB; // 0x18
	::System::Boolean OOMOFODFCBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11CB91E0E8E31875__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11CB91E0E8E31875*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11CB91E0E8E31875*&))((::PBYTE)hIl2Cpp + CLASS_3_11CB91E0E8E31875_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11CB91E0E8E31875* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11CB91E0E8E31875*))((::PBYTE)hIl2Cpp + CLASS_3_11CB91E0E8E31875_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
