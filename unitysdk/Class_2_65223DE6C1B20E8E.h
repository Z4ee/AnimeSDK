#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_65223DE6C1B20E8E_IdleLiveBGMArea.h"
#include "unitysdk/Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_0_16E4307DCC419505_1193;
class Class_1_4CFEF021C34E7902;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_65223DE6C1B20E8E_METHOD_2_5CC9EE7E4267D3C9_OFFSET UNITYSDK_OFFSET(0x149D2C90)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_1_OFFSET UNITYSDK_OFFSET(0x149D48B0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_2_OFFSET UNITYSDK_OFFSET(0x149D4C50)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_3_OFFSET UNITYSDK_OFFSET(0x149D4CA0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_4_OFFSET UNITYSDK_OFFSET(0x149D4CF0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x149D45A0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_88198002BCF673DF_OFFSET UNITYSDK_OFFSET(0x149D41E0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x149D4980)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_C9BAC1A033E84CFD_OFFSET UNITYSDK_OFFSET(0x149D45F0)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x149D2E70)
#define CLASS_2_65223DE6C1B20E8E_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x149D4390)
#define CLASS_2_65223DE6C1B20E8E_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x149D4900)
#define CLASS_2_65223DE6C1B20E8E__CTOR_OFFSET UNITYSDK_OFFSET(0x149D2B30)
#define CLASS_2_65223DE6C1B20E8E__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x149D4AD0)

inline static constexpr unsigned int Class_2_65223DE6C1B20E8E_TypeDefinitionIndex = 71660;

class Class_2_65223DE6C1B20E8E : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_4CFEF021C34E7902* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1193*>*>* Field_2_2; // 0x30
	::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea Field_2_3; // 0x38

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_65223DE6C1B20E8E* Method_2_5CC9EE7E4267D3C9(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_65223DE6C1B20E8E*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_5CC9EE7E4267D3C9_OFFSET))(a1);
	}

	::System::Void Method_2_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_D33218A492B26449_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_1_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9BAC1A033E84CFD(::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_C9BAC1A033E84CFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E21A50FD382EB63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_9E21A50FD382EB63_OFFSET))(this, a1);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E__ONDESTROYED_OFFSET))(this);
	}

	::System::Void Method_2_88198002BCF673DF(::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea a1, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea a2, ::Il2CppArray<::Class_0_16E4307DCC419505_1193*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea, ::Il2CppArray<::Class_0_16E4307DCC419505_1193*>*))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_88198002BCF673DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_61929A3103595552_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_2_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_3_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_METHOD_2_61929A3103595552_4_OFFSET))(this);
	}
};
