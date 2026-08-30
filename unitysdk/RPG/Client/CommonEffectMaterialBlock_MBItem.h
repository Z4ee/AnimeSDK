#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_MBITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC58400)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonEffectMaterialBlock_MBItem_TypeDefinitionIndex = 70359;

	class CommonEffectMaterialBlock_MBItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18
		::UnityEngine::Material* Material; // 0x20
		::System::Object* OriginData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_MBITEM__CTOR_OFFSET))(this);
		}
	};
}
