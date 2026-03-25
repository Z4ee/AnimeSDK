#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GACHANEWSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172284C0)
#define RPG_GAMECORE_GACHANEWSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17228750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaNewsRow_TypeDefinitionIndex = 12208;

	class GachaNewsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarList; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 DecideID; // 0x38
		::System::UInt32 NewsID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHANEWSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GachaNewsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaNewsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHANEWSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
