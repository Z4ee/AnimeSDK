#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1782F263438830D6;
class Class_1_8A0D924C14430663_4;
namespace RPG::Client { class Freelook3rdRigParams; }

#define CLASS_1_C77BD78243DB7402_METHOD_1_14428232032DCF74_OFFSET UNITYSDK_OFFSET(0x17D8DBB0)
#define CLASS_1_C77BD78243DB7402__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8DCC0)

inline static constexpr unsigned int Class_1_C77BD78243DB7402_TypeDefinitionIndex = 66549;

class Class_1_C77BD78243DB7402 : public ::System::Object
{
public:
	::Class_1_1782F263438830D6* Field_1_0; // 0x10
	::Class_1_8A0D924C14430663_4* Field_1_1; // 0x18
	::Il2CppArray<::RPG::Client::Freelook3rdRigParams*>* Field_1_2; // 0x20
	::UnityEngine::Vector2 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77BD78243DB7402__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_14428232032DCF74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77BD78243DB7402_METHOD_1_14428232032DCF74_OFFSET))(this);
	}
};
