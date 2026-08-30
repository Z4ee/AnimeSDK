#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_628FF0E3F0C5D010_OFFSET UNITYSDK_OFFSET(0x1CE96FE0)
#define RPG_GAMECORE_OPENFARMRELIC_METHOD_3_D2979FCCBF1FF4FF_OFFSET UNITYSDK_OFFSET(0x1CE96FA0)
#define RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE96FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmRelic_TypeDefinitionIndex = 21845;

	class OpenFarmRelic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2979FCCBF1FF4FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_D2979FCCBF1FF4FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_628FF0E3F0C5D010(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_METHOD_3_628FF0E3F0C5D010_OFFSET))(a1, a2);
		}
	};
}
