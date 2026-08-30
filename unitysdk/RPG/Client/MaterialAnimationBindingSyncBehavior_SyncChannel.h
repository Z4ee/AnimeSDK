#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_SYNCCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD678C20)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncBehavior_SyncChannel_TypeDefinitionIndex = 70256;

	class MaterialAnimationBindingSyncBehavior_SyncChannel : public ::System::Object
	{
	public:
		::UnityEngine::MaterialAnimationBinding* Binding; // 0x10
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::System::Int32 BindingMaterialIndex; // 0x20
		::System::Int32 RendererMaterialIndex; // 0x24
		::System::String* PropertyName; // 0x28
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x30
		::System::Int32 PropertyId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_SYNCCHANNEL__CTOR_OFFSET))(this);
		}
	};
}
