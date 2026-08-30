#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_930FD7F0FCF71487_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x162D4F00)
#define CLASS_2_930FD7F0FCF71487_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162D50E0)
#define CLASS_2_930FD7F0FCF71487__CTOR_OFFSET UNITYSDK_OFFSET(0x162D4E60)
#define CLASS_2_930FD7F0FCF71487__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x162D4F90)

inline static constexpr unsigned int Class_2_930FD7F0FCF71487_TypeDefinitionIndex = 60014;

class Class_2_930FD7F0FCF71487 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 CIBIJLKEIMN; // 0x10
	::System::UInt32 CDOCEMFOMAI; // 0x14

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
};
