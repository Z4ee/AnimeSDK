#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_EFF3E0CA04DCE17C__CTOR_OFFSET UNITYSDK_OFFSET(0x16757730)

inline static constexpr unsigned int Class_1_EFF3E0CA04DCE17C_TypeDefinitionIndex = 76301;

class Class_1_EFF3E0CA04DCE17C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF3E0CA04DCE17C__CTOR_OFFSET))(this);
	}
};
