#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1652F9EBC7E914D9;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define CLASS_1_CFE8E4989832E4BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DC8A00)
#define CLASS_1_CFE8E4989832E4BB_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x15DC8720)
#define CLASS_1_CFE8E4989832E4BB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x15DC8B00)
#define CLASS_1_CFE8E4989832E4BB_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0x15DC85E0)
#define CLASS_1_CFE8E4989832E4BB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8620)

inline static constexpr unsigned int Class_1_CFE8E4989832E4BB_TypeDefinitionIndex = 79561;

class Class_1_CFE8E4989832E4BB : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* KDDCFJMGFIA; // 0x10
	::Class_1_1652F9EBC7E914D9* JOKBAPFCJFM; // 0x18

	::System::Void _ctor(::Class_1_1652F9EBC7E914D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB__CTOR_OFFSET))(this, a1);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB_METHOD_1_5176DC743E478510_OFFSET))(this);
	}
};
