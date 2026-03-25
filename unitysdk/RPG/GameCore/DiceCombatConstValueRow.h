#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1715E840)
#define RPG_GAMECORE_DICECOMBATCONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1715E980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatConstValueRow_TypeDefinitionIndex = 10512;

	class DiceCombatConstValueRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DiceCombatConstValueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCONSTVALUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
