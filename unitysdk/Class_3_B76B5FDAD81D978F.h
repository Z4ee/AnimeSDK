#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B76B5FDAD81D978F_METHOD_3_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x15045AC0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x15046590)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x15045780)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_367853F8CE344E8D_OFFSET UNITYSDK_OFFSET(0x15045F10)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x150431D0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_4B64A2D6BC7E54E0_OFFSET UNITYSDK_OFFSET(0x15045CD0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15043640)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x15043CA0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_5C872825606F2139_OFFSET UNITYSDK_OFFSET(0x15046280)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_61ECA8AAB5E6D50A_OFFSET UNITYSDK_OFFSET(0x15045040)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x15046080)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0x15043850)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_6BFE4B55A347D112_OFFSET UNITYSDK_OFFSET(0x15045160)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_7EEBD5CFECCBC45E_OFFSET UNITYSDK_OFFSET(0x15043230)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_7F3E5369B1A9C7A0_OFFSET UNITYSDK_OFFSET(0x15045320)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x150457E0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x15045CC0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x150463D0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15045530)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_8576E6C45760CCD3_OFFSET UNITYSDK_OFFSET(0x15044880)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_8898ED17E5A916B1_OFFSET UNITYSDK_OFFSET(0x15046150)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_8B995E6B01D52061_OFFSET UNITYSDK_OFFSET(0x15044B60)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x15045540)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15045650)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x15044EE0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_B92B469214801A87_OFFSET UNITYSDK_OFFSET(0x150462F0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x15043390)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_BD694E9D49BE35E0_OFFSET UNITYSDK_OFFSET(0x150468C0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x15044900)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x15046860)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x150467D0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15046630)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_D57B9E42F48D14D4_OFFSET UNITYSDK_OFFSET(0x150457F0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_D681E6F196C9651B_OFFSET UNITYSDK_OFFSET(0x150463E0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_DA4379172C9CA18E_OFFSET UNITYSDK_OFFSET(0x15045B70)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x15046770)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15044AE0)
#define CLASS_3_B76B5FDAD81D978F_METHOD_3_F8A1017735AD2E41_OFFSET UNITYSDK_OFFSET(0x150453E0)
#define CLASS_3_B76B5FDAD81D978F_ONATTACH_OFFSET UNITYSDK_OFFSET(0x15043080)
#define CLASS_3_B76B5FDAD81D978F_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x150435A0)
#define CLASS_3_B76B5FDAD81D978F_ONENABLE_OFFSET UNITYSDK_OFFSET(0x150430C0)
#define CLASS_3_B76B5FDAD81D978F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15043970)
#define CLASS_3_B76B5FDAD81D978F_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x15043BD0)
#define CLASS_3_B76B5FDAD81D978F__CCTOR_OFFSET UNITYSDK_OFFSET(0x150439D0)
#define CLASS_3_B76B5FDAD81D978F__CTOR_OFFSET UNITYSDK_OFFSET(0x15044840)

inline static constexpr unsigned int Class_3_B76B5FDAD81D978F_TypeDefinitionIndex = 89728;

class Class_3_B76B5FDAD81D978F : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_B76B5FDAD81D978F*>
{
public:
	static ::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>** StaticGet_Field_3_10()
	{
		return (::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x4E170);
	}
	static ::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>** StaticGet_Field_3_9()
	{
		return (::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x4E178);
	}
	static ::System::Int32* StaticGet_Field_3_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12000);
	}
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12004);
	}
	static ::System::Int32* StaticGet_Field_3_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12008);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x1200C);
	}
	static ::System::Boolean* StaticGet_Field_3_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12010);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12011);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_3_5()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B76B5FDAD81D978F_TypeDefinitionIndex)->GetStaticField(0x12014);
	}
	// static const ::System::Int32 Field_3_3 = 0x7FFFFFFF; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	::System::String* Field_3_19; // 0x20
	::MoleMole::EntityHandle Field_3_18; // 0x28
	::System::Int32 Field_3_14; // 0x38
	::System::Int32 Field_3_8; // 0x3C
	::Enum_3_4608E37A1B3D374A_28 Field_3_13; // 0x40
	::System::Boolean Field_3_12; // 0x44
	::System::Boolean Field_3_15; // 0x45

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_3_8576E6C45760CCD3(::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B a1, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B a2)
	{
		return ((::System::Int32(*)(::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_8576E6C45760CCD3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_C293B8F3ADB851B9_OFFSET))();
	}

	static ::System::Void Method_3_8B995E6B01D52061(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_8B995E6B01D52061_OFFSET))(a1);
	}

	static ::System::Void Method_3_F8A1017735AD2E41(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>* a1, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>*, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_F8A1017735AD2E41_OFFSET))(a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}

	static ::System::Single Method_3_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_3150507749BCEAEC_OFFSET))();
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	static ::System::Void Method_3_BB881F05E41D3A04()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_BB881F05E41D3A04_OFFSET))();
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	static ::System::Int32 Method_3_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_09A39B89545FE101_OFFSET))();
	}

	static ::System::Void Method_3_B387E1AED8A8F880()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_B387E1AED8A8F880_OFFSET))();
	}

	static ::System::Int32 Method_3_4B64A2D6BC7E54E0(::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B a1, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Int32(*)(::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B, ::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_4B64A2D6BC7E54E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7F3E5369B1A9C7A0(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_7F3E5369B1A9C7A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_64F0C85A431FBD69_OFFSET))();
	}

	static ::System::Boolean Method_3_367853F8CE344E8D(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_367853F8CE344E8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8898ED17E5A916B1(::MoleMole::EntityHandle a1, ::MoleMole::EntityHandle a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_8898ED17E5A916B1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_3_5C872825606F2139(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_5C872825606F2139_OFFSET))(a1);
	}

	static ::System::Void Method_3_B92B469214801A87(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>* a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_B92B469214801A87_OFFSET))(a1, a2);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_678A641D7D5163B2_OFFSET))(this);
	}

	::System::Void Method_3_D681E6F196C9651B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_D681E6F196C9651B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0A9532FAEAAC0B12(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_0A9532FAEAAC0B12_OFFSET))(a1);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	static ::System::Void Method_3_6BFE4B55A347D112(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_6BFE4B55A347D112_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DA4379172C9CA18E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_DA4379172C9CA18E_OFFSET))();
	}

	static ::System::Int32 Method_3_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_B76B5FDAD81D978F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_B76B5FDAD81D978F*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_CB613A5EF970C11B_OFFSET))(a1);
	}

	static ::System::Void Method_3_D57B9E42F48D14D4(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_B76B5FDAD81D978F_Struct_2_BAFFE74ADFF50B2B>*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_D57B9E42F48D14D4_OFFSET))(a1);
	}

	::System::Void Method_3_7EEBD5CFECCBC45E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_7EEBD5CFECCBC45E_OFFSET))(this);
	}

	::System::Void Method_3_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Boolean Method_3_61ECA8AAB5E6D50A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_61ECA8AAB5E6D50A_OFFSET))(a1);
	}

	static ::System::Void Method_3_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_F730968E2645E14B_OFFSET))();
	}

	static ::System::Boolean Method_3_BD694E9D49BE35E0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_B76B5FDAD81D978F_METHOD_3_BD694E9D49BE35E0_OFFSET))();
	}
};
