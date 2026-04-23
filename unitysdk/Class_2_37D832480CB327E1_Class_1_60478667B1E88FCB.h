#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_37D832480CB327E1_CLASS_1_60478667B1E88FCB__CTOR_OFFSET UNITYSDK_OFFSET(0x118CD1F0)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB_TypeDefinitionIndex = 52913;

class Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x38
	::System::Boolean Field_1_3; // 0x44
	::System::Boolean Field_1_6; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_60478667B1E88FCB__CTOR_OFFSET))(this);
	}
};
