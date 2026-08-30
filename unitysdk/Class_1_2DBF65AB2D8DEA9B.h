#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2DBF65AB2D8DEA9B__CTOR_OFFSET UNITYSDK_OFFSET(0xC41BBD0)

inline static constexpr unsigned int Class_1_2DBF65AB2D8DEA9B_TypeDefinitionIndex = 72867;

class Class_1_2DBF65AB2D8DEA9B : public ::System::Object
{
public:
	::System::String* OMKCCILBIOF; // 0x10
	::Il2CppArray<::System::Object*>* EECMDMJIJGD; // 0x18
	::System::String* MAEPOCCHNEG; // 0x20
	::System::String* BIFLKECNJEP; // 0x28
	::RPG::Client::TextID NMMKDFFHOLL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBF65AB2D8DEA9B__CTOR_OFFSET))(this);
	}
};
