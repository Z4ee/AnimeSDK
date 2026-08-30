#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_90889A2023AB884E_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF00BF0)
#define CLASS_1_90889A2023AB884E_4_GET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xBF00E60)
#define CLASS_1_90889A2023AB884E_4_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBF00CE0)
#define CLASS_1_90889A2023AB884E_4_METHOD_1_D2FCAFE2F34A7830_OFFSET UNITYSDK_OFFSET(0xBF00DB0)
#define CLASS_1_90889A2023AB884E_4_SET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xBF00E70)
#define CLASS_1_90889A2023AB884E_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBF00E80)

inline static constexpr unsigned int Class_1_90889A2023AB884E_4_TypeDefinitionIndex = 67500;

class Class_1_90889A2023AB884E_4 : public ::System::Object
{
public:
	::System::Boolean CKOBGJNCLFH; // 0x10
	::System::Boolean __IsDisposed_k__BackingField; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_1_D2FCAFE2F34A7830(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4_METHOD_1_D2FCAFE2F34A7830_OFFSET))(this, a1);
	}

	::System::Boolean get__IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4_GET__ISDISPOSED_OFFSET))(this);
	}

	::System::Void set__IsDisposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4_SET__ISDISPOSED_OFFSET))(this, a1);
	}
};
