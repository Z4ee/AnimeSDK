#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define CLASS_3_55644F5B3679EDD0_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1B5192B0)
#define CLASS_3_55644F5B3679EDD0_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1B5192F0)
#define CLASS_3_55644F5B3679EDD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5192E0)

inline static constexpr unsigned int Class_3_55644F5B3679EDD0_TypeDefinitionIndex = 19150;

class Class_3_55644F5B3679EDD0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* Field_3_0; // 0x18
	::RPG::GameCore::FateRinCaseBoardTeamType Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55644F5B3679EDD0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55644F5B3679EDD0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55644F5B3679EDD0*&))((::PBYTE)hIl2Cpp + CLASS_3_55644F5B3679EDD0_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55644F5B3679EDD0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55644F5B3679EDD0*))((::PBYTE)hIl2Cpp + CLASS_3_55644F5B3679EDD0_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
