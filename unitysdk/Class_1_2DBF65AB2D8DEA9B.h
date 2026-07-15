#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2DBF65AB2D8DEA9B__CTOR_OFFSET UNITYSDK_OFFSET(0x14289D10)

inline static constexpr unsigned int Class_1_2DBF65AB2D8DEA9B_TypeDefinitionIndex = 69628;

class Class_1_2DBF65AB2D8DEA9B : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBF65AB2D8DEA9B__CTOR_OFFSET))(this);
	}
};
