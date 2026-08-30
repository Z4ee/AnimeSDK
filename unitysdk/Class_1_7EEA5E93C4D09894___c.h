#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7EEA5E93C4D09894___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E1CFA0)
#define CLASS_1_7EEA5E93C4D09894___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1CFE0)
#define CLASS_1_7EEA5E93C4D09894___C__GET_PVECOMPLETE_B__24_0_OFFSET UNITYSDK_OFFSET(0x18E1CFF0)

inline static constexpr unsigned int Class_1_7EEA5E93C4D09894___c_TypeDefinitionIndex = 78564;

class Class_1_7EEA5E93C4D09894___c : public ::System::Object
{
public:
	static ::Class_1_7EEA5E93C4D09894___c** StaticGet___9()
	{
		return (::Class_1_7EEA5E93C4D09894___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EEA5E93C4D09894___c_TypeDefinitionIndex)->GetStaticField(0xD640);
	}
	static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersDepartmentData*, ::System::Boolean>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersDepartmentData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EEA5E93C4D09894___c_TypeDefinitionIndex)->GetStaticField(0xD648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_PveComplete_b__24_0(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + CLASS_1_7EEA5E93C4D09894___C__GET_PVECOMPLETE_B__24_0_OFFSET))(this, a1);
	}
};
