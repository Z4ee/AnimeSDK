#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173CD810)
#define RPG_GAMECORE_MECHANISMBARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173CDA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechanismBarConfigRow_TypeDefinitionIndex = 12912;

	class MechanismBarConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x18
		::System::UInt32 MaxValue; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MechanismBarConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MechanismBarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
