#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYBONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241AFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessoryBoneData_TypeDefinitionIndex = 44785;

	class ConfigDynamicAccessoryBoneData : public ::System::Object
	{
	public:
		::System::String* RootBoneAttachPointName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* BoneAttachPointNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYBONEDATA__CTOR_OFFSET))(this);
		}
	};
}
