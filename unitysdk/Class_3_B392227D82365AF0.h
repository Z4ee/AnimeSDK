#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define CLASS_3_B392227D82365AF0_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CF96EB0)
#define CLASS_3_B392227D82365AF0_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CF96EF0)
#define CLASS_3_B392227D82365AF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96EE0)

inline static constexpr unsigned int Class_3_B392227D82365AF0_TypeDefinitionIndex = 19701;

class Class_3_B392227D82365AF0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* OOPCPMANCBO; // 0x18
	::System::Single NEMDKBKDFDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B392227D82365AF0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B392227D82365AF0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B392227D82365AF0*&))((::PBYTE)hIl2Cpp + CLASS_3_B392227D82365AF0_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B392227D82365AF0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B392227D82365AF0*))((::PBYTE)hIl2Cpp + CLASS_3_B392227D82365AF0_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
