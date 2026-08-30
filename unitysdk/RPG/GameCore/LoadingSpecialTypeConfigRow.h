#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20C0E0)
#define RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20C2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingSpecialTypeConfigRow_TypeDefinitionIndex = 13884;

	class LoadingSpecialTypeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableEntranceIDList; // 0x10
		::System::UInt32 SubMissionID; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::UInt32 LoadingType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadingSpecialTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingSpecialTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSPECIALTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
