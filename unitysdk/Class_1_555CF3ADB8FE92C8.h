#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773;
class Class_1_1B7044A592B17773_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_555CF3ADB8FE92C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124A6210)
#define CLASS_1_555CF3ADB8FE92C8_METHOD_1_74BA6D49D35A86C1_OFFSET UNITYSDK_OFFSET(0x124A6320)
#define CLASS_1_555CF3ADB8FE92C8_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x124A60F0)
#define CLASS_1_555CF3ADB8FE92C8_METHOD_1_9477D2E83B0C8EDA_OFFSET UNITYSDK_OFFSET(0x124A64D0)
#define CLASS_1_555CF3ADB8FE92C8__CTOR_OFFSET UNITYSDK_OFFSET(0x124A67D0)

inline static constexpr unsigned int Class_1_555CF3ADB8FE92C8_TypeDefinitionIndex = 56655;

class Class_1_555CF3ADB8FE92C8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B7044A592B17773_1*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B7044A592B17773*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CF3ADB8FE92C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CF3ADB8FE92C8_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CF3ADB8FE92C8_DISPOSE_OFFSET))(this);
	}

	::Class_1_1B7044A592B17773* Method_1_74BA6D49D35A86C1(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_555CF3ADB8FE92C8_METHOD_1_74BA6D49D35A86C1_OFFSET))(this, a1);
	}

	::Class_1_1B7044A592B17773_1* Method_1_9477D2E83B0C8EDA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_1B7044A592B17773_1*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_555CF3ADB8FE92C8_METHOD_1_9477D2E83B0C8EDA_OFFSET))(this, a1, a2);
	}
};
