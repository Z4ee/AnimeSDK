#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_90889A2023AB884E_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15084360)
#define CLASS_1_90889A2023AB884E_1_GET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x150845D0)
#define CLASS_1_90889A2023AB884E_1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15084450)
#define CLASS_1_90889A2023AB884E_1_METHOD_1_D2FCAFE2F34A7830_OFFSET UNITYSDK_OFFSET(0x15084520)
#define CLASS_1_90889A2023AB884E_1_SET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x150845E0)
#define CLASS_1_90889A2023AB884E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x150845F0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_1_TypeDefinitionIndex = 64504;

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

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
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
