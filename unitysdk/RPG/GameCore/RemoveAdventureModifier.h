#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER_METHOD_3_5A4F78BA9F055BFF_OFFSET UNITYSDK_OFFSET(0x19AC6FA0)
#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER_METHOD_3_CCDE182400285E8B_OFFSET UNITYSDK_OFFSET(0x19AC7020)
#define RPG_GAMECORE_REMOVEADVENTUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC6FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAdventureModifier_TypeDefinitionIndex = 20540;

	class RemoveAdventureModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A4F78BA9F055BFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAdventureModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAdventureModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER_METHOD_3_5A4F78BA9F055BFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCDE182400285E8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAdventureModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEADVENTUREMODIFIER_METHOD_3_CCDE182400285E8B_OFFSET))(a1, a2);
		}
	};
}
