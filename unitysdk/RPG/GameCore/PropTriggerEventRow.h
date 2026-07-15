#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9A65D0)
#define RPG_GAMECORE_PROPTRIGGEREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A6770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTriggerEventRow_TypeDefinitionIndex = 13983;

	class PropTriggerEventRow : public ::System::Object
	{
	public:
		::System::String* ExitJsonPath; // 0x10
		::System::String* Name; // 0x18
		::System::String* JsonPath; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGEREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTriggerEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTriggerEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGEREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
