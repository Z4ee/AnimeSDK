#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAffixRule.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197D93E0)
#define RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197D9770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAffixConfigRow_TypeDefinitionIndex = 12763;

	class GridFightAffixConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* RuleParamList; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::RPG::Client::TextID AffixName; // 0x30
		::RPG::GameCore::GridFightAffixRule AffixRule; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID AffixDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAffixConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAffixConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
