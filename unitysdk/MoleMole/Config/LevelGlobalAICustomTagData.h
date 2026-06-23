#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_GET_CUSTOMKEYLIST_OFFSET UNITYSDK_OFFSET(0x1AA6E910)
#define MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_READDATA_OFFSET UNITYSDK_OFFSET(0x1AA6E8D0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_VALIDATECUSTOMKEYLIST_OFFSET UNITYSDK_OFFSET(0x1AA6E980)
#define MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA6EC20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAICustomTagData_TypeDefinitionIndex = 63892;

	class LevelGlobalAICustomTagData : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Single time; // 0x18
		::System::Int32 maxNum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void ReadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_READDATA_OFFSET))();
		}

		static ::System::Collections::Generic::IList_1<::System::String*>* get_customKeyList()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_GET_CUSTOMKEYLIST_OFFSET))();
		}

		::System::Boolean ValidateCustomKeyList(::System::String* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAICUSTOMTAGDATA_VALIDATECUSTOMKEYLIST_OFFSET))(this, val);
		}
	};
}
