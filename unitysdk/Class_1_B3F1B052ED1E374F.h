#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_62B9A1CE3CDEBC2B;
class Class_1_963E317C37FB5E9A_60;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3F1B052ED1E374F_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x199885C0)
#define CLASS_1_B3F1B052ED1E374F_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x199885A0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_0524E82EB86F562E_OFFSET UNITYSDK_OFFSET(0x19987E30)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x19988310)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x199875B0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_46691424347689FC_OFFSET UNITYSDK_OFFSET(0x199884A0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_75D1D80E6A514E21_OFFSET UNITYSDK_OFFSET(0x19988370)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_98D9C89E79A3D109_OFFSET UNITYSDK_OFFSET(0x19987940)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_A3690E3EECDBDC43_OFFSET UNITYSDK_OFFSET(0x19987820)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_F53E33AAEE66C5E3_OFFSET UNITYSDK_OFFSET(0x19988510)
#define CLASS_1_B3F1B052ED1E374F_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x199885D0)
#define CLASS_1_B3F1B052ED1E374F_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x199885B0)
#define CLASS_1_B3F1B052ED1E374F__CTOR_OFFSET UNITYSDK_OFFSET(0x199885E0)

inline static constexpr unsigned int Class_1_B3F1B052ED1E374F_TypeDefinitionIndex = 66649;

class Class_1_B3F1B052ED1E374F : public ::System::Object
{
public:
	::System::UInt32 _FinishCount_k__BackingField; // 0x10
	::System::UInt32 _Ratio_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_62B9A1CE3CDEBC2B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_62B9A1CE3CDEBC2B*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_963E317C37FB5E9A_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_60*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_75D1D80E6A514E21(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_75D1D80E6A514E21_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_A3690E3EECDBDC43(::Class_1_62B9A1CE3CDEBC2B* a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_62B9A1CE3CDEBC2B*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_A3690E3EECDBDC43_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_98D9C89E79A3D109(::Class_1_62B9A1CE3CDEBC2B* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_62B9A1CE3CDEBC2B*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_98D9C89E79A3D109_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_0524E82EB86F562E(::Class_1_62B9A1CE3CDEBC2B* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_1_62B9A1CE3CDEBC2B*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_0524E82EB86F562E_OFFSET))(this, a1);
	}

	::System::UInt32 get_Ratio()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_SET_RATIO_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinishCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_SET_FINISHCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::PlanetFesModule* Method_1_F53E33AAEE66C5E3()
	{
		return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_F53E33AAEE66C5E3_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_46691424347689FC()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_46691424347689FC_OFFSET))(this);
	}
};
