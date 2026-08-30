#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0E6D20)
#define RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E7060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteTalkConfigRow_TypeDefinitionIndex = 14000;

	class FiveDimFluteTalkConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPathInputTips; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconPathErrorTIps; // 0x20
		::System::UInt32 FluteID; // 0x28
		::RPG::Client::TextID EnterTipsTextID; // 0x30
		::RPG::Client::TextID InputTipsTextID; // 0x40
		::RPG::Client::TextID ErrorTIpsTextID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFluteTalkConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFluteTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
