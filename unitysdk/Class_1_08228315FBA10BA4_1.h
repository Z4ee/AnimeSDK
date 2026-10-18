#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BC77CEFB451E276;

#define CLASS_1_08228315FBA10BA4_1_GET_ERRORPACKET_OFFSET UNITYSDK_OFFSET(0xB8C3770)
#define CLASS_1_08228315FBA10BA4_1_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xB8C3760)
#define CLASS_1_08228315FBA10BA4_1_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB8C3780)
#define CLASS_1_08228315FBA10BA4_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8C3790)
#define CLASS_1_08228315FBA10BA4_1_METHOD_1_696DE997CE55FF74_OFFSET UNITYSDK_OFFSET(0xB8C3880)
#define CLASS_1_08228315FBA10BA4_1_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0xB8C37F0)
#define CLASS_1_08228315FBA10BA4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C3870)

inline static constexpr unsigned int Class_1_08228315FBA10BA4_1_TypeDefinitionIndex = 80180;

class Class_1_08228315FBA10BA4_1 : public ::System::Object
{
public:
	::Class_1_7BC77CEFB451E276* _SettleResult_k__BackingField; // 0x10
	::System::Object* _ErrorPacket_k__BackingField; // 0x18
	::System::UInt32 _Retcode_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::Object* a2, ::Class_1_7BC77CEFB451E276* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::Class_1_7BC77CEFB451E276*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_Retcode()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_GET_RETCODE_OFFSET))(this);
	}

	::System::Object* get_ErrorPacket()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_GET_ERRORPACKET_OFFSET))(this);
	}

	::Class_1_7BC77CEFB451E276* get_SettleResult()
	{
		return ((::Class_1_7BC77CEFB451E276*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_GET_SETTLERESULT_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_08228315FBA10BA4_1* Method_1_FAB076F9C2EDE3BE(::Class_1_7BC77CEFB451E276* a1)
	{
		return ((::Class_1_08228315FBA10BA4_1*(*)(::Class_1_7BC77CEFB451E276*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	static ::Class_1_08228315FBA10BA4_1* Method_1_696DE997CE55FF74(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::Class_1_08228315FBA10BA4_1*(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_1_METHOD_1_696DE997CE55FF74_OFFSET))(a1, a2);
	}
};
