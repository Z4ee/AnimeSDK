#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InteractCostType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BDA90)
#define RPG_GAMECORE_INTERACTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172BE1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractRow_TypeDefinitionIndex = 13290;

	class InteractRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ItemCostList; // 0x10
		::RPG::Client::TextID InteractDesc; // 0x18
		::System::UInt32 InteractID; // 0x28
		::RPG::GameCore::PropState TargetState; // 0x2C
		::RPG::GameCore::InteractCostType InteractCostType; // 0x30
		::RPG::GameCore::PropState SrcState; // 0x34
		::System::Boolean IsEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InteractRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InteractRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
