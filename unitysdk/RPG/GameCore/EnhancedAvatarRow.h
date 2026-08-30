#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7C19F0)
#define RPG_GAMECORE_ENHANCEDAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C25C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAvatarRow_TypeDefinitionIndex = 12621;

	class EnhancedAvatarRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* SkillList; // 0x18
		::System::String* AIPath; // 0x20
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 EnhancedID; // 0x34
		::RPG::GameCore::FixPoint SPNeed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnhancedAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnhancedAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
