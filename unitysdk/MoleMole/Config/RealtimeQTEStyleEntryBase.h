#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_74;
class Class_2_D244C6518E0DA169;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET UNITYSDK_OFFSET(0x19B9EF70)
#define MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9EFC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RealtimeQTEStyleEntryBase_TypeDefinitionIndex = 54451;

	class RealtimeQTEStyleEntryBase : public ::System::Object
	{
	public:
		::System::String* OverrideHintTextKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE__CTOR_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_74* GetButtonStyle(::Class_2_D244C6518E0DA169* task)
		{
			return ((::Class_1_43BD383C98B4C0C5_74*(*)(::PVOID, ::Class_2_D244C6518E0DA169*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTESTYLEENTRYBASE_GETBUTTONSTYLE_OFFSET))(this, task);
		}
	};
}
