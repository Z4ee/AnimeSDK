#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_UIPREFABLOADER_LOADRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB42DA20)
#define RPG_CLIENT_UIPREFABLOADER_LOADRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB42D110)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader_LoadResult_TypeDefinitionIndex = 67301;

	class UIPrefabLoader_LoadResult : public ::System::Object
	{
	public:
		::UnityEngine::Object* Asset; // 0x10
		::UnityEngine::GameObject* Instantiated; // 0x18
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
