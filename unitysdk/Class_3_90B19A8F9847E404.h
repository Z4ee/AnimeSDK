#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GetGapSecondsForSyncWithBgm; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_90B19A8F9847E404_METHOD_3_002CCF446C4C66C2_OFFSET UNITYSDK_OFFSET(0x170A12D0)
#define CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_1_OFFSET UNITYSDK_OFFSET(0x170A1440)
#define CLASS_3_90B19A8F9847E404_METHOD_3_74135C6BDA455C3A_OFFSET UNITYSDK_OFFSET(0x170A1390)
#define CLASS_3_90B19A8F9847E404_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170A0E50)
#define CLASS_3_90B19A8F9847E404__CTOR_OFFSET UNITYSDK_OFFSET(0x170A0CC0)

inline static constexpr unsigned int Class_3_90B19A8F9847E404_TypeDefinitionIndex = 56546;

class Class_3_90B19A8F9847E404 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GetGapSecondsForSyncWithBgm*>
{
public:
	::RPG::GameCore::StringHash GCAFAMPEMDN; // 0x28
	::RPG::GameCore::StringHash AJMLDJCJFEG; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_002CCF446C4C66C2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90B19A8F9847E404_METHOD_3_002CCF446C4C66C2_OFFSET))(this);
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
