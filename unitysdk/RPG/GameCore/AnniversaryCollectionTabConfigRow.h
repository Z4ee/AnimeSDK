#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A79B0)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A7C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionTabConfigRow_TypeDefinitionIndex = 11958;

	class AnniversaryCollectionTabConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishCondition; // 0x10
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x18
		::System::String* TabIcon; // 0x20
		::RPG::GameCore::AnniversaryCollectionPanelEnum PanelType; // 0x28
		::System::UInt32 TabID; // 0x2C
		::RPG::Client::TextID TabName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
