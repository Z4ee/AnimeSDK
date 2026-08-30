#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_EFF3E0CA04DCE17C__CTOR_OFFSET UNITYSDK_OFFSET(0x1522EB00)

inline static constexpr unsigned int Class_1_EFF3E0CA04DCE17C_TypeDefinitionIndex = 79935;

class Class_1_EFF3E0CA04DCE17C : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* MGJLINFADJK; // 0x10
	::System::String* APIKAGGCKHG; // 0x18
	::System::Boolean FLONEHBJDAK; // 0x20
	::System::Boolean JCIEMGBFDFN; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF3E0CA04DCE17C__CTOR_OFFSET))(this);
	}
};
