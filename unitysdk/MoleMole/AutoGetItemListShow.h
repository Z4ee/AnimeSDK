#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AUTOGETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x135886C0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x13588710)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x135884B0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13588670)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0x13588610)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x135885B0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x13588760)
#define MOLEMOLE_AUTOGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x135884C0)
#define MOLEMOLE_AUTOGETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x13588A90)

namespace MoleMole
{
	inline static constexpr unsigned int AutoGetItemListShow_TypeDefinitionIndex = 42465;

	class AutoGetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28
		::System::String* goText; // 0x30
		::System::Action* goCallback; // 0x38
		::System::Boolean showOverflowHint; // 0x40
		::System::Boolean showGoBtn; // 0x41

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* addItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW__CTOR_OFFSET))(this, addItems);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void SetGoBtn(::System::String* key, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SETGOBTN_OFFSET))(this, key, callback);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUTOGETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
