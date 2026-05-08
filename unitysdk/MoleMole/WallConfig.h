#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_WALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4B9F0)

namespace MoleMole
{
	inline static constexpr unsigned int WallConfig_TypeDefinitionIndex = 61823;

	class WallConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AbilityList; // 0x10
		::Foundation::AssetPath PrefabPath; // 0x18
		::UnityEngine::Vector2 Offset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WALLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
