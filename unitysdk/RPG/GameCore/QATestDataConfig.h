#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class QAAdventurePlayerRow; }

#define RPG_GAMECORE_QATESTDATACONFIG_METHOD_2_577CD6D05F5A8AD8_OFFSET UNITYSDK_OFFSET(0x1D18C0A0)
#define RPG_GAMECORE_QATESTDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18C190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QATestDataConfig_TypeDefinitionIndex = 18841;

	class QATestDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::QAAdventurePlayerRow*>* QAAdventurePlayerConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QATESTDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_577CD6D05F5A8AD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QATestDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QATestDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QATESTDATACONFIG_METHOD_2_577CD6D05F5A8AD8_OFFSET))(a1, a2);
		}
	};
}
