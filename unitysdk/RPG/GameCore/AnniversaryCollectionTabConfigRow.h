#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A059560)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A059820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionTabConfigRow_TypeDefinitionIndex = 12183;

	class AnniversaryCollectionTabConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishCondition; // 0x10
		::System::String* TabIcon; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x20
		::RPG::Client::TextID TabName; // 0x28
		::RPG::GameCore::AnniversaryCollectionPanelEnum PanelType; // 0x38
		::System::UInt32 TabID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionTabConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONTABCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
