#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1980E4B0)
#define RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1980E970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTalentConfigRow_TypeDefinitionIndex = 12925;

	class GridFightTalentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::Il2CppArray<::System::UInt32>* PreTalentIDList; // 0x28
		::System::String* IconPath; // 0x30
		::RPG::Client::TextID EffectTag; // 0x38
		::System::UInt32 IsImportant; // 0x48
		::System::UInt32 IsOCEffective; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::UInt32 Cost; // 0x54
		::RPG::Client::TextID EffectDesc; // 0x58
		::RPG::Client::TextID EffectTitle; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTalentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTalentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTALENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
