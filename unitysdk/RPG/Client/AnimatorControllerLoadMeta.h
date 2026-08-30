#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC765770)
#define RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_GET_LOADEDINDEX_OFFSET UNITYSDK_OFFSET(0xC7657C0)
#define RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_TRYLOAD_OFFSET UNITYSDK_OFFSET(0xC765800)
#define RPG_CLIENT_ANIMATORCONTROLLERLOADMETA__CTOR_OFFSET UNITYSDK_OFFSET(0xC765980)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorControllerLoadMeta_TypeDefinitionIndex = 72410;

	class AnimatorControllerLoadMeta : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RuntimeAnimatorController*>* _ControllerList; // 0x18
		::System::Int32 _LoadedIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCONTROLLERLOADMETA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_LoadedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_GET_LOADEDINDEX_OFFSET))(this);
		}

		::System::Boolean TryLoad(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCONTROLLERLOADMETA_TRYLOAD_OFFSET))(this, a1);
		}
	};
}
