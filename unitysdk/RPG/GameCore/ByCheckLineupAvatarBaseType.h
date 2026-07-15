#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_5A52FBF09A05CE58_OFFSET UNITYSDK_OFFSET(0x19CC6930)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_944B5EF023AAE43F_OFFSET UNITYSDK_OFFSET(0x19CC6C00)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_AC3FEFFE7DDB0777_OFFSET UNITYSDK_OFFSET(0x19CC6C80)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_C7F6C39B9EBA6D73_OFFSET UNITYSDK_OFFSET(0x19CC6A10)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC69B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLineupAvatarBaseType_TypeDefinitionIndex = 20008;

	class ByCheckLineupAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x20
		::RPG::GameCore::DynamicFloat* DynamicAvatarBaseType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5A52FBF09A05CE58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_5A52FBF09A05CE58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7F6C39B9EBA6D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_C7F6C39B9EBA6D73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_944B5EF023AAE43F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_944B5EF023AAE43F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC3FEFFE7DDB0777(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_AC3FEFFE7DDB0777_OFFSET))(a1, a2);
		}
	};
}
