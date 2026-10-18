#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapProp; }

#define CLASS_1_17710F15CC913BFB__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFC290)

inline static constexpr unsigned int Class_1_17710F15CC913BFB_TypeDefinitionIndex = 60654;

class Class_1_17710F15CC913BFB : public ::System::Object
{
public:
	::RPG::Client::MapProp* EMDMCJMDJPJ; // 0x10
	::Il2CppArray<::RPG::MVector2>* IPACDKEBGIJ; // 0x18
	::System::Single NBFBEAKDKAA; // 0x20
	::System::Int32 OPNGHDENCAB; // 0x24
	::System::Int32 NICDJEMEJEP; // 0x28
	::UnityEngine::Vector2 NPIHAOHNNCG; // 0x2C
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34
	::System::Single NMELCPIOKNO; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::MapProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_17710F15CC913BFB__CTOR_OFFSET))(this, a1, a2);
	}
};
