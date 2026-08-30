#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAMPLACEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D308940)
#define RPG_GAMECORE_PAMPLACEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D308A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamPlaceInfoRow_TypeDefinitionIndex = 14197;

	class PamPlaceInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PamActionType>* PamActionList; // 0x10
		::RPG::GameCore::PamPlaceType PamPlaceType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMPLACEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamPlaceInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamPlaceInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMPLACEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
