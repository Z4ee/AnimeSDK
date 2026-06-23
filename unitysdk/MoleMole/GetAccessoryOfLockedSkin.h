#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15130E00)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONCLICKGO_OFFSET UNITYSDK_OFFSET(0x15131230)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15130E50)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15130E10)

namespace MoleMole
{
	inline static constexpr unsigned int GetAccessoryOfLockedSkin_TypeDefinitionIndex = 55070;

	class GetAccessoryOfLockedSkin : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _skinIDList; // 0x28
		::System::Int32 _accID; // 0x30

		::System::Void _ctor(::System::Int32 accID, ::System::Collections::Generic::List_1<::System::Int32>* skinIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN__CTOR_OFFSET))(this, accID, skinIDList);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONPROCESS_OFFSET))(this);
		}

		::System::Void OnClickGo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN_ONCLICKGO_OFFSET))(this);
		}
	};
}
