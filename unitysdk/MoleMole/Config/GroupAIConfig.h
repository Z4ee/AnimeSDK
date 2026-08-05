#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigAttackCDUpdateData; }
namespace MoleMole::Config { class ConfigLevelGlobalAIBTreeData; }
namespace MoleMole::Config { class ConfigLevelGlobalAICounterstrokeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x117123E0)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11711E00)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x11711E80)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x11712440)
#define MOLEMOLE_CONFIG_GROUPAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11712740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupAIConfig_TypeDefinitionIndex = 66428;

	class GroupAIConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigLevelGlobalAIBTreeData* AiBTreeData; // 0x10
		::MoleMole::Config::ConfigLevelGlobalAICounterstrokeData* CounterstrokeData; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAttackCDUpdateData*>* AttackCdUpdateData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
		}
	};
}
