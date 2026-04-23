#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18806C80)
#define RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18806E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTriggerEventRow_TypeDefinitionIndex = 10651;

	class ChimeraDuelTriggerEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParamList; // 0x10
		::System::String* EventJsonPath; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::UInt32 EventID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelTriggerEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTriggerEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
