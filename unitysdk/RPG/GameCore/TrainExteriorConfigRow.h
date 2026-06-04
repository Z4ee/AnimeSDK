#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DEFA80)
#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEFC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainExteriorConfigRow_TypeDefinitionIndex = 13352;

	class TrainExteriorConfigRow : public ::System::Object
	{
	public:
		::System::String* DynamicOptionalBlock; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Priority; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainExteriorConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainExteriorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
