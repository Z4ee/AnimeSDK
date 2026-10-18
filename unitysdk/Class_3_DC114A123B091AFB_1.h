#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_5927E3FC05B75928;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC114A123B091AFB_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBA5A0)
#define CLASS_3_DC114A123B091AFB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBA570)

inline static constexpr unsigned int Class_3_DC114A123B091AFB_1_TypeDefinitionIndex = 57886;

class Class_3_DC114A123B091AFB_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5927E3FC05B75928*>
{
public:
	::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5927E3FC05B75928* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5927E3FC05B75928*))((::PBYTE)hIl2Cpp + CLASS_3_DC114A123B091AFB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC114A123B091AFB_1_ONTASKBEGIN_OFFSET))(this);
	}
};
