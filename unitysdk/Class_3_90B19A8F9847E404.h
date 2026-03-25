#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GetGapSecondsForSyncWithBgm; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_90B19A8F9847E404_METHOD_3_54C9CBD5ABF6189F_OFFSET UNITYSDK_OFFSET(0x106245A0)
#define CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_1_OFFSET UNITYSDK_OFFSET(0x10624800)
#define CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_OFFSET UNITYSDK_OFFSET(0x10624750)
#define CLASS_3_90B19A8F9847E404_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10623D40)
#define CLASS_3_90B19A8F9847E404__CTOR_OFFSET UNITYSDK_OFFSET(0x10623BB0)

inline static constexpr unsigned int Class_3_90B19A8F9847E404_TypeDefinitionIndex = 45304;

class Class_3_90B19A8F9847E404 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GetGapSecondsForSyncWithBgm*>
{
public:
	::RPG::GameCore::StringHash Field_3_1; // 0x28
	::RPG::GameCore::StringHash Field_3_0; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_54C9CBD5ABF6189F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_METHOD_3_54C9CBD5ABF6189F_OFFSET))(this);
	}

	::System::Void Method_3_74135C6BDA455C3A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_OFFSET))(this, a1);
	}

	::System::Void Method_3_74135C6BDA455C3A_1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_1_OFFSET))(this, a1);
	}
};
