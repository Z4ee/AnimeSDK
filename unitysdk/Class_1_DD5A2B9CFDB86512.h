#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StatusRow; }
namespace System { class String; }

#define CLASS_1_DD5A2B9CFDB86512_METHOD_1_613CBDCC2A0E6AA7_OFFSET UNITYSDK_OFFSET(0xF17D6F0)
#define CLASS_1_DD5A2B9CFDB86512__CTOR_OFFSET UNITYSDK_OFFSET(0xF17D760)

inline static constexpr unsigned int Class_1_DD5A2B9CFDB86512_TypeDefinitionIndex = 76096;

class Class_1_DD5A2B9CFDB86512 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A2B9CFDB86512__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::StatusRow* Method_1_613CBDCC2A0E6AA7(::System::String* a1)
	{
		return ((::RPG::GameCore::StatusRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD5A2B9CFDB86512_METHOD_1_613CBDCC2A0E6AA7_OFFSET))(this, a1);
	}
};
