#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C7DBD0)
#define RPG_GAMECORE_PSACTIVITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7DED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PsActivityRow_TypeDefinitionIndex = 12357;

	class PsActivityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ObjectIDList; // 0x10
		::RPG::Client::TextID task; // 0x18
		::System::UInt32 ActivityID; // 0x28
		::RPG::Client::TextID name; // 0x30
		::RPG::Client::TextID description; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PsActivityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PsActivityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
