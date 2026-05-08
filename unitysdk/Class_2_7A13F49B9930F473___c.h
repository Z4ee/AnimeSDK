#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_7A13F49B9930F473___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET UNITYSDK_OFFSET(0x14040580)
#define CLASS_2_7A13F49B9930F473___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14040530)
#define CLASS_2_7A13F49B9930F473___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14040570)

inline static constexpr unsigned int Class_2_7A13F49B9930F473___c_TypeDefinitionIndex = 70227;

class Class_2_7A13F49B9930F473___c : public ::System::Object
{
public:
	static ::Class_2_7A13F49B9930F473___c** StaticGet___9()
	{
		return (::Class_2_7A13F49B9930F473___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473___c_TypeDefinitionIndex)->GetStaticField(0x45250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF8DFFDCCAB9F666(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473___C_METHOD_1_FF8DFFDCCAB9F666_OFFSET))(this, a1);
	}
};
