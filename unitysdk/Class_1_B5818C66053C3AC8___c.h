#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B5818C66053C3AC8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13069F50)
#define CLASS_1_B5818C66053C3AC8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13069F80)
#define CLASS_1_B5818C66053C3AC8___C__GETSORTEDMAPPROPCONDITION_B__41_0_OFFSET UNITYSDK_OFFSET(0x13069F90)

inline static constexpr unsigned int Class_1_B5818C66053C3AC8___c_TypeDefinitionIndex = 62180;

class Class_1_B5818C66053C3AC8___c : public ::System::Object
{
public:
	static ::Class_1_B5818C66053C3AC8___c** StaticGet___9()
	{
		return (::Class_1_B5818C66053C3AC8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5818C66053C3AC8___c_TypeDefinitionIndex)->GetStaticField(0x66280);
	}
	static ::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>** StaticGet___9__41_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5818C66053C3AC8___c_TypeDefinitionIndex)->GetStaticField(0x66288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedMapPropCondition_b__41_0(::RPG::GameCore::MapPropConditionConfigRow* a1, ::RPG::GameCore::MapPropConditionConfigRow* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapPropConditionConfigRow*, ::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B5818C66053C3AC8___C__GETSORTEDMAPPROPCONDITION_B__41_0_OFFSET))(this, a1, a2);
	}
};
