#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_90889A2023AB884E_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB2CD90)
#define CLASS_1_90889A2023AB884E_1_GET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xAB2CF50)
#define CLASS_1_90889A2023AB884E_1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAB2CE30)
#define CLASS_1_90889A2023AB884E_1_METHOD_1_D2FCAFE2F34A7830_OFFSET UNITYSDK_OFFSET(0xAB2CEA0)
#define CLASS_1_90889A2023AB884E_1_SET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xAB2CF60)
#define CLASS_1_90889A2023AB884E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2CF70)

inline static constexpr unsigned int Class_1_90889A2023AB884E_1_TypeDefinitionIndex = 63137;

class Class_1_90889A2023AB884E_1 : public ::System::Object
{
public:
	::System::Boolean __IsDisposed_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_1_D2FCAFE2F34A7830(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_METHOD_1_D2FCAFE2F34A7830_OFFSET))(this, a1);
	}

	::System::Boolean get__IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_GET__ISDISPOSED_OFFSET))(this);
	}

	::System::Void set__IsDisposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_SET__ISDISPOSED_OFFSET))(this, a1);
	}
};
