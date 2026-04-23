#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA877320)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSwitchMonoPlugin_MaterialBlock_TypeDefinitionIndex = 65214;

	class MaterialSwitchMonoPlugin_MaterialBlock : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x10
		::System::Int32 TargetMatIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATERIALBLOCK__CTOR_OFFSET))(this);
		}
	};
}
