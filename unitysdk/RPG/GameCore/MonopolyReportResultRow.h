#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYREPORTRESULTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B533F0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B53D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportResultRow_TypeDefinitionIndex = 11462;

	class MonopolyReportResultRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* FigurePrefabPath; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::Int32 MBTIValueX; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Int32 MBTIValueY; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID UnlockTips; // 0x50
		::RPG::Client::TextID DescDetail; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyReportResultRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyReportResultRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
