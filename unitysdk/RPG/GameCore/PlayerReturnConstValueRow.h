#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A3F0C0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3F6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnConstValueRow_TypeDefinitionIndex = 13794;

	class PlayerReturnConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* PlayerReturnConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerReturnConstValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
