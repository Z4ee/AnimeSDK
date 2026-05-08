#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_BLACKCURTAINSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11C86390)
#define MOLEMOLE_BLACKCURTAINSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11C86430)
#define MOLEMOLE_BLACKCURTAINSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11C863A0)

namespace MoleMole
{
	inline static constexpr unsigned int BlackCurtainShow_TypeDefinitionIndex = 56090;

	class BlackCurtainShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* _finishCallback; // 0x28
		::System::String* _curtainName; // 0x30
		::System::Single _duration; // 0x38

		::System::Void _ctor(::System::Single duration, ::System::String* curtainName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLACKCURTAINSHOW__CTOR_OFFSET))(this, duration, curtainName, callback);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLACKCURTAINSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLACKCURTAINSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
