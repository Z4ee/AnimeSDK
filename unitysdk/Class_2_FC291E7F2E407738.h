#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_217C0C2193BFFB59.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FC291E7F2E407738_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F37BA0)
#define CLASS_2_FC291E7F2E407738_METHOD_2_1DA2B691CB653998_1_OFFSET UNITYSDK_OFFSET(0x15F37FF0)
#define CLASS_2_FC291E7F2E407738_METHOD_2_1DA2B691CB653998_OFFSET UNITYSDK_OFFSET(0x15F37C20)
#define CLASS_2_FC291E7F2E407738__CTOR_OFFSET UNITYSDK_OFFSET(0x15F383C0)

inline static constexpr unsigned int Class_2_FC291E7F2E407738_TypeDefinitionIndex = 72440;

class Class_2_FC291E7F2E407738 : public ::Class_1_217C0C2193BFFB59
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC291E7F2E407738__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC291E7F2E407738_CLEAR_OFFSET))(this);
	}

	::System::String* Method_2_1DA2B691CB653998(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FC291E7F2E407738_METHOD_2_1DA2B691CB653998_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_1DA2B691CB653998_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FC291E7F2E407738_METHOD_2_1DA2B691CB653998_1_OFFSET))(this, a1, a2);
	}
};
