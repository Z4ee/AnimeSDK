#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigEntitySkills; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FF425EF747352D8_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x15697770)
#define CLASS_1_7FF425EF747352D8_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x15697B80)
#define CLASS_1_7FF425EF747352D8_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15697E00)
#define CLASS_1_7FF425EF747352D8_METHOD_1_5960DAA7BAB95C91_OFFSET UNITYSDK_OFFSET(0x15697A80)
#define CLASS_1_7FF425EF747352D8_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x15697E50)
#define CLASS_1_7FF425EF747352D8_METHOD_1_B0EFA736746074F8_OFFSET UNITYSDK_OFFSET(0x15698020)
#define CLASS_1_7FF425EF747352D8_METHOD_1_BA771BB541D6C46A_OFFSET UNITYSDK_OFFSET(0x15697F10)
#define CLASS_1_7FF425EF747352D8_METHOD_1_C845968F773229DB_OFFSET UNITYSDK_OFFSET(0x15697980)
#define CLASS_1_7FF425EF747352D8_METHOD_1_F8A2DB0FC46AE76D_OFFSET UNITYSDK_OFFSET(0x15698110)
#define CLASS_1_7FF425EF747352D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15697760)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_TypeDefinitionIndex = 51281;

class Class_1_7FF425EF747352D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF425EF747352D8_TypeDefinitionIndex)->GetStaticField(0x2D8D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF425EF747352D8_TypeDefinitionIndex)->GetStaticField(0x2D8D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntitySkill* Method_1_C845968F773229DB(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigEntitySkill*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_C845968F773229DB_OFFSET))(a1);
	}

	static ::System::Void Method_1_5960DAA7BAB95C91(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_5960DAA7BAB95C91_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BA771BB541D6C46A(::System::String* a1, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule&))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_BA771BB541D6C46A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B0EFA736746074F8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_B0EFA736746074F8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F8A2DB0FC46AE76D(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_F8A2DB0FC46AE76D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}
};
