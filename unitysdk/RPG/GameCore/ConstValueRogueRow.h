#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUEROGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFFEBB0)
#define RPG_GAMECORE_CONSTVALUEROGUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueRogueRow_TypeDefinitionIndex = 14554;

	class ConstValueRogueRow : public ::System::Object
	{
	public:
		::System::String* ConstValue; // 0x10
		::System::String* ConstRogueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConstValueRogueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstValueRogueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
