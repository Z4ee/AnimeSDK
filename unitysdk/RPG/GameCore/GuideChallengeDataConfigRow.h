#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDECHALLENGEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1728DBE0)
#define RPG_GAMECORE_GUIDECHALLENGEDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1728DF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeDataConfigRow_TypeDefinitionIndex = 12229;

	class GuideChallengeDataConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 MapEntranceID; // 0x2C
		::System::UInt32 RelatedID; // 0x30
		::System::UInt32 TabID; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGEDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuideChallengeDataConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideChallengeDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGEDATACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
