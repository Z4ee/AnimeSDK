#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYCONSTANTGSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD7BD40)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstantGSRow_TypeDefinitionIndex = 11596;

	class ActivityConstantGSRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityConstantGSRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityConstantGSRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
