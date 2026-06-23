#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C5CFFBB29190E266.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_83F7FC580D54E526;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_015D033238434141_OFFSET UNITYSDK_OFFSET(0x133A4470)
#define CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_68A1551CB88D9B84_OFFSET UNITYSDK_OFFSET(0x133A4330)
#define CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_7CF577469C6E14BB_OFFSET UNITYSDK_OFFSET(0x133A4810)

inline static constexpr unsigned int Class_1_ED7EC2AB7D58E9AB_TypeDefinitionIndex = 51779;

class Class_1_ED7EC2AB7D58E9AB : public ::System::Object
{
public:
	static ::System::Void Method_1_68A1551CB88D9B84(::MoleMole::Battle::Entity* a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_68A1551CB88D9B84_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::Entity* Method_1_015D033238434141(::Class_3_83F7FC580D54E526* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_83F7FC580D54E526*))((::PBYTE)hIl2Cpp + CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_015D033238434141_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_7CF577469C6E14BB(::MoleMole::EntityHandle a1, ::Enum_3_C5CFFBB29190E266 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::Enum_3_C5CFFBB29190E266, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED7EC2AB7D58E9AB_METHOD_1_7CF577469C6E14BB_OFFSET))(a1, a2, a3, a4);
	}
};
