#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9A7A20)
#define RPG_GAMECORE_PSACTIVITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A7D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PsActivityRow_TypeDefinitionIndex = 12582;

	class PsActivityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ObjectIDList; // 0x10
		::RPG::Client::TextID task; // 0x18
		::RPG::Client::TextID description; // 0x28
		::RPG::Client::TextID name; // 0x38
		::System::UInt32 ActivityID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PsActivityRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PsActivityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
