#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleConditionType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleExtremType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTitleParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704F940)
#define RPG_GAMECORE_CAKERACETITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1704FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTitleRow_TypeDefinitionIndex = 10308;

	class CakeRaceTitleRow : public ::System::Object
	{
	public:
		::System::String* BgColor; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::RPG::Client::TextID TitleName; // 0x20
		::System::UInt32 Priority; // 0x30
		::RPG::GameCore::CakeRaceTitleExtremType ExtremType; // 0x34
		::RPG::Client::TextID TitleDesc; // 0x38
		::System::UInt32 TitleID; // 0x48
		::RPG::GameCore::CakeRaceTitleConditionType ConditionType; // 0x4C
		::System::UInt32 ConditionParam; // 0x50
		::RPG::GameCore::CakeRaceTitleParamType ParamType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETITLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceTitleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTitleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETITLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
