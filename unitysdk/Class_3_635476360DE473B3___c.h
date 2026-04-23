#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_635476360DE473B3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119DF520)
#define CLASS_3_635476360DE473B3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119DF560)
#define CLASS_3_635476360DE473B3___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x119DF570)

inline static constexpr unsigned int Class_3_635476360DE473B3___c_TypeDefinitionIndex = 48948;

class Class_3_635476360DE473B3___c : public ::System::Object
{
public:
	static ::Class_3_635476360DE473B3___c** StaticGet___9()
	{
		return (::Class_3_635476360DE473B3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_635476360DE473B3___c_TypeDefinitionIndex)->GetStaticField(0x34250);
	}
	static ::System::Predicate_1<::RPG::GameCore::TaskConfig*>** StaticGet___9__0_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::TaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_635476360DE473B3___c_TypeDefinitionIndex)->GetStaticField(0x34258);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::RPG::GameCore::TaskConfig* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3___C___CTOR_B__0_0_OFFSET))(this, item);
	}
};
