#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_6C86B3F80D30A8E0_OFFSET UNITYSDK_OFFSET(0x19E38D90)
#define RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_C7872ACD2E4BCEEC_OFFSET UNITYSDK_OFFSET(0x19E38EA0)
#define RPG_GAMECORE_USEMAINCHARACTERONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseMainCharacterOnly_TypeDefinitionIndex = 19314;

	class UseMainCharacterOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C86B3F80D30A8E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseMainCharacterOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseMainCharacterOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_6C86B3F80D30A8E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7872ACD2E4BCEEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_C7872ACD2E4BCEEC_OFFSET))(a1, a2);
		}
	};
}
