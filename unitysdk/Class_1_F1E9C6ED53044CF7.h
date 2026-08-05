#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F1E9C6ED53044CF7_METHOD_1_475F64E4B952D43A_OFFSET UNITYSDK_OFFSET(0x1C3CC620)
#define CLASS_1_F1E9C6ED53044CF7_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1C3CC400)
#define CLASS_1_F1E9C6ED53044CF7_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x1C3CC310)

inline static constexpr unsigned int Class_1_F1E9C6ED53044CF7_TypeDefinitionIndex = 40211;

class Class_1_F1E9C6ED53044CF7 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSplineTag** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSplineTag**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1E9C6ED53044CF7_TypeDefinitionIndex)->GetStaticField(0x38070);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigSplineTag* Method_1_475F64E4B952D43A()
	{
		return ((::MoleMole::Config::ConfigSplineTag*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_METHOD_1_475F64E4B952D43A_OFFSET))();
	}
};
