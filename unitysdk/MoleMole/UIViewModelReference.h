#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControlReference.h"

namespace System { class String; }

#define MOLEMOLE_UIVIEWMODELREFERENCE_COPYFROMOTHERREFERENCE_OFFSET UNITYSDK_OFFSET(0x19175990)
#define MOLEMOLE_UIVIEWMODELREFERENCE_GET_BINDCLASSNAME_OFFSET UNITYSDK_OFFSET(0x19175930)
#define MOLEMOLE_UIVIEWMODELREFERENCE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19175CF0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0x19175940)
#define MOLEMOLE_UIVIEWMODELREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19175D40)
#define MOLEMOLE_UIVIEWMODELREFERENCE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19175E10)
#define MOLEMOLE_UIVIEWMODELREFERENCE___BASE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0x19175E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewModelReference_TypeDefinitionIndex = 59188;

	class UIViewModelReference : public ::MoleMole::UIControlReference
	{
	public:
		::System::Boolean ExportController; // 0xD0
		::System::String* UIBindClassName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE__CTOR_OFFSET))(this);
		}

		::System::String* get_BindClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_GET_BINDCLASSNAME_OFFSET))(this);
		}

		::System::Boolean ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_SHOWEXPORTDIR_OFFSET))(this);
		}

		::System::Void CopyFromOtherReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_COPYFROMOTHERREFERENCE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE___BASE_SHOWEXPORTDIR_OFFSET))(this);
		}
	};
}
