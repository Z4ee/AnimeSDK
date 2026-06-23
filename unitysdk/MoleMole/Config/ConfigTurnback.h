#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTURNBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x170564A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnback_TypeDefinitionIndex = 82548;

	class ConfigTurnback : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* animatorStateNameList; // 0x10
		::System::Int32 inputCmpAngle; // 0x18
		::System::Int32 characterCmpAngle; // 0x1C
		::System::Int32 maxCacheFrameCnt; // 0x20
		::System::Int32 triggerResetCounter; // 0x24
		::System::Boolean triggerResetLogSwitch; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBACK__CTOR_OFFSET))(this);
		}
	};
}
