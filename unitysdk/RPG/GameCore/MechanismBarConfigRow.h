#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2847C0)
#define RPG_GAMECORE_MECHANISMBARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D284A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechanismBarConfigRow_TypeDefinitionIndex = 14014;

	class MechanismBarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 MaxValue; // 0x24
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MechanismBarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MechanismBarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
