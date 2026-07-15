#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBUILDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C380680)
#define RPG_GAMECORE_CHENLINGBUILDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C380940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBuildingRow_TypeDefinitionIndex = 10670;

	class ChenLingBuildingRow : public ::System::Object
	{
	public:
		::System::String* ModelPath; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::UInt32 InitialMaxLevel; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBuildingRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBuildingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
