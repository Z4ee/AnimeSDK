#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValue; }
namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1080DBEE4F3379D6_METHOD_1_06EF096D1DB6C6D9_OFFSET UNITYSDK_OFFSET(0x19F7D880)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x19F7D4E0)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x19F7D3F0)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_DD64032016BF9703_OFFSET UNITYSDK_OFFSET(0x19F7D6F0)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_DE6D3187F92B47CB_OFFSET UNITYSDK_OFFSET(0x19F7D870)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x19F7DD00)
#define CLASS_1_1080DBEE4F3379D6_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x19F7DD40)

inline static constexpr unsigned int Class_1_1080DBEE4F3379D6_TypeDefinitionIndex = 53054;

class Class_1_1080DBEE4F3379D6 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTargetValues** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTargetValues**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1080DBEE4F3379D6_TypeDefinitionIndex)->GetStaticField(0x47C00);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_DD64032016BF9703()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_DD64032016BF9703_OFFSET))();
	}

	static ::MoleMole::Config::ConfigTargetValues* Method_1_DE6D3187F92B47CB()
	{
		return ((::MoleMole::Config::ConfigTargetValues*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_DE6D3187F92B47CB_OFFSET))();
	}

	static ::MoleMole::Config::ConfigTargetValue* Method_1_06EF096D1DB6C6D9(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigTargetValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_06EF096D1DB6C6D9_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}
};
