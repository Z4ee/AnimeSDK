#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3E8412A97A3D0DF7;
namespace System { class String; }

#define CLASS_1_3E8412A97A3D0DF7_CLASS_1_E2584DF91ACB64F9_METHOD_1_947817EB915D1EE9_OFFSET UNITYSDK_OFFSET(0xB5262B0)
#define CLASS_1_3E8412A97A3D0DF7_CLASS_1_E2584DF91ACB64F9__CTOR_OFFSET UNITYSDK_OFFSET(0xB526350)

inline static constexpr unsigned int Class_1_3E8412A97A3D0DF7_Class_1_E2584DF91ACB64F9_TypeDefinitionIndex = 79746;

class Class_1_3E8412A97A3D0DF7_Class_1_E2584DF91ACB64F9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_CLASS_1_E2584DF91ACB64F9__CTOR_OFFSET))(this);
	}

	::Class_1_3E8412A97A3D0DF7* Method_1_947817EB915D1EE9(::RPG::Client::TextID a1, ::System::String* a2)
	{
		return ((::Class_1_3E8412A97A3D0DF7*(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_CLASS_1_E2584DF91ACB64F9_METHOD_1_947817EB915D1EE9_OFFSET))(this, a1, a2);
	}
};
