#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_UIPREFABLOADER_LOADRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x17B83F20)
#define RPG_CLIENT_UIPREFABLOADER_LOADRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17B83530)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader_LoadResult_TypeDefinitionIndex = 73000;

	class UIPrefabLoader_LoadResult : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Instantiated; // 0x10
		::UnityEngine::Object* Asset; // 0x18
		::System::Boolean IsLoadFromCache; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER_LOADRESULT_CLEAR_OFFSET))(this);
		}
	};
}
