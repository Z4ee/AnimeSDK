#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_2_A1F69E2229E56CFE;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_BC1642CEE8AE3624_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7061C0)
#define CLASS_2_BC1642CEE8AE3624__CTOR_OFFSET UNITYSDK_OFFSET(0xB7063F0)

inline static constexpr unsigned int Class_2_BC1642CEE8AE3624_TypeDefinitionIndex = 54479;

class Class_2_BC1642CEE8AE3624 : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* KBIBCKNINNH; // 0x20
	::System::UInt32 JIDLKIHJLFL; // 0x28
	::System::UInt32 AAGKEBFHLMC; // 0x2C
	::System::UInt32 GBJLLAJJEOL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1642CEE8AE3624__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_BC1642CEE8AE3624_EXECUTE_OFFSET))(this, a1);
	}
};
