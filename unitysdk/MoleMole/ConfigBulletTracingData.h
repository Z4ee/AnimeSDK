#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBULLETTRACINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F6D50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBulletTracingData_TypeDefinitionIndex = 51510;

	class ConfigBulletTracingData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule>* TraceGroupModules; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBULLETTRACINGDATA__CTOR_OFFSET))(this);
		}
	};
}
