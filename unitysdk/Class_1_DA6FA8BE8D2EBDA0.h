#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x16591C50)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_57105453693CC7BF_OFFSET UNITYSDK_OFFSET(0x165919E0)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_D19972D695971FE0_OFFSET UNITYSDK_OFFSET(0x16591870)
#define CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x16591B40)
#define CLASS_1_DA6FA8BE8D2EBDA0__CCTOR_OFFSET UNITYSDK_OFFSET(0x16591750)

inline static constexpr unsigned int Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex = 54336;

class Class_1_DA6FA8BE8D2EBDA0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex)->GetStaticField(0x3BEC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA6FA8BE8D2EBDA0_TypeDefinitionIndex)->GetStaticField(0x3BEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_D19972D695971FE0(::System::Int32 a1, ::MoleMole::Config::ConfigFlowCanvasLevelData*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*&))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_D19972D695971FE0_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigFlowCanvasData* Method_1_57105453693CC7BF(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigFlowCanvasData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_57105453693CC7BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
