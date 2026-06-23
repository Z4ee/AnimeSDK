#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_596881FA8908BD9F_METHOD_1_28F4F79F22D63214_OFFSET UNITYSDK_OFFSET(0x12D45330)
#define CLASS_1_596881FA8908BD9F_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x12D45110)
#define CLASS_1_596881FA8908BD9F_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x12D45560)
#define CLASS_1_596881FA8908BD9F_METHOD_1_5102BC2F91CE61BA_OFFSET UNITYSDK_OFFSET(0x12D45510)

inline static constexpr unsigned int Class_1_596881FA8908BD9F_TypeDefinitionIndex = 39873;

class Class_1_596881FA8908BD9F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigExQTE** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigExQTE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_596881FA8908BD9F_TypeDefinitionIndex)->GetStaticField(0x49010);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_28F4F79F22D63214(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_METHOD_1_28F4F79F22D63214_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigExQTE* Method_1_5102BC2F91CE61BA()
	{
		return ((::MoleMole::Config::ConfigExQTE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_METHOD_1_5102BC2F91CE61BA_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
