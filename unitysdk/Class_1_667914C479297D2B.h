#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
namespace MoleMole { class AbilityRegistryInfo; }
namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_667914C479297D2B_METHOD_1_02A1CB6039A9E15F_OFFSET UNITYSDK_OFFSET(0x17F45CA0)
#define CLASS_1_667914C479297D2B_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x17F45D30)
#define CLASS_1_667914C479297D2B_METHOD_1_0D637A6026F9A3A8_OFFSET UNITYSDK_OFFSET(0x17F46810)
#define CLASS_1_667914C479297D2B_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x17F46760)
#define CLASS_1_667914C479297D2B_METHOD_1_22FD48E116FEFA3C_OFFSET UNITYSDK_OFFSET(0x17F45690)
#define CLASS_1_667914C479297D2B_METHOD_1_30D99F45F3E4FA6C_OFFSET UNITYSDK_OFFSET(0x17F463C0)
#define CLASS_1_667914C479297D2B_METHOD_1_32430858A26EFDC4_OFFSET UNITYSDK_OFFSET(0x17F45800)
#define CLASS_1_667914C479297D2B_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x17F47020)
#define CLASS_1_667914C479297D2B_METHOD_1_6E2A7222744D2ABA_OFFSET UNITYSDK_OFFSET(0x17F446B0)
#define CLASS_1_667914C479297D2B_METHOD_1_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x17F46E60)
#define CLASS_1_667914C479297D2B_METHOD_1_9CA7D345A4B6FB82_OFFSET UNITYSDK_OFFSET(0x17F45EE0)
#define CLASS_1_667914C479297D2B_METHOD_1_A5822C919A4EEE9E_OFFSET UNITYSDK_OFFSET(0x17F44A30)
#define CLASS_1_667914C479297D2B_METHOD_1_B55315C4341CF206_OFFSET UNITYSDK_OFFSET(0x17F46630)
#define CLASS_1_667914C479297D2B_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x17F44DE0)
#define CLASS_1_667914C479297D2B_METHOD_1_DC4E8F5EBA950BA7_OFFSET UNITYSDK_OFFSET(0x17F44110)
#define CLASS_1_667914C479297D2B_METHOD_1_DEF7C798A72BFB9E_OFFSET UNITYSDK_OFFSET(0x17F45910)
#define CLASS_1_667914C479297D2B_METHOD_1_E64A45A8DCCAFD8F_OFFSET UNITYSDK_OFFSET(0x17F44AF0)
#define CLASS_1_667914C479297D2B_METHOD_1_EDF1B0E72CF4269B_OFFSET UNITYSDK_OFFSET(0x17F46380)
#define CLASS_1_667914C479297D2B_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x17F45C00)
#define CLASS_1_667914C479297D2B_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x17F470B0)
#define CLASS_1_667914C479297D2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F44040)

inline static constexpr unsigned int Class_1_667914C479297D2B_TypeDefinitionIndex = 79032;

class Class_1_667914C479297D2B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0x30910);
	}
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0x30918);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0x30920);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0x30928);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0xA500);
	}
	static ::System::Boolean* StaticGet_Field_1_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0xA504);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_667914C479297D2B_TypeDefinitionIndex)->GetStaticField(0xA505);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_DC4E8F5EBA950BA7(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2, ::System::String*& a3, ::Class_1_F969215F73192D65*& a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action_1<::MoleMole::Config::CommonDitherConfigs*>* a7)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::System::String*&, ::Class_1_F969215F73192D65*&, ::System::Boolean, ::System::Boolean, ::System::Action_1<::MoleMole::Config::CommonDitherConfigs*>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_DC4E8F5EBA950BA7_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Method_1_6E2A7222744D2ABA(::Il2CppArray<::System::UInt64>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*(*)(::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_6E2A7222744D2ABA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E64A45A8DCCAFD8F(::System::String* a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_E64A45A8DCCAFD8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_32430858A26EFDC4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_32430858A26EFDC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::Il2CppArray<::Foundation::AssetPath>* Method_1_02A1CB6039A9E15F(::System::Boolean a1)
	{
		return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_02A1CB6039A9E15F_OFFSET))(a1);
	}

	static ::System::Void Method_1_DEF7C798A72BFB9E(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_DEF7C798A72BFB9E_OFFSET))(a1, a2);
	}

	static ::Class_1_F969215F73192D65* Method_1_9CA7D345A4B6FB82(::System::String* a1)
	{
		return ((::Class_1_F969215F73192D65*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_9CA7D345A4B6FB82_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_EDF1B0E72CF4269B()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_EDF1B0E72CF4269B_OFFSET))();
	}

	static ::System::Void Method_1_30D99F45F3E4FA6C(::Foundation::AssetPath a1, ::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>* a2)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_30D99F45F3E4FA6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_CEBFF096B4C9D46B_OFFSET))();
	}

	static ::System::Boolean Method_1_22FD48E116FEFA3C(::System::String* a1, ::System::Int32 a2, ::Foundation::AssetPath& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_22FD48E116FEFA3C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_0868EF727040C390_OFFSET))();
	}

	static ::System::Void Method_1_0D637A6026F9A3A8(::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_0D637A6026F9A3A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5822C919A4EEE9E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_A5822C919A4EEE9E_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F20D9555862CF22(::Class_1_F969215F73192D65* a1)
	{
		return ((::System::Void(*)(::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_7F20D9555862CF22_OFFSET))(a1);
	}

	static ::Il2CppArray<::Foundation::AssetPath>* Method_1_B55315C4341CF206(::Il2CppArray<::Foundation::AssetPath>* a1)
	{
		return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_B55315C4341CF206_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}
};
