#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_026AB6726CC30F17_OFFSET UNITYSDK_OFFSET(0x1874C090)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_CF278D7DDC4D4435_OFFSET UNITYSDK_OFFSET(0x1874C160)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED__CTOR_OFFSET UNITYSDK_OFFSET(0x1874C110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIfGroupIsOccupied_TypeDefinitionIndex = 20068;

	class ByIfGroupIsOccupied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::System::UInt32 GroupID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_026AB6726CC30F17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_026AB6726CC30F17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF278D7DDC4D4435(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_CF278D7DDC4D4435_OFFSET))(a1, a2);
		}
	};
}
