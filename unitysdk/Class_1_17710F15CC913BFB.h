#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapProp; }

#define CLASS_1_17710F15CC913BFB__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E00C0)

inline static constexpr unsigned int Class_1_17710F15CC913BFB_TypeDefinitionIndex = 56686;

class Class_1_17710F15CC913BFB : public ::System::Object
{
public:
	::Il2CppArray<::RPG::MVector2>* Field_1_0; // 0x10
	::RPG::Client::MapProp* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x38
	::UnityEngine::Vector2 Field_1_7; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::MapProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_17710F15CC913BFB__CTOR_OFFSET))(this, a1, a2);
	}
};
