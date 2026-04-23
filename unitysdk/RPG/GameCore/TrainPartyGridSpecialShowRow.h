#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190AAE70)
#define RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190AAFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridSpecialShowRow_TypeDefinitionIndex = 14515;

	class TrainPartyGridSpecialShowRow : public ::System::Object
	{
	public:
		::System::String* GridSpecialShowImagePath; // 0x10
		::System::UInt32 GridID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyGridSpecialShowRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGridSpecialShowRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
