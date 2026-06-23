#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_3_06B506F3349584D7;
class Class_3_AE02BC8285203464_18;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET UNITYSDK_OFFSET(0x18B38DF0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18B38B20)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18B38E50)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x18B38D90)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B38B30)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET UNITYSDK_OFFSET(0x18B39BD0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x18B39F40)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj_TypeDefinitionIndex = 84956;

	class HallRefreshShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::Class_3_AE02BC8285203464_18* ntf; // 0x20
		::System::UInt32 sectionUID; // 0x28

		::System::Void _ctor(::Class_3_AE02BC8285203464_18* ntf, ::Enum_3_205B03D40B9BD873 page)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void ChangeSection(::Class_3_AE02BC8285203464_18* ntf, ::System::UInt32 sectionUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET))(this, ntf, sectionUID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		static ::System::Boolean _OnProcess_g__CheckInCamera_7_3(::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* tagList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET))(tagList);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
