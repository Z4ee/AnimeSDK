#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PluginStorage_DataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_STOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B146060)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PluginStorage_StoreData_TypeDefinitionIndex = 39145;

	class HEU_PluginStorage_StoreData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_PluginStorage_DataType _type; // 0x10
		::System::String* _valueStr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_STOREDATA__CTOR_OFFSET))(this);
		}
	};
}
