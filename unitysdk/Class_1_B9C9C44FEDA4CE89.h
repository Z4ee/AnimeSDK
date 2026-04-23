#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9C9C44FEDA4CE89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x934A300)
#define CLASS_1_B9C9C44FEDA4CE89__CTOR_OFFSET UNITYSDK_OFFSET(0x934A3B0)

inline static constexpr unsigned int Class_1_B9C9C44FEDA4CE89_TypeDefinitionIndex = 52847;

class Class_1_B9C9C44FEDA4CE89 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_6; // 0x18
	::RPG::GameCore::GameEntity* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_2; // 0x38
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9C44FEDA4CE89__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9C9C44FEDA4CE89_DISPOSE_OFFSET))(this);
	}
};
