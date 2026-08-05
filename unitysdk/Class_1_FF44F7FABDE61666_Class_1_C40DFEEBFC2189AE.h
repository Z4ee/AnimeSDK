#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace System { class Action; }

#define CLASS_1_FF44F7FABDE61666_CLASS_1_C40DFEEBFC2189AE_METHOD_1_5C60E5AE9FA825CC_OFFSET UNITYSDK_OFFSET(0x1BB7FC10)
#define CLASS_1_FF44F7FABDE61666_CLASS_1_C40DFEEBFC2189AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7FC00)

inline static constexpr unsigned int Class_1_FF44F7FABDE61666_Class_1_C40DFEEBFC2189AE_TypeDefinitionIndex = 40746;

class Class_1_FF44F7FABDE61666_Class_1_C40DFEEBFC2189AE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_CLASS_1_C40DFEEBFC2189AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5C60E5AE9FA825CC(::MoleMole::Config::ConfigScaleCameraZ* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigScaleCameraZ*))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_CLASS_1_C40DFEEBFC2189AE_METHOD_1_5C60E5AE9FA825CC_OFFSET))(this, a1);
	}
};
