#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULEINFOATTRIBUTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1E1CCD90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULEINFOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CCD80)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int ModuleInfoAttribute_TypeDefinitionIndex = 38964;

	class ModuleInfoAttribute : public ::System::Attribute
	{
	public:
		::System::String* Description; // 0x10
		::System::String* MenuName; // 0x18
		::System::String* ModuleName; // 0x20
		::System::Boolean UsesRandom; // 0x28

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULEINFOATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULEINFOATTRIBUTE_COMPARETO_OFFSET))(this, obj);
		}
	};
}
