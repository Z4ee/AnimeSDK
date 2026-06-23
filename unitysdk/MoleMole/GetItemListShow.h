#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/GetItemListShow_GoBtnData.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_61B3BCD70D19C820;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x182E36A0)
#define MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x182E36F0)
#define MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x182E3200)
#define MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x182E3650)
#define MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET UNITYSDK_OFFSET(0x182E3CB0)
#define MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_1_OFFSET UNITYSDK_OFFSET(0x182E3B70)
#define MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0x182E3B00)
#define MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x182E35F0)
#define MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x182E3740)
#define MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x182E3210)
#define MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x182E3D10)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListShow_TypeDefinitionIndex = 84351;

	class GetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::GetItemListShow_GoBtnData GoData; // 0x28
		::System::String* title; // 0x48
		::System::String* GainTitle; // 0x50
		::Class_1_61B3BCD70D19C820* _context; // 0x58
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x60
		::System::String* detail; // 0x68
		::System::Boolean ShowCustomGainText; // 0x70
		::System::Boolean showCustomDetailTitle; // 0x71

		::System::Void _ctor(::Class_1_61B3BCD70D19C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61B3BCD70D19C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}

		::System::Void SetGoBtn(::System::String* key, ::System::Action* callback, ::System::Func_1<::System::Boolean>* showGoPredicate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET))(this, key, callback, showGoPredicate);
		}

		::System::Void SetGoBtn_1(::System::Int32 accessId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_1_OFFSET))(this, accessId);
		}

		::System::Void SetDetailAndTtitle(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET))(this, title, detail);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
