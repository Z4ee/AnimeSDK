#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6EBD903476086028.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshLink; }

#define CLASS_2_323AB43B5583CAEB_CLASS_1_1614FEAD2A2E65D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3C190)

inline static constexpr unsigned int Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5_TypeDefinitionIndex = 50333;

class Class_2_323AB43B5583CAEB_Class_1_1614FEAD2A2E65D5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_6EBD903476086028>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AI::NavMeshLink*>* Field_1_2; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_CLASS_1_1614FEAD2A2E65D5__CTOR_OFFSET))(this);
	}
};
