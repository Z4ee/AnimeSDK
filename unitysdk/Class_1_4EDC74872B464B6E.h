#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4EDC74872B464B6E_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x158E2170)
#define CLASS_1_4EDC74872B464B6E_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x158E2260)
#define CLASS_1_4EDC74872B464B6E_METHOD_1_92E51253242E1B82_OFFSET UNITYSDK_OFFSET(0x158E2D10)
#define CLASS_1_4EDC74872B464B6E_METHOD_1_A13AC4699C3ED431_OFFSET UNITYSDK_OFFSET(0x158E2C20)
#define CLASS_1_4EDC74872B464B6E_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x158E26A0)

inline static constexpr unsigned int Class_1_4EDC74872B464B6E_TypeDefinitionIndex = 71467;

class Class_1_4EDC74872B464B6E : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIMainPageBuddiesShow** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigUIMainPageBuddiesShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EDC74872B464B6E_TypeDefinitionIndex)->GetStaticField(0x41E70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EDC74872B464B6E_TypeDefinitionIndex)->GetStaticField(0x41E78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EDC74872B464B6E_TypeDefinitionIndex)->GetStaticField(0x41E80);
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_METHOD_1_B877181B6123B7F6_OFFSET))();
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A13AC4699C3ED431(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_METHOD_1_A13AC4699C3ED431_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_92E51253242E1B82(::System::Int32 a1, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + CLASS_1_4EDC74872B464B6E_METHOD_1_92E51253242E1B82_OFFSET))(a1, a2);
	}
};
