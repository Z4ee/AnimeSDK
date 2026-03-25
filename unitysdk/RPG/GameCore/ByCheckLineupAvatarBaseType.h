#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_665DE7D699789752_OFFSET UNITYSDK_OFFSET(0x16FFEC70)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_C7F6C39B9EBA6D73_OFFSET UNITYSDK_OFFSET(0x16FFEDD0)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLineupAvatarBaseType_TypeDefinitionIndex = 19114;

	class ByCheckLineupAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x20
		::RPG::GameCore::DynamicFloat* DynamicAvatarBaseType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_665DE7D699789752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_665DE7D699789752_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7F6C39B9EBA6D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_METHOD_4_C7F6C39B9EBA6D73_OFFSET))(a1, a2);
		}
	};
}
