#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_31B7AED3AFE3150D;
class Class_1_48D56DACBE4271BC;
class Class_1_D068D24E09EADB7D;
class Class_1_F10652F2FD52673B;
class Class_2_B994F46AE011E30F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_3_CA5CFC731672CF57_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x102E89D0)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x102E9B70)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x102E9A90)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_4A0D719D9B6F0E01_OFFSET UNITYSDK_OFFSET(0x102E8C80)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x102E9A00)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x102E9540)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_ACA274F9A9FB6060_OFFSET UNITYSDK_OFFSET(0x102E8690)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x102E8C00)
#define CLASS_3_CA5CFC731672CF57_METHOD_3_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x102E8130)
#define CLASS_3_CA5CFC731672CF57_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x102E7940)
#define CLASS_3_CA5CFC731672CF57__CCTOR_OFFSET UNITYSDK_OFFSET(0x102E8A20)
#define CLASS_3_CA5CFC731672CF57__CTOR_OFFSET UNITYSDK_OFFSET(0x102E8AA0)

inline static constexpr unsigned int Class_3_CA5CFC731672CF57_TypeDefinitionIndex = 81778;

class Class_3_CA5CFC731672CF57 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0x81; // 0x0
	::Class_2_B994F46AE011E30F* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* Field_3_14; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_6; // 0x58
	::Class_1_F10652F2FD52673B* Field_3_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_9; // 0x68
	::Class_1_48D56DACBE4271BC* Field_3_11; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D068D24E09EADB7D*>* Field_3_1; // 0x78
	::Class_1_31B7AED3AFE3150D* Field_3_10; // 0x80
	::System::Action* Field_3_5; // 0x88
	::System::Boolean Field_3_8; // 0x90
	::System::UInt32 Field_3_7; // 0x94
	::System::Single Field_3_15; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_F773D945760BF918_OFFSET))(this, a1);
	}

	static ::Class_3_CA5CFC731672CF57* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CA5CFC731672CF57*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_4A0D719D9B6F0E01(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_4A0D719D9B6F0E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_3_ACA274F9A9FB6060(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57_METHOD_3_ACA274F9A9FB6060_OFFSET))(this, a1);
	}
};
