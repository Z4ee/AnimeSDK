#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D226050)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1D2260A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_RESET_OFFSET UNITYSDK_OFFSET(0x1D226100)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D226070)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_IDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2260F0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_Identifier_TypeDefinitionIndex = 38902;

	class CGModule_Identifier : public ::System::Object
	{
	public:
		::System::String* cachedStringID; // 0x10
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x18

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
