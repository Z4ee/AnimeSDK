#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InteractCostType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D21F270)
#define RPG_GAMECORE_INTERACTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractRow_TypeDefinitionIndex = 14399;

	class InteractRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ItemCostList; // 0x10
		::RPG::Client::TextID InteractDesc; // 0x18
		::RPG::GameCore::InteractCostType InteractCostType; // 0x28
		::RPG::GameCore::PropState TargetState; // 0x2C
		::System::Boolean IsEvent; // 0x30
		::RPG::GameCore::PropState SrcState; // 0x34
		::System::UInt32 InteractID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InteractRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InteractRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
