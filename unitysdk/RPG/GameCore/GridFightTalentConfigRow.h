#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172872D0)
#define RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172877A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTalentConfigRow_TypeDefinitionIndex = 12407;

	class GridFightTalentConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PreTalentIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* JsonPath; // 0x28
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x30
		::System::UInt32 IsImportant; // 0x38
		::System::UInt32 IsOCEffective; // 0x3C
		::RPG::Client::TextID EffectTag; // 0x40
		::RPG::Client::TextID EffectDesc; // 0x50
		::System::UInt32 Cost; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID EffectTitle; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTalentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTalentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
