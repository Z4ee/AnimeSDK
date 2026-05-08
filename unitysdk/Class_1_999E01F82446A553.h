#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace MoleMole::Config { class PlayerAccessorySkinData; }
namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_999E01F82446A553_METHOD_1_182DE8C44A8469E0_OFFSET UNITYSDK_OFFSET(0x135D0FE0)
#define CLASS_1_999E01F82446A553_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x135D12D0)
#define CLASS_1_999E01F82446A553_METHOD_1_6BB0D0298525DBFB_OFFSET UNITYSDK_OFFSET(0x135D0C20)
#define CLASS_1_999E01F82446A553_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x135D0A60)
#define CLASS_1_999E01F82446A553_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x135D0CB0)
#define CLASS_1_999E01F82446A553_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x135D1150)
#define CLASS_1_999E01F82446A553__CCTOR_OFFSET UNITYSDK_OFFSET(0x135D09C0)

inline static constexpr unsigned int Class_1_999E01F82446A553_TypeDefinitionIndex = 66674;

class Class_1_999E01F82446A553 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_999E01F82446A553_TypeDefinitionIndex)->GetStaticField(0x2BC70);
	}
	static ::MoleMole::Config::ConfigPlayerAccessory** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigPlayerAccessory**)Il2CppClass::FromTypeDefinitionIndex(Class_1_999E01F82446A553_TypeDefinitionIndex)->GetStaticField(0x2BC78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_B06F516E4459C742_OFFSET))();
	}

	static ::System::Boolean Method_1_182DE8C44A8469E0(::System::Int32 a1, ::MoleMole::PlayerAccessoryType a2, ::MoleMole::Config::PlayerAccessoryTabData*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::PlayerAccessoryType, ::MoleMole::Config::PlayerAccessoryTabData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_182DE8C44A8469E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::System::Void Method_1_6BB0D0298525DBFB(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_6BB0D0298525DBFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
