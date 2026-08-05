#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1F2CAFBB91A16416_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x178D67B0)
#define CLASS_1_1F2CAFBB91A16416_METHOD_1_8A66F5228F18C198_OFFSET UNITYSDK_OFFSET(0x178D68A0)
#define CLASS_1_1F2CAFBB91A16416_METHOD_1_92E51253242E1B82_OFFSET UNITYSDK_OFFSET(0x178D6080)
#define CLASS_1_1F2CAFBB91A16416_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x178D6150)
#define CLASS_1_1F2CAFBB91A16416_METHOD_1_C4B80F34E5A8874F_OFFSET UNITYSDK_OFFSET(0x178D66C0)

inline static constexpr unsigned int Class_1_1F2CAFBB91A16416_TypeDefinitionIndex = 44327;

class Class_1_1F2CAFBB91A16416 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F2CAFBB91A16416_TypeDefinitionIndex)->GetStaticField(0x30CC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F2CAFBB91A16416_TypeDefinitionIndex)->GetStaticField(0x30CC8);
	}
	static ::MoleMole::ConfigUIMainPageSkinShow** StaticGet_Field_1_2()
	{
		return (::MoleMole::ConfigUIMainPageSkinShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F2CAFBB91A16416_TypeDefinitionIndex)->GetStaticField(0x30CD0);
	}

	static ::System::Boolean Method_1_92E51253242E1B82(::System::Int32 a1, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_METHOD_1_92E51253242E1B82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_METHOD_1_B877181B6123B7F6_OFFSET))();
	}

	static ::System::Boolean Method_1_C4B80F34E5A8874F(::System::Int32 a1, ::MoleMole::MainPageItemShowSetting*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::MainPageItemShowSetting*&))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_METHOD_1_C4B80F34E5A8874F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8A66F5228F18C198(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_METHOD_1_8A66F5228F18C198_OFFSET))(a1, a2);
	}
};
