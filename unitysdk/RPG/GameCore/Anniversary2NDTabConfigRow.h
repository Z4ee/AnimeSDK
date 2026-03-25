#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Anniversary2NDPanelEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F84610)
#define RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Anniversary2NDTabConfigRow_TypeDefinitionIndex = 11551;

	class Anniversary2NDTabConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x10
		::System::String* TabIcon; // 0x18
		::RPG::Client::TextID TabName; // 0x20
		::RPG::GameCore::Anniversary2NDPanelEnum PanelType; // 0x30
		::System::UInt32 TabID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::Anniversary2NDTabConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Anniversary2NDTabConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
