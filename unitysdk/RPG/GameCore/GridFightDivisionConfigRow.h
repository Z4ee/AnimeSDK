#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D964130)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D964480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionConfigRow_TypeDefinitionIndex = 13498;

	class GridFightDivisionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DivisionRewardQuest; // 0x10
		::System::String* DivisionIcon; // 0x18
		::System::String* DivisionShowPic; // 0x20
		::RPG::Client::TextID DivisionName; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 DivisionLevel; // 0x3C
		::System::Boolean IsPromotion; // 0x40
		::System::UInt32 SeasonID; // 0x44
		::System::UInt32 Progress; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDivisionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDivisionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
