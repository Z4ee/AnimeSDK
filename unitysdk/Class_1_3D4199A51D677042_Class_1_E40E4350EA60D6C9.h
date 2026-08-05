#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3D4199A51D677042_CLASS_1_E40E4350EA60D6C9_METHOD_1_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x1388EAD0)
#define CLASS_1_3D4199A51D677042_CLASS_1_E40E4350EA60D6C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1388EAC0)

inline static constexpr unsigned int Class_1_3D4199A51D677042_Class_1_E40E4350EA60D6C9_TypeDefinitionIndex = 44800;

class Class_1_3D4199A51D677042_Class_1_E40E4350EA60D6C9 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigUIAnimationFunctionSet*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_E40E4350EA60D6C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_E40E4350EA60D6C9_METHOD_1_930073A6194C4594_OFFSET))(this);
	}
};
