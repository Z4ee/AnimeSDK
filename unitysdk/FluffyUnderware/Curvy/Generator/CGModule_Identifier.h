#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B039F70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B039FC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_RESET_OFFSET UNITYSDK_OFFSET(0x1B03A020)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B039F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03A010)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_Identifier_TypeDefinitionIndex = 37318;

	class CGModule_Identifier : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x10
		::System::String* cachedStringID; // 0x18

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER__CTOR_OFFSET))(this, module);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_StringID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_STRINGID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_RESET_OFFSET))(this);
		}
	};
}
