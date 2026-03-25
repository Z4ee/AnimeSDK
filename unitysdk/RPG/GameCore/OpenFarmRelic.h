#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_90C547FAFDFB0102_OFFSET UNITYSDK_OFFSET(0x1747BCF0)
#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_FE94D0C1A808DB46_OFFSET UNITYSDK_OFFSET(0x1747BC70)
#define RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1747BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmRelic_TypeDefinitionIndex = 20275;

	class OpenFarmRelic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE94D0C1A808DB46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_FE94D0C1A808DB46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90C547FAFDFB0102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_90C547FAFDFB0102_OFFSET))(a1, a2);
		}
	};
}
