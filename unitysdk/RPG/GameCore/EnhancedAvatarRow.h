#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1719D040)
#define RPG_GAMECORE_ENHANCEDAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1719DB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAvatarRow_TypeDefinitionIndex = 11596;

	class EnhancedAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillList; // 0x20
		::RPG::GameCore::FixPoint SPNeed; // 0x28
		::System::UInt32 EnhancedID; // 0x30
		::System::UInt32 AvatarID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EnhancedAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnhancedAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
