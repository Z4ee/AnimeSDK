#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockFinalWaypointReason.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13836A50)
#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_724AB3A0342E50A7_OFFSET UNITYSDK_OFFSET(0x13836AB0)
#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_8316E95A151A0D82_OFFSET UNITYSDK_OFFSET(0x13836B20)
#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13836E30)
#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_C208BD9EBDBE4145_OFFSET UNITYSDK_OFFSET(0x13836CB0)
#define CLASS_1_71B60F0D3C0D6D23_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x13836920)
#define CLASS_1_71B60F0D3C0D6D23__CTOR_OFFSET UNITYSDK_OFFSET(0x138369D0)

inline static constexpr unsigned int Class_1_71B60F0D3C0D6D23_TypeDefinitionIndex = 60033;

class Class_1_71B60F0D3C0D6D23 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LockFinalWaypointReason, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23__CTOR_OFFSET))(this);
	}

	static ::Class_1_71B60F0D3C0D6D23* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_71B60F0D3C0D6D23*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_724AB3A0342E50A7(::System::Boolean a1, ::RPG::Client::LockFinalWaypointReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_724AB3A0342E50A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_8316E95A151A0D82(::RPG::Client::LockFinalWaypointReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_8316E95A151A0D82_OFFSET))(this, a1);
	}

	::System::Void Method_1_C208BD9EBDBE4145(::RPG::Client::LockFinalWaypointReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + CLASS_1_71B60F0D3C0D6D23_METHOD_1_C208BD9EBDBE4145_OFFSET))(this, a1);
	}
};
