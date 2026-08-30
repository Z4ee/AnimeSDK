#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATTEXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD623220)

namespace RPG::Client
{
	inline static constexpr unsigned int MatTexItem_TypeDefinitionIndex = 70101;

	class MatTexItem : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Render; // 0x10
		::System::Int32 MaterialIndex; // 0x18
		::System::String* TexName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATTEXITEM__CTOR_OFFSET))(this);
		}
	};
}
