#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleBuffConditionType.h"
#include "unitysdk/RPG/GameCore/MarbleBuffOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBUFFCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4A32A0)
#define RPG_GAMECORE_MARBLEBUFFCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A34C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffConditionRow_TypeDefinitionIndex = 11861;

	class MarbleBuffConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Single DrawTypeParameter; // 0x1C
		::RPG::GameCore::MarbleBuffOperationType OperationType; // 0x20
		::RPG::GameCore::MarbleBuffConditionType DrawType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBuffConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBuffConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
