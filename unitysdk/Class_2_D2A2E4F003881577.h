#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD13CF36787C336.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_2_A1F69E2229E56CFE;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_D2A2E4F003881577_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE02BD10)
#define CLASS_2_D2A2E4F003881577__CTOR_OFFSET UNITYSDK_OFFSET(0xE02BF10)
#define CLASS_2_D2A2E4F003881577___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE02BF20)

inline static constexpr unsigned int Class_2_D2A2E4F003881577_TypeDefinitionIndex = 50046;

class Class_2_D2A2E4F003881577 : public ::Class_1_BCD13CF36787C336
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* Field_2_3; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x2C
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2A2E4F003881577__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_D2A2E4F003881577_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_D2A2E4F003881577___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
