#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleBuffConditionType.h"
#include "unitysdk/RPG/GameCore/MarbleBuffOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBUFFCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17388040)
#define RPG_GAMECORE_MARBLEBUFFCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17388260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffConditionRow_TypeDefinitionIndex = 10921;

	class MarbleBuffConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::Single DrawTypeParameter; // 0x18
		::RPG::GameCore::MarbleBuffConditionType DrawType; // 0x1C
		::RPG::GameCore::MarbleBuffOperationType OperationType; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleBuffConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
