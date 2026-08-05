#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_3D4199A51D677042_Class_1_EDB1B2AFE5C288BF;
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D4199A51D677042_CLASS_1_ADAA0ED5CFA265FB_METHOD_1_74F65E71E1AEBDD9_OFFSET UNITYSDK_OFFSET(0x15765A60)
#define CLASS_1_3D4199A51D677042_CLASS_1_ADAA0ED5CFA265FB__CTOR_OFFSET UNITYSDK_OFFSET(0x15765A50)

inline static constexpr unsigned int Class_1_3D4199A51D677042_Class_1_ADAA0ED5CFA265FB_TypeDefinitionIndex = 44798;

class Class_1_3D4199A51D677042_Class_1_ADAA0ED5CFA265FB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_6; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18
	::Class_1_3D4199A51D677042_Class_1_EDB1B2AFE5C288BF* Field_1_0; // 0x28
	::System::Action* Field_1_7; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Int32 Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_ADAA0ED5CFA265FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_74F65E71E1AEBDD9(::MoleMole::Config::ConfigUIScriptableAnimationV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_ADAA0ED5CFA265FB_METHOD_1_74F65E71E1AEBDD9_OFFSET))(this, a1);
	}
};
