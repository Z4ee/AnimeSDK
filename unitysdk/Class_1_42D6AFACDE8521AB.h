#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_42D6AFACDE8521AB_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xF637150)
#define CLASS_1_42D6AFACDE8521AB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF6376C0)
#define CLASS_1_42D6AFACDE8521AB_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xF637200)
#define CLASS_1_42D6AFACDE8521AB_METHOD_1_57105453693CC7BF_OFFSET UNITYSDK_OFFSET(0xF637570)
#define CLASS_1_42D6AFACDE8521AB_METHOD_1_D19972D695971FE0_OFFSET UNITYSDK_OFFSET(0xF636FF0)
#define CLASS_1_42D6AFACDE8521AB_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0xF637450)
#define CLASS_1_42D6AFACDE8521AB__CCTOR_OFFSET UNITYSDK_OFFSET(0xF636ED0)

inline static constexpr unsigned int Class_1_42D6AFACDE8521AB_TypeDefinitionIndex = 49297;

class Class_1_42D6AFACDE8521AB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42D6AFACDE8521AB_TypeDefinitionIndex)->GetStaticField(0x3D9B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42D6AFACDE8521AB_TypeDefinitionIndex)->GetStaticField(0x3D9B8);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_42D6AFACDE8521AB_TypeDefinitionIndex)->GetStaticField(0xE650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_D19972D695971FE0(::System::Int32 a1, ::MoleMole::Config::ConfigFlowCanvasLevelData*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*&))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_D19972D695971FE0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigFlowCanvasData* Method_1_57105453693CC7BF(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigFlowCanvasData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_57105453693CC7BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_42D6AFACDE8521AB_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
