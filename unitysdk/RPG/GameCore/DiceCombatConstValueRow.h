#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10DFB0)
#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10E0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatConstValueRow_TypeDefinitionIndex = 10842;

	class DiceCombatConstValueRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatConstValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
