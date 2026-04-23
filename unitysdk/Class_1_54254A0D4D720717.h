#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_54254A0D4D720717_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A5DAC0)
#define CLASS_1_54254A0D4D720717_GET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x12A5DC70)
#define CLASS_1_54254A0D4D720717_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12A5DB60)
#define CLASS_1_54254A0D4D720717_METHOD_1_D2FCAFE2F34A7830_OFFSET UNITYSDK_OFFSET(0x12A5DBD0)
#define CLASS_1_54254A0D4D720717_SET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x12A5DC80)
#define CLASS_1_54254A0D4D720717__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5DC90)

inline static constexpr unsigned int Class_1_54254A0D4D720717_TypeDefinitionIndex = 62204;

class Class_1_54254A0D4D720717 : public ::System::Object
{
public:
	::System::Boolean __IsDisposed_k__BackingField; // 0x10
	::System::Boolean Field_1_0; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_1_D2FCAFE2F34A7830(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_METHOD_1_D2FCAFE2F34A7830_OFFSET))(this, a1);
	}

	::System::Boolean get__IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_GET__ISDISPOSED_OFFSET))(this);
	}

	::System::Void set__IsDisposed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_SET__ISDISPOSED_OFFSET))(this, value);
	}
};
