#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_0_16E4307DCC419505_923;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0B6B39B929043B8F_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x16A22430)
#define CLASS_1_0B6B39B929043B8F_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16A226E0)
#define CLASS_1_0B6B39B929043B8F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16A22810)
#define CLASS_1_0B6B39B929043B8F_METHOD_1_5D214A3241F5E0AE_OFFSET UNITYSDK_OFFSET(0x16A22870)
#define CLASS_1_0B6B39B929043B8F_METHOD_1_79A0DD953C362A58_OFFSET UNITYSDK_OFFSET(0x16A22780)
#define CLASS_1_0B6B39B929043B8F_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x16A224B0)
#define CLASS_1_0B6B39B929043B8F__CTOR_OFFSET UNITYSDK_OFFSET(0x16A22B10)

inline static constexpr unsigned int Class_1_0B6B39B929043B8F_TypeDefinitionIndex = 70018;

class Class_1_0B6B39B929043B8F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_923*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_923* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_923*))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_1_79A0DD953C362A58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_METHOD_1_79A0DD953C362A58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Object* Method_1_5D214A3241F5E0AE(::System::String* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_904* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::Class_0_16E4307DCC419505_904*))((::PBYTE)hIl2Cpp + CLASS_1_0B6B39B929043B8F_METHOD_1_5D214A3241F5E0AE_OFFSET))(this, a1, a2, a3);
	}
};
