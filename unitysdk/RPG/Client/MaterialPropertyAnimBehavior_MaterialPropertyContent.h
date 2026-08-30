#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertyAnimBehavior_MaterialProperty.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MATERIALPROPERTYCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD67C500)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimBehavior_MaterialPropertyContent_TypeDefinitionIndex = 70685;

	class MaterialPropertyAnimBehavior_MaterialPropertyContent : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::UInt32 MatIndex; // 0x18
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialProperty MatProperty; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_MATERIALPROPERTYCONTENT__CTOR_OFFSET))(this);
		}
	};
}
