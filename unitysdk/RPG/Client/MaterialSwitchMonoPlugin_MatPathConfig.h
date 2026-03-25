#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7DB20)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSwitchMonoPlugin_MatPathConfig_TypeDefinitionIndex = 57928;

	class MaterialSwitchMonoPlugin_MatPathConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MaterialPathList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_MATPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
