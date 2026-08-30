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

#define CLASS_1_EF452C8E9A5D3122__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD5C20)

inline static constexpr unsigned int Class_1_EF452C8E9A5D3122_TypeDefinitionIndex = 62208;

class Class_1_EF452C8E9A5D3122 : public ::System::Object
{
public:
	::RPG::GameCore::LevelGraphValueSource* DGKFAHEENCC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2A8A7F9C322BA9B7*>* KJCFCOMEBMD; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> LDDBFJDDNJO; // 0x20
	::System::Nullable_1<::RPG::GameCore::PropState> IHGHNPCIJKO; // 0x30
	::System::Nullable_1<::UnityEngine::Quaternion> KHOPAMJJINE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF452C8E9A5D3122__CTOR_OFFSET))(this);
	}
};
