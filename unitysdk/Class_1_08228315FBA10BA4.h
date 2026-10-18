#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_508BB2775E8F8A7D;

#define CLASS_1_08228315FBA10BA4_GET_ERRORPACKET_OFFSET UNITYSDK_OFFSET(0xCC82AA0)
#define CLASS_1_08228315FBA10BA4_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xCC82A90)
#define CLASS_1_08228315FBA10BA4_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xCC82AB0)
#define CLASS_1_08228315FBA10BA4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCC82AC0)
#define CLASS_1_08228315FBA10BA4_METHOD_1_696DE997CE55FF74_OFFSET UNITYSDK_OFFSET(0xCC82BB0)
#define CLASS_1_08228315FBA10BA4_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0xCC82B20)
#define CLASS_1_08228315FBA10BA4__CTOR_OFFSET UNITYSDK_OFFSET(0xCC82BA0)

inline static constexpr unsigned int Class_1_08228315FBA10BA4_TypeDefinitionIndex = 80178;

class Class_1_08228315FBA10BA4 : public ::System::Object
{
public:
	::System::Object* _ErrorPacket_k__BackingField; // 0x10
	::Class_1_508BB2775E8F8A7D* _SettleResult_k__BackingField; // 0x18
	::System::UInt32 _Retcode_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::Object* a2, ::Class_1_508BB2775E8F8A7D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::Class_1_508BB2775E8F8A7D*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_Retcode()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_GET_RETCODE_OFFSET))(this);
	}

	::System::Object* get_ErrorPacket()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_GET_ERRORPACKET_OFFSET))(this);
	}

	::Class_1_508BB2775E8F8A7D* get_SettleResult()
	{
		return ((::Class_1_508BB2775E8F8A7D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_GET_SETTLERESULT_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_08228315FBA10BA4* Method_1_FAB076F9C2EDE3BE(::Class_1_508BB2775E8F8A7D* a1)
	{
		return ((::Class_1_08228315FBA10BA4*(*)(::Class_1_508BB2775E8F8A7D*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	static ::Class_1_08228315FBA10BA4* Method_1_696DE997CE55FF74(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::Class_1_08228315FBA10BA4*(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_08228315FBA10BA4_METHOD_1_696DE997CE55FF74_OFFSET))(a1, a2);
	}
};
