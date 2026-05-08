#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EACAEE824A08C310_METHOD_2_5FEDFF457199FDFB_OFFSET UNITYSDK_OFFSET(0x146405C0)
#define CLASS_2_EACAEE824A08C310_METHOD_2_65A14A6A92AD9BE7_OFFSET UNITYSDK_OFFSET(0x146403D0)
#define CLASS_2_EACAEE824A08C310_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14640340)
#define CLASS_2_EACAEE824A08C310_ONSTART_OFFSET UNITYSDK_OFFSET(0x14640380)
#define CLASS_2_EACAEE824A08C310__CTOR_OFFSET UNITYSDK_OFFSET(0x146403C0)

inline static constexpr unsigned int Class_2_EACAEE824A08C310_TypeDefinitionIndex = 52936;

class Class_2_EACAEE824A08C310 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACAEE824A08C310__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACAEE824A08C310_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EACAEE824A08C310_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_65A14A6A92AD9BE7(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_EACAEE824A08C310_METHOD_2_65A14A6A92AD9BE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FEDFF457199FDFB(::System::UInt32 a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_EACAEE824A08C310_METHOD_2_5FEDFF457199FDFB_OFFSET))(this, a1, a2);
	}
};
