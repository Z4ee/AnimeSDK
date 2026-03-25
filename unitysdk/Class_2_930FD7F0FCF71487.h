#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_930FD7F0FCF71487_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x113DD300)
#define CLASS_2_930FD7F0FCF71487_TOSTRING_OFFSET UNITYSDK_OFFSET(0x113DD4E0)
#define CLASS_2_930FD7F0FCF71487__CTOR_OFFSET UNITYSDK_OFFSET(0x113DD230)
#define CLASS_2_930FD7F0FCF71487__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x113DD390)
#define CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x113DD590)
#define CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x113DD670)
#define CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x113DD600)

inline static constexpr unsigned int Class_2_930FD7F0FCF71487_TypeDefinitionIndex = 48494;

class Class_2_930FD7F0FCF71487 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487_TOSTRING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_930FD7F0FCF71487___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
