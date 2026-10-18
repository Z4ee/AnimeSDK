#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3E8412A97A3D0DF7_1;
namespace System { class String; }

#define CLASS_1_3E8412A97A3D0DF7_1_CLASS_1_593445AD730C3FF9_METHOD_1_56DE6DC94286D5A2_OFFSET UNITYSDK_OFFSET(0x15697590)
#define CLASS_1_3E8412A97A3D0DF7_1_CLASS_1_593445AD730C3FF9__CTOR_OFFSET UNITYSDK_OFFSET(0x15697650)

inline static constexpr unsigned int Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9_TypeDefinitionIndex = 79735;

class Class_1_3E8412A97A3D0DF7_1_Class_1_593445AD730C3FF9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_CLASS_1_593445AD730C3FF9__CTOR_OFFSET))(this);
	}

	::Class_1_3E8412A97A3D0DF7_1* Method_1_56DE6DC94286D5A2(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::String* a3)
	{
		return ((::Class_1_3E8412A97A3D0DF7_1*(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_CLASS_1_593445AD730C3FF9_METHOD_1_56DE6DC94286D5A2_OFFSET))(this, a1, a2, a3);
	}
};
