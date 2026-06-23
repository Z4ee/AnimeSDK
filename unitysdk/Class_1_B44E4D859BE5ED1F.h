#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInteractEntry; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_07A3F9387575E567_OFFSET UNITYSDK_OFFSET(0x1687FD50)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_417DA1AE7CBABC8F_OFFSET UNITYSDK_OFFSET(0x1687FF80)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x16880480)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1687FF40)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x168803C0)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_D41D17590F20F1E8_OFFSET UNITYSDK_OFFSET(0x1687FE50)
#define CLASS_1_B44E4D859BE5ED1F_METHOD_1_D4227A129652DC51_OFFSET UNITYSDK_OFFSET(0x1687F850)
#define CLASS_1_B44E4D859BE5ED1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1687F840)

inline static constexpr unsigned int Class_1_B44E4D859BE5ED1F_TypeDefinitionIndex = 52987;

class Class_1_B44E4D859BE5ED1F : public ::System::Object
{
public:
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B44E4D859BE5ED1F_TypeDefinitionIndex)->GetStaticField(0x3E150);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B44E4D859BE5ED1F_TypeDefinitionIndex)->GetStaticField(0x3E158);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D4227A129652DC51(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_D4227A129652DC51_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::InteractEntry* Method_1_07A3F9387575E567(::System::String* a1)
	{
		return ((::MoleMole::Config::InteractEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_07A3F9387575E567_OFFSET))(a1);
	}

	static ::System::Void Method_1_D41D17590F20F1E8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_D41D17590F20F1E8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_417DA1AE7CBABC8F(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_417DA1AE7CBABC8F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B44E4D859BE5ED1F_METHOD_1_5790A55946AA509D_1_OFFSET))();
	}
};
