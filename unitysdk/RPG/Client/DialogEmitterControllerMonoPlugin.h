#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8DB01E964BDF796D;
namespace RPG::Client { class DialogEmitterControllerMonoPlugin_DialogDataGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCCA8040)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterControllerMonoPlugin_TypeDefinitionIndex = 70856;

	class DialogEmitterControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8DB01E964BDF796D*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterControllerMonoPlugin_DialogDataGroup*>* DialogDataGroups; // 0x30
		::System::Single SwitchInterval; // 0x38
		::System::Boolean IfDynamicUpdatePosition; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
