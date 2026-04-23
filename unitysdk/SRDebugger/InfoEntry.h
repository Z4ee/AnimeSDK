#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define SRDEBUGGER_INFOENTRY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x19E6C2A0)
#define SRDEBUGGER_INFOENTRY_CREATE_OFFSET UNITYSDK_OFFSET(0x19E6C250)
#define SRDEBUGGER_INFOENTRY_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x19E6C230)
#define SRDEBUGGER_INFOENTRY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x19E6C100)
#define SRDEBUGGER_INFOENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19E6C120)
#define SRDEBUGGER_INFOENTRY_SET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x19E6C240)
#define SRDEBUGGER_INFOENTRY_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x19E6C110)
#define SRDEBUGGER_INFOENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6C290)

namespace SRDebugger
{
	inline static constexpr unsigned int InfoEntry_TypeDefinitionIndex = 35334;

	class InfoEntry : public ::System::Object
	{
	public:
		::System::Func_1<::System::Object*>* _valueGetter; // 0x10
		::System::String* _Title_k__BackingField; // 0x18
		::System::Boolean _IsPrivate_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_SET_TITLE_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_GET_ISPRIVATE_OFFSET))(this);
		}

		::System::Void set_IsPrivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_SET_ISPRIVATE_OFFSET))(this, value);
		}

		static ::SRDebugger::InfoEntry* Create(::System::String* name, ::System::Func_1<::System::Object*>* getter, ::System::Boolean isPrivate)
		{
			return ((::SRDebugger::InfoEntry*(*)(::System::String*, ::System::Func_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_CREATE_OFFSET))(name, getter, isPrivate);
		}

		static ::SRDebugger::InfoEntry* Create_1(::System::String* name, ::System::Object* value, ::System::Boolean isPrivate)
		{
			return ((::SRDebugger::InfoEntry*(*)(::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_CREATE_1_OFFSET))(name, value, isPrivate);
		}
	};
}
