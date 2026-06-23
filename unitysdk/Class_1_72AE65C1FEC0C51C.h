#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72AE65C1FEC0C51C_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x126DC690)
#define CLASS_1_72AE65C1FEC0C51C_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x126DC780)
#define CLASS_1_72AE65C1FEC0C51C_METHOD_1_92E51253242E1B82_OFFSET UNITYSDK_OFFSET(0x126DD230)
#define CLASS_1_72AE65C1FEC0C51C_METHOD_1_A13AC4699C3ED431_OFFSET UNITYSDK_OFFSET(0x126DCBB0)
#define CLASS_1_72AE65C1FEC0C51C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x126DCCB0)

inline static constexpr unsigned int Class_1_72AE65C1FEC0C51C_TypeDefinitionIndex = 56575;

class Class_1_72AE65C1FEC0C51C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72AE65C1FEC0C51C_TypeDefinitionIndex)->GetStaticField(0x339C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72AE65C1FEC0C51C_TypeDefinitionIndex)->GetStaticField(0x339C8);
	}
	static ::MoleMole::ConfigUIMainPageShow** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIMainPageShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72AE65C1FEC0C51C_TypeDefinitionIndex)->GetStaticField(0x339D0);
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_A13AC4699C3ED431(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_METHOD_1_A13AC4699C3ED431_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_METHOD_1_B877181B6123B7F6_OFFSET))();
	}

	static ::System::Boolean Method_1_92E51253242E1B82(::System::Int32 a1, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_METHOD_1_92E51253242E1B82_OFFSET))(a1, a2);
	}
};
