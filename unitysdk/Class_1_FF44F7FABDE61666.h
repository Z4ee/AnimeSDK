#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace MoleMole::Config { class ConfigScaleCameraZPattern; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF44F7FABDE61666_METHOD_1_410660E84FE583CA_OFFSET UNITYSDK_OFFSET(0x17AC31A0)
#define CLASS_1_FF44F7FABDE61666_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x17AC2BC0)
#define CLASS_1_FF44F7FABDE61666_METHOD_1_6BB0D0298525DBFB_OFFSET UNITYSDK_OFFSET(0x17AC3110)
#define CLASS_1_FF44F7FABDE61666_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x17AC2F60)
#define CLASS_1_FF44F7FABDE61666_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x17AC2890)
#define CLASS_1_FF44F7FABDE61666_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x17AC2DE0)
#define CLASS_1_FF44F7FABDE61666__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC27F0)

inline static constexpr unsigned int Class_1_FF44F7FABDE61666_TypeDefinitionIndex = 86045;

class Class_1_FF44F7FABDE61666 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF44F7FABDE61666_TypeDefinitionIndex)->GetStaticField(0x457B0);
	}
	static ::MoleMole::Config::ConfigScaleCameraZ** StaticGet_Field_1_3()
	{
		return (::MoleMole::Config::ConfigScaleCameraZ**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF44F7FABDE61666_TypeDefinitionIndex)->GetStaticField(0x457B8);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF44F7FABDE61666_TypeDefinitionIndex)->GetStaticField(0x10D30);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF44F7FABDE61666_TypeDefinitionIndex)->GetStaticField(0x10D34);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_B06F516E4459C742_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_410660E84FE583CA(::System::Int32 a1, ::MoleMole::Config::ConfigScaleCameraZPattern*& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_410660E84FE583CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6BB0D0298525DBFB(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_METHOD_1_6BB0D0298525DBFB_OFFSET))(a1, a2);
	}
};
