#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComponentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYCONFIG_METHOD_2_32EE5C477F8CAF49_OFFSET UNITYSDK_OFFSET(0x1D069250)
#define RPG_GAMECORE_ENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityConfig_TypeDefinitionIndex = 16395;

	class EntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComponentConfig*>* Components; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x18
		::Class_1_1C30CE192ABE4C54* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_32EE5C477F8CAF49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCONFIG_METHOD_2_32EE5C477F8CAF49_OFFSET))(a1, a2);
		}
	};
}
