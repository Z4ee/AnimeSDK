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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84354C691676A522_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x1AE79820)
#define CLASS_1_84354C691676A522_METHOD_1_1C4CBEEE68711A80_OFFSET UNITYSDK_OFFSET(0x1AE794C0)
#define CLASS_1_84354C691676A522_METHOD_1_30D99F45F3E4FA6C_OFFSET UNITYSDK_OFFSET(0x1AE791C0)
#define CLASS_1_84354C691676A522_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1AE7A470)
#define CLASS_1_84354C691676A522_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x1AE79430)
#define CLASS_1_84354C691676A522_METHOD_1_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x1AE79000)
#define CLASS_1_84354C691676A522_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1AE79710)
#define CLASS_1_84354C691676A522_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0x1AE7A650)
#define CLASS_1_84354C691676A522_METHOD_1_D9EB68651E127AE5_OFFSET UNITYSDK_OFFSET(0x1AE78EE0)
#define CLASS_1_84354C691676A522_METHOD_1_DC4E8F5EBA950BA7_OFFSET UNITYSDK_OFFSET(0x1AE79ED0)
#define CLASS_1_84354C691676A522_METHOD_1_EEAD177BB642D062_OFFSET UNITYSDK_OFFSET(0x1AE79930)
#define CLASS_1_84354C691676A522_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x1AE7A5B0)
#define CLASS_1_84354C691676A522__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE78E40)

inline static constexpr unsigned int Class_1_84354C691676A522_TypeDefinitionIndex = 77186;

class Class_1_84354C691676A522 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F969215F73192D65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84354C691676A522_TypeDefinitionIndex)->GetStaticField(0x3D360);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::Foundation::AssetPath>* Method_1_D9EB68651E127AE5(::System::Boolean a1)
	{
		return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_D9EB68651E127AE5_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F20D9555862CF22(::Class_1_F969215F73192D65* a1)
	{
		return ((::System::Void(*)(::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_7F20D9555862CF22_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D99F45F3E4FA6C(::Foundation::AssetPath a1, ::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>* a2)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F969215F73192D65*>*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_30D99F45F3E4FA6C_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C4CBEEE68711A80(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_1C4CBEEE68711A80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EEAD177BB642D062(::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_EEAD177BB642D062_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DC4E8F5EBA950BA7(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2, ::System::String*& a3, ::Class_1_F969215F73192D65*& a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action_1<::MoleMole::Config::CommonDitherConfigs*>* a7)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::System::String*&, ::Class_1_F969215F73192D65*&, ::System::Boolean, ::System::Boolean, ::System::Action_1<::MoleMole::Config::CommonDitherConfigs*>*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_DC4E8F5EBA950BA7_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	static ::Class_1_F969215F73192D65* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_F969215F73192D65*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_C7CD1D914D759BC5_OFFSET))(a1);
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}
};
