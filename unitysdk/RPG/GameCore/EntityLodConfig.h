#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODCONFIG_METHOD_2_3C3ECD8330832B58_OFFSET UNITYSDK_OFFSET(0x1719FF00)
#define RPG_GAMECORE_ENTITYLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171A0050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodConfig_TypeDefinitionIndex = 17639;

	class EntityLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SubObjAsset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3C3ECD8330832B58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODCONFIG_METHOD_2_3C3ECD8330832B58_OFFSET))(a1, a2);
		}
	};
}
