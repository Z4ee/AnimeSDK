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

#define CLASS_1_887DD3CF562F14DB_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xC94E240)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_166D9D0D86BBE416_OFFSET UNITYSDK_OFFSET(0xC94E450)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_2D468648A42A72C7_OFFSET UNITYSDK_OFFSET(0xC94E9E0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0xC94DFC0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC94EB30)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_5960DAA7BAB95C91_OFFSET UNITYSDK_OFFSET(0xC94DEC0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_B0EFA736746074F8_OFFSET UNITYSDK_OFFSET(0xC94DDD0)
#define CLASS_1_887DD3CF562F14DB_METHOD_1_D6390FBCE57148E5_OFFSET UNITYSDK_OFFSET(0xC94E8E0)
#define CLASS_1_887DD3CF562F14DB__CCTOR_OFFSET UNITYSDK_OFFSET(0xC94DDC0)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_TypeDefinitionIndex = 41865;

class Class_1_887DD3CF562F14DB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLockTargetMiscInfo** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigLockTargetMiscInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_887DD3CF562F14DB_TypeDefinitionIndex)->GetStaticField(0x34C30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLockTarget*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_887DD3CF562F14DB_TypeDefinitionIndex)->GetStaticField(0x34C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B0EFA736746074F8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_B0EFA736746074F8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5960DAA7BAB95C91(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_5960DAA7BAB95C91_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_166D9D0D86BBE416(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_166D9D0D86BBE416_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigLockTarget* Method_1_D6390FBCE57148E5(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigLockTarget*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_D6390FBCE57148E5_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_2D468648A42A72C7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_2D468648A42A72C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}
};
