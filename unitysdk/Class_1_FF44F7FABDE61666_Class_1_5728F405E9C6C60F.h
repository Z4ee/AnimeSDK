#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace System { class Action; }

#define CLASS_1_FF44F7FABDE61666_CLASS_1_5728F405E9C6C60F_METHOD_1_70400FCBBD87CFF6_OFFSET UNITYSDK_OFFSET(0x14636CF0)
#define CLASS_1_FF44F7FABDE61666_CLASS_1_5728F405E9C6C60F__CTOR_OFFSET UNITYSDK_OFFSET(0x14636CE0)

inline static constexpr unsigned int Class_1_FF44F7FABDE61666_Class_1_5728F405E9C6C60F_TypeDefinitionIndex = 78313;

class Class_1_FF44F7FABDE61666_Class_1_5728F405E9C6C60F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_CLASS_1_5728F405E9C6C60F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70400FCBBD87CFF6(::MoleMole::Config::ConfigScaleCameraZ* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigScaleCameraZ*))((::PBYTE)hIl2Cpp + CLASS_1_FF44F7FABDE61666_CLASS_1_5728F405E9C6C60F_METHOD_1_70400FCBBD87CFF6_OFFSET))(this, a1);
	}
};
