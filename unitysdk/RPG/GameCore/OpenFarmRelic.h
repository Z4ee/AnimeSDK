#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_628FF0E3F0C5D010_OFFSET UNITYSDK_OFFSET(0x199D6DE0)
#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_D133B1A3E5FE7148_OFFSET UNITYSDK_OFFSET(0x199D6D60)
#define RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET UNITYSDK_OFFSET(0x199D6DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmRelic_TypeDefinitionIndex = 20870;

	class OpenFarmRelic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D133B1A3E5FE7148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_D133B1A3E5FE7148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_628FF0E3F0C5D010(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_628FF0E3F0C5D010_OFFSET))(a1, a2);
		}
	};
}
