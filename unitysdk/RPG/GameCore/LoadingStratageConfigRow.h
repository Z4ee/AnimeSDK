#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/System/Object.h"

class Class_1_0B20F1FA28B84337;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17366BF0)
#define RPG_GAMECORE_LOADINGSTRATAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17366E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingStratageConfigRow_TypeDefinitionIndex = 12784;

	class LoadingStratageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableEntranceIDList; // 0x10
		::Il2CppArray<::Class_1_0B20F1FA28B84337*>* FloorOperation; // 0x18
		::Il2CppArray<::System::UInt32>* MissionIDList; // 0x20
		::System::UInt32 Priority; // 0x28
		::RPG::GameCore::LoadingStratageType StratageType; // 0x2C
		::System::UInt32 LoadingID; // 0x30
		::System::UInt32 LoadingType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSTRATAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LoadingStratageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingStratageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
