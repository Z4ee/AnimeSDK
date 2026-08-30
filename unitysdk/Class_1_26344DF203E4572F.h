#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_26344DF203E4572F__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADA510)

inline static constexpr unsigned int Class_1_26344DF203E4572F_TypeDefinitionIndex = 61027;

class Class_1_26344DF203E4572F : public ::System::Object
{
public:
	::UnityEngine::GameObject* OLPPHJJNMEA; // 0x10
	::RPG::Client::PhotoGraphTag NHALJPDONCP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26344DF203E4572F__CTOR_OFFSET))(this);
	}
};
