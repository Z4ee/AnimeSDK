#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_17;
class Class_1_C8F1FDB5FADB7DB2;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46AC29DEBE45F8A8_1_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x88238C0)
#define CLASS_1_46AC29DEBE45F8A8_1_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x88238A0)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x8823740)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_18E996F3C72A73F1_OFFSET UNITYSDK_OFFSET(0x8823090)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x8822CD0)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_644EA91E47FBA8F7_OFFSET UNITYSDK_OFFSET(0x8823840)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_918AB612278D9CC7_OFFSET UNITYSDK_OFFSET(0x88237A0)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_A3690E3EECDBDC43_OFFSET UNITYSDK_OFFSET(0x8822F70)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_AEFC7EFD0BACA947_OFFSET UNITYSDK_OFFSET(0x88233E0)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_BB6263DF2BB2626E_OFFSET UNITYSDK_OFFSET(0x88238E0)
#define CLASS_1_46AC29DEBE45F8A8_1_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x88238D0)
#define CLASS_1_46AC29DEBE45F8A8_1_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x88238B0)
#define CLASS_1_46AC29DEBE45F8A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8823910)

inline static constexpr unsigned int Class_1_46AC29DEBE45F8A8_1_TypeDefinitionIndex = 54211;

class Class_1_46AC29DEBE45F8A8_1 : public ::System::Object
{
public:
	::System::UInt32 _Ratio_k__BackingField; // 0x10
	::System::UInt32 _FinishCount_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_C8F1FDB5FADB7DB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C8F1FDB5FADB7DB2*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_4DF3292AA5AADAD0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_17*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_918AB612278D9CC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_918AB612278D9CC7_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_A3690E3EECDBDC43(::Class_1_C8F1FDB5FADB7DB2* a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_C8F1FDB5FADB7DB2*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_A3690E3EECDBDC43_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_18E996F3C72A73F1(::Class_1_C8F1FDB5FADB7DB2* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_C8F1FDB5FADB7DB2*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_18E996F3C72A73F1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_AEFC7EFD0BACA947(::Class_1_C8F1FDB5FADB7DB2* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_1_C8F1FDB5FADB7DB2*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_AEFC7EFD0BACA947_OFFSET))(this, a1);
	}

	::System::UInt32 get_Ratio()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_SET_RATIO_OFFSET))(this, value);
	}

	::System::UInt32 get_FinishCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::PlanetFesModule* Method_1_644EA91E47FBA8F7()
	{
		return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_644EA91E47FBA8F7_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_BB6263DF2BB2626E()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_BB6263DF2BB2626E_OFFSET))(this);
	}
};
