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

#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142517A0)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x142511B0)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x14251230)
#define MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x14251800)
#define MOLEMOLE_CONFIG_GROUPAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14251B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupAIConfig_TypeDefinitionIndex = 45013;

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

		::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPAICONFIG_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}
	};
}
