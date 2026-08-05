#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTarget; }
namespace MoleMole::Config { class ConfigLockTargetMiscInfo; }
namespace MoleMole::Config { class ConfigLockTargets; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_887DD3CF562F14DB_METHOD_1_02F4F9F965FEA73E_OFFSET UNITYSDK_OFFSET(0x11B5ABA0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x11B5A7E0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_166D9D0D86BBE416_OFFSET UNITYSDK_OFFSET(0x11B5ACE0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x11B5A450)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11B5AAF0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_5960DAA7BAB95C91_OFFSET UNITYSDK_OFFSET(0x11B5A6E0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_B0EFA736746074F8_OFFSET UNITYSDK_OFFSET(0x11B5B160)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_D6390FBCE57148E5_OFFSET UNITYSDK_OFFSET(0x11B5A9F0)
#define CLASS_1_887DD3CF562F14DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B5A440)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_TypeDefinitionIndex = 82440;

class Class_1_887DD3CF562F14DB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLockTargetMiscInfo** StaticGet_Field_1_7()
	{
		return (::MoleMole::Config::ConfigLockTargetMiscInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_887DD3CF562F14DB_TypeDefinitionIndex)->GetStaticField(0x3D140);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_887DD3CF562F14DB_TypeDefinitionIndex)->GetStaticField(0x3D148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5960DAA7BAB95C91(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_5960DAA7BAB95C91_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigLockTarget* Method_1_D6390FBCE57148E5(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigLockTarget*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_D6390FBCE57148E5_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Single Method_1_02F4F9F965FEA73E(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_02F4F9F965FEA73E_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_166D9D0D86BBE416(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_166D9D0D86BBE416_OFFSET))(a1);
	}

	static ::System::Void Method_1_B0EFA736746074F8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_B0EFA736746074F8_OFFSET))(a1, a2, a3, a4);
	}
};
