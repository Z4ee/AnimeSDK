#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_B51RACINGCYCLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE5CEC0)
#define RPG_GAMECORE_B51RACINGCYCLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5D1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingCycleRow_TypeDefinitionIndex = 10934;

	class B51RacingCycleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TeamIDList; // 0x10
		::Il2CppArray<::System::UInt32>* CarIDList; // 0x18
		::Il2CppArray<::System::UInt32>* DriverIDList; // 0x20
		::Il2CppArray<::System::UInt32>* PaintIDList; // 0x28
		::Il2CppArray<::System::UInt32>* PartIDList; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGCYCLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingCycleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingCycleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGCYCLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
