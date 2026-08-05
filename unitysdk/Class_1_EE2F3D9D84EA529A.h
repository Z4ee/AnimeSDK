#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3CFF1AFF7EE7DCD;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE2F3D9D84EA529A_METHOD_1_6FE6B33F1442BBAA_OFFSET UNITYSDK_OFFSET(0xF74BF40)
#define CLASS_1_EE2F3D9D84EA529A_METHOD_1_AD8C9C5C67361408_OFFSET UNITYSDK_OFFSET(0xF74BE90)
#define CLASS_1_EE2F3D9D84EA529A__CTOR_OFFSET UNITYSDK_OFFSET(0xF74BF90)

inline static constexpr unsigned int Class_1_EE2F3D9D84EA529A_TypeDefinitionIndex = 62397;

class Class_1_EE2F3D9D84EA529A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE2F3D9D84EA529A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD8C9C5C67361408(::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*&))((::PBYTE)hIl2Cpp + CLASS_1_EE2F3D9D84EA529A_METHOD_1_AD8C9C5C67361408_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE6B33F1442BBAA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EE2F3D9D84EA529A_METHOD_1_6FE6B33F1442BBAA_OFFSET))(this, a1);
	}
};
