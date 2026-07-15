#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2503962B622BDB7_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x15EBB900)
#define CLASS_1_C2503962B622BDB7_METHOD_1_E261264FF74C1A9A_OFFSET UNITYSDK_OFFSET(0x15EBB850)

inline static constexpr unsigned int Class_1_C2503962B622BDB7_TypeDefinitionIndex = 72481;

class Class_1_C2503962B622BDB7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2503962B622BDB7_TypeDefinitionIndex)->GetStaticField(0x2A5A0);
	}

	static ::System::UInt32 Method_1_E261264FF74C1A9A(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2503962B622BDB7_METHOD_1_E261264FF74C1A9A_OFFSET))(a1);
	}

	static ::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2503962B622BDB7_METHOD_1_226842F6044F973B_OFFSET))();
	}
};
