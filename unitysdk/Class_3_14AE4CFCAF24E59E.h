#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_C4CECDD2BFB0A914.h"
#include "unitysdk/Struct_2_C4A9148D1D50B09A.h"

class Class_0_16E4307DCC419505_187;
class Class_1_449B1BB2E3AA2D13;
class Class_2_208CC9941471731A_1185;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_14AE4CFCAF24E59E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x155857D0)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_4ECDFE53EE41D31A_OFFSET UNITYSDK_OFFSET(0x15585D50)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0x15586170)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_6185122074BBC9C5_OFFSET UNITYSDK_OFFSET(0x15585C30)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x15585990)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15585AE0)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15585DE0)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x15585A80)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_F0F3151B754D3D59_OFFSET UNITYSDK_OFFSET(0x15585B50)
#define CLASS_3_14AE4CFCAF24E59E_METHOD_3_FB0F645BDB222E95_OFFSET UNITYSDK_OFFSET(0x15585E70)
#define CLASS_3_14AE4CFCAF24E59E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15585700)
#define CLASS_3_14AE4CFCAF24E59E__CCTOR_OFFSET UNITYSDK_OFFSET(0x15585820)
#define CLASS_3_14AE4CFCAF24E59E__CTOR_OFFSET UNITYSDK_OFFSET(0x155858A0)

inline static constexpr unsigned int Class_3_14AE4CFCAF24E59E_TypeDefinitionIndex = 40655;

class Class_3_14AE4CFCAF24E59E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xCA; // 0x0
	::Class_1_449B1BB2E3AA2D13* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_C4A9148D1D50B09A>* Field_3_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_0; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_F0F3151B754D3D59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_F0F3151B754D3D59_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_6185122074BBC9C5(::System::Int32 a1, ::Class_0_16E4307DCC419505_187* a2, ::Enum_3_C4CECDD2BFB0A914 a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_187*, ::Enum_3_C4CECDD2BFB0A914))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_6185122074BBC9C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_C4A9148D1D50B09A>* Method_3_4ECDFE53EE41D31A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_C4A9148D1D50B09A>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_4ECDFE53EE41D31A_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_FB0F645BDB222E95(::Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1185*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1185*>*&))((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_FB0F645BDB222E95_OFFSET))(this, a1, a2);
	}

	static ::Class_3_14AE4CFCAF24E59E* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_14AE4CFCAF24E59E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_14AE4CFCAF24E59E_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}
};
