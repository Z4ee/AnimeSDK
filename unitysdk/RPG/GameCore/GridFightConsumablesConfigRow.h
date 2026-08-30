#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D14D9B0)
#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConsumablesConfigRow_TypeDefinitionIndex = 13338;

	class GridFightConsumablesConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConsumableParamList; // 0x10
		::RPG::GameCore::GridFightConsumeType ConsumableRule; // 0x18
		::RPG::Client::TextID ConsumableDesc; // 0x20
		::System::Boolean IfStack; // 0x30
		::System::Boolean IfConsume; // 0x31
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConsumablesConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConsumablesConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
