#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_METHOD_2_015CE73AB4EA966E_OFFSET UNITYSDK_OFFSET(0x1DCB2B30)
#define RPG_GAMECORE_FORMATIONMOVEMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveMemberInfo_TypeDefinitionIndex = 21009;

	class FormationMoveMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 RiderID; // 0x14
		::System::Int32 SlotIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEMEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_015CE73AB4EA966E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveMemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveMemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEMEMBERINFO_METHOD_2_015CE73AB4EA966E_OFFSET))(a1, a2);
		}
	};
}
