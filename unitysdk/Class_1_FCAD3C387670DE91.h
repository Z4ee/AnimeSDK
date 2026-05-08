#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class FileStream; }

#define CLASS_1_FCAD3C387670DE91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA12D80)
#define CLASS_1_FCAD3C387670DE91_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AA12D10)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_5C23018870BC2339_OFFSET UNITYSDK_OFFSET(0x1AA13330)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_6B46575F0BDA05A3_OFFSET UNITYSDK_OFFSET(0x1AA131C0)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AA13320)
#define CLASS_1_FCAD3C387670DE91_METHOD_1_F31751E85D234B4D_OFFSET UNITYSDK_OFFSET(0x1AA12E80)
#define CLASS_1_FCAD3C387670DE91__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA12E70)

inline static constexpr unsigned int Class_1_FCAD3C387670DE91_TypeDefinitionIndex = 7939;

class Class_1_FCAD3C387670DE91 : public ::System::Object
{
public:
	::System::IO::FileStream* Field_1_0; // 0x10
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21

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

	::System::Void Method_1_F31751E85D234B4D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_F31751E85D234B4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B46575F0BDA05A3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_6B46575F0BDA05A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_5C23018870BC2339(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCAD3C387670DE91_METHOD_1_5C23018870BC2339_OFFSET))(this, a1);
	}
};
