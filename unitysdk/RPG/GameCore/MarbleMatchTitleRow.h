#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17392AF0)
#define RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17392F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchTitleRow_TypeDefinitionIndex = 10915;

	class MarbleMatchTitleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* Param; // 0x10
		::System::Int32 Priority; // 0x18
		::RPG::GameCore::MarbleTitleValue ValueType; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Int32 PVPScore; // 0x30
		::System::Int32 Quality; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Int32 CompareValue; // 0x3C
		::RPG::GameCore::MarbleTitleCondition Condition; // 0x40
		::RPG::Client::TextID Desc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchTitleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchTitleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
