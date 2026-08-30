#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SealState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_371E7219836CA73D__CTOR_OFFSET UNITYSDK_OFFSET(0x16390C30)

inline static constexpr unsigned int Class_1_371E7219836CA73D_TypeDefinitionIndex = 60526;

class Class_1_371E7219836CA73D : public ::System::Object
{
public:
	::UnityEngine::Vector2 KLPCBAHLDBA; // 0x10
	::UnityEngine::Vector2 HHGPIAFJNDL; // 0x18
	::UnityEngine::Vector2 BBFOLEOPPPL; // 0x20
	::RPG::Client::SealState MEPFOEEGBEA; // 0x28
	::System::Single EJEHJHNJJBK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_371E7219836CA73D__CTOR_OFFSET))(this);
	}
};
