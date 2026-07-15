#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Stage; }
namespace System { class String; }

#define CLASS_1_EE2A70ED9E9B0C92_METHOD_1_B67A7D5A7BB42B14_OFFSET UNITYSDK_OFFSET(0x16426B80)
#define CLASS_1_EE2A70ED9E9B0C92_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16426D70)
#define CLASS_1_EE2A70ED9E9B0C92__CTOR_OFFSET UNITYSDK_OFFSET(0x16426B70)

inline static constexpr unsigned int Class_1_EE2A70ED9E9B0C92_TypeDefinitionIndex = 56634;

class Class_1_EE2A70ED9E9B0C92 : public ::System::Object
{
public:
	::RPG::Client::Stage* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_EE2A70ED9E9B0C92__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B67A7D5A7BB42B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE2A70ED9E9B0C92_METHOD_1_B67A7D5A7BB42B14_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE2A70ED9E9B0C92_TOSTRING_OFFSET))(this);
	}
};
