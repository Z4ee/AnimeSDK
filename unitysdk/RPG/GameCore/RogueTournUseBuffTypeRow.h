#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D490280)
#define RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4903A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournUseBuffTypeRow_TypeDefinitionIndex = 14854;

	class RogueTournUseBuffTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UseBuffTypeList; // 0x10
		::RPG::GameCore::RogueTournMode TournMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournUseBuffTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournUseBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
