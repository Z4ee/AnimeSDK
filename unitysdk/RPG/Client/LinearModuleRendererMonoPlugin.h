#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LinearModuleRendererBehavior_PrototypeData.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class LinearModuleRendererBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LINEARMODULERENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x19B7BCA0)
#define RPG_CLIENT_LINEARMODULERENDERERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7BCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int LinearModuleRendererMonoPlugin_TypeDefinitionIndex = 67715;

	class LinearModuleRendererMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LinearModuleRendererBehavior*>
	{
	public:
		::System::Boolean IfUseCustomScale; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LinearModuleRendererBehavior_PrototypeData>* PrototypeDatas; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
