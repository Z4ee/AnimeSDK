#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGCONDITIONDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E011CE0)
#define RPG_GAMECORE_CHENLINGCONDITIONDESCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E011E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingConditionDescRow_TypeDefinitionIndex = 11016;

	class ChenLingConditionDescRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::GameCore::ChenLingConditionType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONDITIONDESCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingConditionDescRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingConditionDescRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONDITIONDESCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
