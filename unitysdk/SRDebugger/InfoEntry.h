#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define SRDEBUGGER_INFOENTRY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1ACE27A0)
#define SRDEBUGGER_INFOENTRY_CREATE_OFFSET UNITYSDK_OFFSET(0x1ACE2750)
#define SRDEBUGGER_INFOENTRY_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1ACE2730)
#define SRDEBUGGER_INFOENTRY_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1ACE2600)
#define SRDEBUGGER_INFOENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1ACE2620)
#define SRDEBUGGER_INFOENTRY_SET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1ACE2740)
#define SRDEBUGGER_INFOENTRY_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1ACE2610)
#define SRDEBUGGER_INFOENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE2790)

namespace SRDebugger
{
	inline static constexpr unsigned int InfoEntry_TypeDefinitionIndex = 35634;

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

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_SET_TITLE_OFFSET))(this, a1);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_GET_ISPRIVATE_OFFSET))(this);
		}

		::System::Void set_IsPrivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_SET_ISPRIVATE_OFFSET))(this, a1);
		}

		static ::SRDebugger::InfoEntry* Create(::System::String* a1, ::System::Func_1<::System::Object*>* a2, ::System::Boolean a3)
		{
			return ((::SRDebugger::InfoEntry*(*)(::System::String*, ::System::Func_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::SRDebugger::InfoEntry* Create_1(::System::String* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::SRDebugger::InfoEntry*(*)(::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INFOENTRY_CREATE_1_OFFSET))(a1, a2, a3);
		}
	};
}
