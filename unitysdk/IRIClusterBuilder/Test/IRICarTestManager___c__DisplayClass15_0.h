#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IRIClusterBuilder::Test { class IRICarTestManager; }

#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111D6000)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER___C__DISPLAYCLASS15_0__RELOADVOLUMETEMPLATES_B__0_OFFSET UNITYSDK_OFFSET(0x111D9C80)

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager___c__DisplayClass15_0_TypeDefinitionIndex = 38642;

	class IRICarTestManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::IRIClusterBuilder::Test::IRICarTestManager* __4__this; // 0x10
		::Il2CppArray<::System::Byte>* assetBundleData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadVolumeTemplates_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER___C__DISPLAYCLASS15_0__RELOADVOLUMETEMPLATES_B__0_OFFSET))(this);
		}
	};
}
