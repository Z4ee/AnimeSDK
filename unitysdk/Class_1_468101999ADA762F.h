#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileEntryInfo.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Enum_3_13BF739DB2F051E5.h"
#include "unitysdk/Struct_2_57103353008EE989.h"
#include "unitysdk/System/Object.h"

class Class_1_7127353CA91AF50A;
class Class_1_929E686C2F593C85;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class Thread; }

#define CLASS_1_468101999ADA762F_METHOD_1_1CD2062AAE95839D_OFFSET UNITYSDK_OFFSET(0x1ABB60F0)
#define CLASS_1_468101999ADA762F_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1ABB6510)
#define CLASS_1_468101999ADA762F_METHOD_1_2D7A6D8038C9AFB9_OFFSET UNITYSDK_OFFSET(0x1ABB8620)
#define CLASS_1_468101999ADA762F_METHOD_1_2FC7C69F1061D462_OFFSET UNITYSDK_OFFSET(0x1ABB7FE0)
#define CLASS_1_468101999ADA762F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1ABB7D10)
#define CLASS_1_468101999ADA762F_METHOD_1_49756A6E49179628_OFFSET UNITYSDK_OFFSET(0x1ABB7980)
#define CLASS_1_468101999ADA762F_METHOD_1_4E18D79806ACDBA5_OFFSET UNITYSDK_OFFSET(0x1ABB8070)
#define CLASS_1_468101999ADA762F_METHOD_1_5B56E8EABFB06232_OFFSET UNITYSDK_OFFSET(0x1ABB6FE0)
#define CLASS_1_468101999ADA762F_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x1ABB6D40)
#define CLASS_1_468101999ADA762F_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x1ABB96F0)
#define CLASS_1_468101999ADA762F_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x1ABB9540)
#define CLASS_1_468101999ADA762F_METHOD_1_86DF5F16C42F85C0_OFFSET UNITYSDK_OFFSET(0x1ABB6800)
#define CLASS_1_468101999ADA762F_METHOD_1_88919237FB39EFBB_OFFSET UNITYSDK_OFFSET(0x1ABAFF90)
#define CLASS_1_468101999ADA762F_METHOD_1_8ABDA34A73A8C9E3_OFFSET UNITYSDK_OFFSET(0x1ABB96D0)
#define CLASS_1_468101999ADA762F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1ABB6780)
#define CLASS_1_468101999ADA762F_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1ABB7D60)
#define CLASS_1_468101999ADA762F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1ABB71E0)
#define CLASS_1_468101999ADA762F_METHOD_1_BC51E9125FF9E0A7_OFFSET UNITYSDK_OFFSET(0x1ABB5740)
#define CLASS_1_468101999ADA762F_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x1ABB93A0)
#define CLASS_1_468101999ADA762F_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1ABB6270)
#define CLASS_1_468101999ADA762F_METHOD_1_D37C77CA65DB1760_OFFSET UNITYSDK_OFFSET(0x1ABB5E70)
#define CLASS_1_468101999ADA762F_METHOD_1_D5C7C4507DC3349F_OFFSET UNITYSDK_OFFSET(0x1ABB9020)
#define CLASS_1_468101999ADA762F_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x1ABB60A0)
#define CLASS_1_468101999ADA762F_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1ABB7470)
#define CLASS_1_468101999ADA762F_METHOD_1_DC37DAD1FA9D825F_OFFSET UNITYSDK_OFFSET(0x1ABB8920)
#define CLASS_1_468101999ADA762F_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1ABB98F0)
#define CLASS_1_468101999ADA762F_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1ABB7290)
#define CLASS_1_468101999ADA762F__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB53A0)

inline static constexpr unsigned int Class_1_468101999ADA762F_TypeDefinitionIndex = 32383;

class Class_1_468101999ADA762F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_57103353008EE989>* Field_1_16; // 0x10
	::System::Collections::Concurrent::ConcurrentQueue_1<::Struct_2_57103353008EE989>* Field_1_8; // 0x18
	::System::Threading::Thread* Field_1_3; // 0x20
	::System::Threading::AutoResetEvent* Field_1_7; // 0x28
	::System::Collections::Concurrent::ConcurrentDictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::System::Int64>* Field_1_14; // 0x30
	::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int64, ::Class_1_929E686C2F593C85*>* Field_1_12; // 0x38
	::System::Collections::Generic::List_1<::Class_1_929E686C2F593C85*>* Field_1_15; // 0x40
	::System::Threading::ManualResetEvent* Field_1_4; // 0x48
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_929E686C2F593C85*>* Field_1_11; // 0x50
	::Class_1_7127353CA91AF50A* Field_1_10; // 0x58
	::System::Threading::AutoResetEvent* Field_1_5; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int64>* Field_1_17; // 0x68
	::System::Threading::AutoResetEvent* Field_1_6; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_57103353008EE989>* Field_1_9; // 0x78
	::System::Collections::Concurrent::ConcurrentDictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::System::Int64>* Field_1_13; // 0x80
	::System::Boolean Field_1_0; // 0x88
	::System::Boolean Field_1_2; // 0x89
	::System::Boolean Field_1_1; // 0x8A
	::System::Int64 Field_1_18; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_BC51E9125FF9E0A7(::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo a1, ::Enum_3_13BF739DB2F051E5 a2)
	{
		return ((::System::Int64(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_BC51E9125FF9E0A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_929E686C2F593C85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E686C2F593C85*))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_86DF5F16C42F85C0(::System::Boolean a1, ::System::Boolean a2, ::System::Double a3, ::System::Collections::Generic::IEnumerable_1<::System::Int64>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Double, ::System::Collections::Generic::IEnumerable_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_86DF5F16C42F85C0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5B56E8EABFB06232(::System::Collections::Generic::IEnumerable_1<::System::Int64>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_5B56E8EABFB06232_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_49756A6E49179628(::Class_1_929E686C2F593C85* a1, ::Enum_3_13BF739DB2F051E5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E686C2F593C85*, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_49756A6E49179628_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Int32 Method_1_4E18D79806ACDBA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_4E18D79806ACDBA5_OFFSET))(this);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_929E686C2F593C85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E686C2F593C85*))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D37C77CA65DB1760(::Struct_2_57103353008EE989 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_57103353008EE989))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_D37C77CA65DB1760_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D7A6D8038C9AFB9(::Struct_2_57103353008EE989 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_57103353008EE989))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_2D7A6D8038C9AFB9_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_DC37DAD1FA9D825F(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Enum_3_13BF739DB2F051E5 a2)
	{
		return ((::System::Int64(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Enum_3_13BF739DB2F051E5))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_DC37DAD1FA9D825F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2FC7C69F1061D462(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_2FC7C69F1061D462_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D5C7C4507DC3349F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_D5C7C4507DC3349F_OFFSET))(this);
	}

	::System::Void Method_1_88919237FB39EFBB(::System::Collections::Generic::IEnumerable_1<::System::Int64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_88919237FB39EFBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_1_1CD2062AAE95839D(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_1CD2062AAE95839D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8ABDA34A73A8C9E3(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_8ABDA34A73A8C9E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468101999ADA762F_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
