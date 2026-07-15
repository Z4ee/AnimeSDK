#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A8A7F9C322BA9B7;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF452C8E9A5D3122__CTOR_OFFSET UNITYSDK_OFFSET(0x16E75340)

inline static constexpr unsigned int Class_1_EF452C8E9A5D3122_TypeDefinitionIndex = 59373;

class Class_1_EF452C8E9A5D3122 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2A8A7F9C322BA9B7*>* Field_1_0; // 0x10
	::RPG::GameCore::LevelGraphValueSource* Field_1_1; // 0x18
	::System::Nullable_1<::RPG::GameCore::PropState> Field_1_2; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x28
	::System::Nullable_1<::UnityEngine::Quaternion> Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF452C8E9A5D3122__CTOR_OFFSET))(this);
	}
};
