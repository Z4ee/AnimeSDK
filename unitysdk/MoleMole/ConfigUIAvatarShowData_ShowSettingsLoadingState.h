#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA_SHOWSETTINGSLOADINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6CF00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData_ShowSettingsLoadingState_TypeDefinitionIndex = 56953;

	class ConfigUIAvatarShowData_ShowSettingsLoadingState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Action*>* Callbacks; // 0x10
		::System::Int32 LoadToken; // 0x18

		::System::Void _ctor(::System::Int32 loadToken, ::System::Action* complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA_SHOWSETTINGSLOADINGSTATE__CTOR_OFFSET))(this, loadToken, complete);
		}
	};
}
