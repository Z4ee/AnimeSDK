#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_839D2B0410C42D5A.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_2_A1F69E2229E56CFE;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_E144AD73C5C78A82_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA460770)
#define CLASS_2_E144AD73C5C78A82__CTOR_OFFSET UNITYSDK_OFFSET(0xA4609B0)
#define CLASS_2_E144AD73C5C78A82___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4609C0)

inline static constexpr unsigned int Class_2_E144AD73C5C78A82_TypeDefinitionIndex = 50713;

class Class_2_E144AD73C5C78A82 : public ::Class_1_839D2B0410C42D5A
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::System::UInt32 Field_2_2; // 0x2C
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E144AD73C5C78A82__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_E144AD73C5C78A82_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_E144AD73C5C78A82___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
