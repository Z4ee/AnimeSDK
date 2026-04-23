#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL_METHOD_3_D9C0453CED005297_OFFSET UNITYSDK_OFFSET(0x19104010)
#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL_METHOD_3_F6681EF467ADCEE6_OFFSET UNITYSDK_OFFSET(0x19103F90)
#define RPG_GAMECORE_WAITPLAYERCHANGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19103FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerChangeModel_TypeDefinitionIndex = 19337;

	class WaitPlayerChangeModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6681EF467ADCEE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerChangeModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerChangeModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL_METHOD_3_F6681EF467ADCEE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9C0453CED005297(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERCHANGEMODEL_METHOD_3_D9C0453CED005297_OFFSET))(a1, a2);
		}
	};
}
