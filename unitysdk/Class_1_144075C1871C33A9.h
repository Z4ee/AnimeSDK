#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_6F8359E734E4FA98;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_144075C1871C33A9__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D60C0)

inline static constexpr unsigned int Class_1_144075C1871C33A9_TypeDefinitionIndex = 71801;

class Class_1_144075C1871C33A9 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::Class_1_6F8359E734E4FA98* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::UnityEngine::GameObject*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144075C1871C33A9__CTOR_OFFSET))(this);
	}
};
