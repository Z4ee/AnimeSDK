#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONSTERMAPPINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDF7F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterMappingEntry_TypeDefinitionIndex = 73025;

	class MonsterMappingEntry : public ::System::Object
	{
	public:
		::System::Int32 Ident; // 0x10
		::System::String* Name; // 0x18
		::Foundation::AssetPath PrefabPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERMAPPINGENTRY__CTOR_OFFSET))(this);
		}
	};
}
