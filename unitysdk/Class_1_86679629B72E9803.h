#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_20.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_57;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_86679629B72E9803_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156676C0)
#define CLASS_1_86679629B72E9803_METHOD_1_4E309606BB74969D_OFFSET UNITYSDK_OFFSET(0x156678C0)
#define CLASS_1_86679629B72E9803_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x15667760)
#define CLASS_1_86679629B72E9803__CTOR_OFFSET UNITYSDK_OFFSET(0x156679B0)

inline static constexpr unsigned int Class_1_86679629B72E9803_TypeDefinitionIndex = 63632;

class Class_1_86679629B72E9803 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_ED790DAC948A65A9_20>* CJKMCPJEDKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86679629B72E9803__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86679629B72E9803_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_1CBA230307F9C289_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_57*))((::PBYTE)hIl2Cpp + CLASS_1_86679629B72E9803_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_20 Method_1_4E309606BB74969D(::System::UInt32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_20(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86679629B72E9803_METHOD_1_4E309606BB74969D_OFFSET))(this, a1);
	}
};
