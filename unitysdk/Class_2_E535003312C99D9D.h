#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E535003312C99D9D_Struct_2_5396005F9A53A130.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_E535003312C99D9D_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x154F6750)
#define CLASS_2_E535003312C99D9D_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x154F6770)
#define CLASS_2_E535003312C99D9D_SET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x154F6760)
#define CLASS_2_E535003312C99D9D__CTOR_OFFSET UNITYSDK_OFFSET(0x154F6930)

inline static constexpr unsigned int Class_2_E535003312C99D9D_TypeDefinitionIndex = 49286;

class Class_2_E535003312C99D9D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_E535003312C99D9D_Struct_2_5396005F9A53A130>* GEDIEOINCDK; // 0x10
	::UnityEngine::GameObject* _SourceObject_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E535003312C99D9D__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SourceObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E535003312C99D9D_GET_SOURCEOBJECT_OFFSET))(this);
	}

	::System::Void set_SourceObject(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_E535003312C99D9D_SET_SOURCEOBJECT_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E535003312C99D9D_ONGRAPHSTART_OFFSET))(this, a1);
	}
};
