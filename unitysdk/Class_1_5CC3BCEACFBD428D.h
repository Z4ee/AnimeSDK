#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FCF82A8169AB2275.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5CC3BCEACFBD428D_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14417430)
#define CLASS_1_5CC3BCEACFBD428D_METHOD_1_E009815F6908647B_OFFSET UNITYSDK_OFFSET(0x144173B0)
#define CLASS_1_5CC3BCEACFBD428D__CTOR_OFFSET UNITYSDK_OFFSET(0x144172A0)

inline static constexpr unsigned int Class_1_5CC3BCEACFBD428D_TypeDefinitionIndex = 71898;

class Class_1_5CC3BCEACFBD428D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_1; // 0x10
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_FCF82A8169AB2275>* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_5CC3BCEACFBD428D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E009815F6908647B(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_5CC3BCEACFBD428D_METHOD_1_E009815F6908647B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC3BCEACFBD428D_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
