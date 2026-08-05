#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class FileStream; }

#define CLASS_1_FCAD3C387670DE91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B83D310)
#define CLASS_1_FCAD3C387670DE91_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B83D2A0)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_5C23018870BC2339_OFFSET UNITYSDK_OFFSET(0x1B83D550)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_66E24502C9FA6732_OFFSET UNITYSDK_OFFSET(0x1B83DAD0)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_6B46575F0BDA05A3_OFFSET UNITYSDK_OFFSET(0x1B83D810)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B83DE10)
#define CLASS_1_FCAD3C387670DE91__CTOR_OFFSET UNITYSDK_OFFSET(0x1B83D540)

inline static constexpr unsigned int Class_1_FCAD3C387670DE91_TypeDefinitionIndex = 8280;

class Class_1_FCAD3C387670DE91 : public ::System::Object
{
public:
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>* Field_1_2; // 0x10
	::System::IO::FileStream* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5C23018870BC2339(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_5C23018870BC2339_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B46575F0BDA05A3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_6B46575F0BDA05A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_66E24502C9FA6732(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_66E24502C9FA6732_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
