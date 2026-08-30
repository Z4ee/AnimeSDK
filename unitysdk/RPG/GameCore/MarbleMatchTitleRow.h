#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4ACB10)
#define RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ACF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchTitleRow_TypeDefinitionIndex = 11855;

	class MarbleMatchTitleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* Param; // 0x10
		::RPG::GameCore::MarbleTitleValue ValueType; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::Int32 PVPScore; // 0x30
		::System::Int32 Quality; // 0x34
		::System::Int32 CompareValue; // 0x38
		::System::Int32 Priority; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::MarbleTitleCondition Condition; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMatchTitleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchTitleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
