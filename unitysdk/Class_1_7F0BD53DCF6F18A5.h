#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
class MainCityObjectState_ScriptConfig;
class TrafficRedLimitArea;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x141DCDC0)
#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x141DD040)
#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_78557C8E2ADCF2F7_OFFSET UNITYSDK_OFFSET(0x141DCFE0)
#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_AA3DF835C374054C_OFFSET UNITYSDK_OFFSET(0x141DCC60)
#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_D7FE3FCFB1E0B054_OFFSET UNITYSDK_OFFSET(0x141DCCC0)
#define CLASS_1_7F0BD53DCF6F18A5_METHOD_1_F5E4469CD6D8BE1B_OFFSET UNITYSDK_OFFSET(0x141DD130)

inline static constexpr unsigned int Class_1_7F0BD53DCF6F18A5_TypeDefinitionIndex = 63780;

class Class_1_7F0BD53DCF6F18A5 : public ::System::Object
{
public:
	static ::ConfigMainCityObject** StaticGet_Field_1_0()
	{
		return (::ConfigMainCityObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F0BD53DCF6F18A5_TypeDefinitionIndex)->GetStaticField(0x3B640);
	}

	static ::TrafficRedLimitArea* Method_1_AA3DF835C374054C(::System::String* a1)
	{
		return ((::TrafficRedLimitArea*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_AA3DF835C374054C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D7FE3FCFB1E0B054(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_D7FE3FCFB1E0B054_OFFSET))(a1);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MainCityObjectState_ScriptConfig* Method_1_78557C8E2ADCF2F7(::System::String* a1)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_78557C8E2ADCF2F7_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* Method_1_F5E4469CD6D8BE1B()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F0BD53DCF6F18A5_METHOD_1_F5E4469CD6D8BE1B_OFFSET))();
	}
};
