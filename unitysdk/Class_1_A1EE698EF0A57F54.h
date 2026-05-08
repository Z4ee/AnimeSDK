#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A1EE698EF0A57F54_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x117EF120)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_10D9D5FE5370D277_OFFSET UNITYSDK_OFFSET(0x117EF000)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x117EFE90)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_52602057F66CDED2_OFFSET UNITYSDK_OFFSET(0x117EFE10)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_77BC484DA531C1E6_OFFSET UNITYSDK_OFFSET(0x117EF330)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x117EF3C0)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x117EF710)
#define CLASS_1_A1EE698EF0A57F54_METHOD_1_FED495674D14D7AC_OFFSET UNITYSDK_OFFSET(0x117EEED0)
#define CLASS_1_A1EE698EF0A57F54__CCTOR_OFFSET UNITYSDK_OFFSET(0x117EED80)

inline static constexpr unsigned int Class_1_A1EE698EF0A57F54_TypeDefinitionIndex = 55126;

class Class_1_A1EE698EF0A57F54 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x42990);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x42998);
	}
	static ::MoleMole::Config::ConfigHollowChessboardLight** StaticGet_Field_1_3()
	{
		return (::MoleMole::Config::ConfigHollowChessboardLight**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1EE698EF0A57F54_TypeDefinitionIndex)->GetStaticField(0x429A0);
	}
	// static const ::System::Int32 Field_1_0 = 0x1F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_FED495674D14D7AC(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_FED495674D14D7AC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_10D9D5FE5370D277(::MoleMole::Vector2Int a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_10D9D5FE5370D277_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_0868EF727040C390_OFFSET))();
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_B43C848B078B3C34_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardLight* Method_1_52602057F66CDED2()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardLight*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_52602057F66CDED2_OFFSET))();
	}

	static ::System::Void Method_1_77BC484DA531C1E6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_77BC484DA531C1E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1EE698EF0A57F54_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}
};
