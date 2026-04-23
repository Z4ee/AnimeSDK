#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A4D20)
#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190A4ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainExteriorConfigRow_TypeDefinitionIndex = 13277;

	class TrainExteriorConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::String* DynamicOptionalBlock; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainExteriorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainExteriorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
