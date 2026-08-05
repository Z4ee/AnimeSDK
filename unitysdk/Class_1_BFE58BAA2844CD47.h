#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFE58BAA2844CD47_METHOD_1_11421F0321B0227F_OFFSET UNITYSDK_OFFSET(0x1540FC40)
#define CLASS_1_BFE58BAA2844CD47_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1540FA20)
#define CLASS_1_BFE58BAA2844CD47_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x1540F930)
#define CLASS_1_BFE58BAA2844CD47_METHOD_1_8B5054B88B3ADB19_OFFSET UNITYSDK_OFFSET(0x1540F730)
#define CLASS_1_BFE58BAA2844CD47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1540F720)

inline static constexpr unsigned int Class_1_BFE58BAA2844CD47_TypeDefinitionIndex = 76604;

class Class_1_BFE58BAA2844CD47 : public ::System::Object
{
public:
	static ::MoleMole::CharacterCommonDatas** StaticGet_Field_1_1()
	{
		return (::MoleMole::CharacterCommonDatas**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE58BAA2844CD47_TypeDefinitionIndex)->GetStaticField(0x2F480);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE58BAA2844CD47_TypeDefinitionIndex)->GetStaticField(0x2F488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8B5054B88B3ADB19(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::Config::RunStateType a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::RunStateType))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_METHOD_1_8B5054B88B3ADB19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::RunStateType Method_1_11421F0321B0227F(::System::Int32 a1)
	{
		return ((::MoleMole::Config::RunStateType(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_METHOD_1_11421F0321B0227F_OFFSET))(a1);
	}
};
