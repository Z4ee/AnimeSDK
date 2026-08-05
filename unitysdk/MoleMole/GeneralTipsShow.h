#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/GeneralTipsShow_GoBtnData.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_GENERALTIPSSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1924EEB0)
#define MOLEMOLE_GENERALTIPSSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1924EF00)
#define MOLEMOLE_GENERALTIPSSHOW_SETDETAILANDTTITLE_OFFSET UNITYSDK_OFFSET(0x1924F260)
#define MOLEMOLE_GENERALTIPSSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0x1924F1F0)
#define MOLEMOLE_GENERALTIPSSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1924EEC0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralTipsShow_TypeDefinitionIndex = 79502;

	class GeneralTipsShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* message; // 0x28
		::MoleMole::GeneralTipsShow_GoBtnData GoData; // 0x30
		::System::String* title; // 0x50
		::System::String* detail; // 0x58
		::System::Boolean showCustomDetailTitle; // 0x60

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW__CTOR_OFFSET))(this, message);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void SetGoBtn(::System::String* key, ::System::Action* callback, ::System::Func_1<::System::Boolean>* showGoPredicate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_SETGOBTN_OFFSET))(this, key, callback, showGoPredicate);
		}

		::System::Void SetDetailAndTtitle(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_SETDETAILANDTTITLE_OFFSET))(this, title, detail);
		}
	};
}
