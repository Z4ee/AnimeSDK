#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_METHOD_3_6F0A730AFC6F7736_OFFSET UNITYSDK_OFFSET(0x1CDD2FC0)
#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_METHOD_3_C55CF28F3D268973_OFFSET UNITYSDK_OFFSET(0x1CDD3090)
#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD3080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcPetSearchFollow_TypeDefinitionIndex = 19757;

	class AdvNpcPetSearchFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F0A730AFC6F7736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcPetSearchFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcPetSearchFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_METHOD_3_6F0A730AFC6F7736_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C55CF28F3D268973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcPetSearchFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcPetSearchFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_METHOD_3_C55CF28F3D268973_OFFSET))(a1, a2);
		}
	};
}
