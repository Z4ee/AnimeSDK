#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace MoleMole::Config { class SkinMdbDataOfRenderer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C14D78B7220664F_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1C1282C0)
#define CLASS_1_4C14D78B7220664F_METHOD_1_6BB0D0298525DBFB_OFFSET UNITYSDK_OFFSET(0x1C1288C0)
#define CLASS_1_4C14D78B7220664F_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x1C128AD0)
#define CLASS_1_4C14D78B7220664F_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x1C1284F0)
#define CLASS_1_4C14D78B7220664F_METHOD_1_DB1B5D95E3D0E47A_OFFSET UNITYSDK_OFFSET(0x1C128130)
#define CLASS_1_4C14D78B7220664F_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x1C128950)
#define CLASS_1_4C14D78B7220664F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C128090)

inline static constexpr unsigned int Class_1_4C14D78B7220664F_TypeDefinitionIndex = 51700;

class Class_1_4C14D78B7220664F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSkinMdb** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSkinMdb**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C14D78B7220664F_TypeDefinitionIndex)->GetStaticField(0x411F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C14D78B7220664F_TypeDefinitionIndex)->GetStaticField(0x411F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_DB1B5D95E3D0E47A(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_DB1B5D95E3D0E47A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_8DC652D916C182B2_OFFSET))();
	}

	static ::System::Void Method_1_6BB0D0298525DBFB(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_6BB0D0298525DBFB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}
};
