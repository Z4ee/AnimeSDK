#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C5870)
#define RPG_GAMECORE_GRIDFIGHTCONSUMABLESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C5B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConsumablesConfigRow_TypeDefinitionIndex = 12947;

	class GridFightConsumablesConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConsumableParamList; // 0x10
		::RPG::GameCore::GridFightConsumeType ConsumableRule; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean IfStack; // 0x20
		::System::Boolean IfConsume; // 0x21
		::RPG::Client::TextID ConsumableDesc; // 0x28

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
