#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187B4950)
#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187B4AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerConditionRow_TypeDefinitionIndex = 10541;

	class CakeRaceTriggerConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamList; // 0x10
		::System::UInt32 ConditionID; // 0x18
		::RPG::GameCore::CakeRaceTriggerConditionType ConditionType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceTriggerConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTriggerConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
