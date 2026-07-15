#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_58;
class Class_1_FCCDF140CF903A40;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3F1B052ED1E374F_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x16F689F0)
#define CLASS_1_B3F1B052ED1E374F_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x16F689D0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_0524E82EB86F562E_OFFSET UNITYSDK_OFFSET(0x16F682D0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x16F687B0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x16F67A50)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_46691424347689FC_OFFSET UNITYSDK_OFFSET(0x16F688D0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_918AB612278D9CC7_OFFSET UNITYSDK_OFFSET(0x16F68810)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_98D9C89E79A3D109_OFFSET UNITYSDK_OFFSET(0x16F67DE0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_A3690E3EECDBDC43_OFFSET UNITYSDK_OFFSET(0x16F67CC0)
#define CLASS_1_B3F1B052ED1E374F_METHOD_1_F53E33AAEE66C5E3_OFFSET UNITYSDK_OFFSET(0x16F68940)
#define CLASS_1_B3F1B052ED1E374F_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x16F68A00)
#define CLASS_1_B3F1B052ED1E374F_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x16F689E0)
#define CLASS_1_B3F1B052ED1E374F__CTOR_OFFSET UNITYSDK_OFFSET(0x16F68A10)

inline static constexpr unsigned int Class_1_B3F1B052ED1E374F_TypeDefinitionIndex = 63664;

class Class_1_B3F1B052ED1E374F : public ::System::Object
{
public:
	::System::UInt32 _Ratio_k__BackingField; // 0x10
	::System::UInt32 _FinishCount_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_FCCDF140CF903A40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCCDF140CF903A40*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_963E317C37FB5E9A_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_58*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_918AB612278D9CC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_918AB612278D9CC7_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_A3690E3EECDBDC43(::Class_1_FCCDF140CF903A40* a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_FCCDF140CF903A40*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_A3690E3EECDBDC43_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_98D9C89E79A3D109(::Class_1_FCCDF140CF903A40* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_FCCDF140CF903A40*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_98D9C89E79A3D109_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_0524E82EB86F562E(::Class_1_FCCDF140CF903A40* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_1_FCCDF140CF903A40*))((::PBYTE)hIl2Cpp + CLASS_1_B3F1B052ED1E374F_METHOD_1_0524E82EB86F562E_OFFSET))(this, a1);
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
