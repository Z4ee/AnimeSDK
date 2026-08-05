#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C5CFFBB29190E266.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_83F7FC580D54E526;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_2DA28D91134F9EE8_METHOD_1_4BF29AF3705DCD7E_OFFSET UNITYSDK_OFFSET(0x14E290A0)
#define CLASS_1_2DA28D91134F9EE8_METHOD_1_68A1551CB88D9B84_OFFSET UNITYSDK_OFFSET(0x14E28F60)
#define CLASS_1_2DA28D91134F9EE8_METHOD_1_9CF6E2BC6EE8E7D6_OFFSET UNITYSDK_OFFSET(0x14E28BC0)

inline static constexpr unsigned int Class_1_2DA28D91134F9EE8_TypeDefinitionIndex = 59545;

class Class_1_2DA28D91134F9EE8 : public ::System::Object
{
public:
	static ::MoleMole::Battle::Entity* Method_1_9CF6E2BC6EE8E7D6(::Class_3_83F7FC580D54E526* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_83F7FC580D54E526*))((::PBYTE)hIl2Cpp + CLASS_1_2DA28D91134F9EE8_METHOD_1_9CF6E2BC6EE8E7D6_OFFSET))(a1);
	}

	static ::System::Void Method_1_68A1551CB88D9B84(::MoleMole::Battle::Entity* a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_2DA28D91134F9EE8_METHOD_1_68A1551CB88D9B84_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_4BF29AF3705DCD7E(::MoleMole::EntityHandle a1, ::Enum_3_C5CFFBB29190E266 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::Enum_3_C5CFFBB29190E266, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2DA28D91134F9EE8_METHOD_1_4BF29AF3705DCD7E_OFFSET))(a1, a2, a3, a4);
	}
};
