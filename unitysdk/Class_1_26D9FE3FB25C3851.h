#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26D9FE3FB25C3851_RF_ReplicatedComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/AuthorityType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationDormancy.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationNetMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_0_16E4307DCC419505_26;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_26D9FE3FB25C3851_CLEAR_OFFSET UNITYSDK_OFFSET(0x18AE8C80)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18AE8E50)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18AE8E40)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x18AB3150)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x18AB3100)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x18AE8D70)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18AE9290)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_6285BDB5F710BE1B_OFFSET UNITYSDK_OFFSET(0x18AE8E30)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_73A4DEDC9A9B612C_OFFSET UNITYSDK_OFFSET(0x18AB30B0)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_9BF31B5B7E646E29_OFFSET UNITYSDK_OFFSET(0x18AE8E60)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_A5FB11C82FC95330_OFFSET UNITYSDK_OFFSET(0x18AE9090)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18AE8E20)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18AE8DE0)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x18AB3060)
#define CLASS_1_26D9FE3FB25C3851_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18AE8DD0)
#define CLASS_1_26D9FE3FB25C3851__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE92E0)

inline static constexpr unsigned int Class_1_26D9FE3FB25C3851_TypeDefinitionIndex = 34624;

class Class_1_26D9FE3FB25C3851 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::Client::LittleGameShare::ReplicationDormancy Field_1_4; // 0x28
	::RPG::Client::LittleGameShare::ReplicationNetMode Field_1_5; // 0x29
	::Class_1_26D9FE3FB25C3851_RF_ReplicatedComponent Field_1_6; // 0x2A
	::RPG::Client::LittleGameShare::AuthorityType Field_1_7; // 0x2B
	::System::UInt32 Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::AuthorityType Method_1_6285BDB5F710BE1B()
	{
		return ((::RPG::Client::LittleGameShare::AuthorityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_6285BDB5F710BE1B_OFFSET))(this);
	}

	::System::Void Method_1_73A4DEDC9A9B612C(::RPG::Client::LittleGameShare::AuthorityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::AuthorityType))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_73A4DEDC9A9B612C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BF31B5B7E646E29(::Class_0_16E4307DCC419505_25* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_9BF31B5B7E646E29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5FB11C82FC95330(::Class_0_16E4307DCC419505_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_A5FB11C82FC95330_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D9FE3FB25C3851_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
