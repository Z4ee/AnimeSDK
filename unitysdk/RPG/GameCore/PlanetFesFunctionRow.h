#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESFUNCTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D340AB0)
#define RPG_GAMECORE_PLANETFESFUNCTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D340CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesFunctionRow_TypeDefinitionIndex = 12186;

	class PlanetFesFunctionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::PlanetFesFunctionType FunctionType; // 0x18
		::System::UInt32 SkillID; // 0x1C
		::RPG::Client::TextID Description; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESFUNCTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesFunctionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesFunctionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESFUNCTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
