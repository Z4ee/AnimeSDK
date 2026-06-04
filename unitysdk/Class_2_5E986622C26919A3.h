#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_5E986622C26919A3_GET_COMPONENTINTERFACES_OFFSET UNITYSDK_OFFSET(0x139FA180)
#define CLASS_2_5E986622C26919A3__CTOR_OFFSET UNITYSDK_OFFSET(0x139FA190)

inline static constexpr unsigned int Class_2_5E986622C26919A3_TypeDefinitionIndex = 69145;

class Class_2_5E986622C26919A3 : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* _ComponentInterfaces_k__BackingField; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_2_5E986622C26919A3__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Type*>* get_ComponentInterfaces()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E986622C26919A3_GET_COMPONENTINTERFACES_OFFSET))(this);
	}
};
