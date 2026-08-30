#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_95B20367A03B88A9_OFFSET UNITYSDK_OFFSET(0x1D624AE0)
#define RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_C7872ACD2E4BCEEC_OFFSET UNITYSDK_OFFSET(0x1D624BB0)
#define RPG_GAMECORE_USEMAINCHARACTERONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D624BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseMainCharacterOnly_TypeDefinitionIndex = 20216;

	class UseMainCharacterOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95B20367A03B88A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseMainCharacterOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseMainCharacterOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_95B20367A03B88A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7872ACD2E4BCEEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_METHOD_3_C7872ACD2E4BCEEC_OFFSET))(a1, a2);
		}
	};
}
