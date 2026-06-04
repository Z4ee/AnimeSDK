#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace RPG::Client { class ActivityData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9F6A8BCA0351212F_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x14167210)
#define CLASS_2_9F6A8BCA0351212F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14167390)
#define CLASS_2_9F6A8BCA0351212F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14167430)
#define CLASS_2_9F6A8BCA0351212F__CTOR_OFFSET UNITYSDK_OFFSET(0x141671F0)
#define CLASS_2_9F6A8BCA0351212F__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x14167310)
#define CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x141674E0)
#define CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x141675A0)
#define CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x14167540)

inline static constexpr unsigned int Class_2_9F6A8BCA0351212F_TypeDefinitionIndex = 55970;

class Class_2_9F6A8BCA0351212F : public ::RPG::Client::SyncCheckItemBase
{
public:
	::RPG::Client::ActivityData* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F_TOSTRING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6A8BCA0351212F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
