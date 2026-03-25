#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALMAPPINGINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775CA50)
#define RPG_GAMECORE_SPECIALMAPPINGINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1775D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialMappingInfoRow_TypeDefinitionIndex = 11452;

	class SpecialMappingInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 WorldLevel; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialMappingInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialMappingInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
