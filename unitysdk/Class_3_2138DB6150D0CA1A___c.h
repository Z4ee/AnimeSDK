#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_2138DB6150D0CA1A___C_METHOD_1_866D0979717F6B36_OFFSET UNITYSDK_OFFSET(0xA932AD0)
#define CLASS_3_2138DB6150D0CA1A___C_METHOD_1_E661BAEFA63CDC37_OFFSET UNITYSDK_OFFSET(0xA932A40)
#define CLASS_3_2138DB6150D0CA1A___C_METHOD_1_F4700841222EB2DC_OFFSET UNITYSDK_OFFSET(0xA932A30)
#define CLASS_3_2138DB6150D0CA1A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9329E0)
#define CLASS_3_2138DB6150D0CA1A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA932A20)

inline static constexpr unsigned int Class_3_2138DB6150D0CA1A___c_TypeDefinitionIndex = 61865;

class Class_3_2138DB6150D0CA1A___c : public ::System::Object
{
public:
	static ::Class_3_2138DB6150D0CA1A___c** StaticGet___9()
	{
		return (::Class_3_2138DB6150D0CA1A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A___c_TypeDefinitionIndex)->GetStaticField(0x3B2B0);
	}
	static ::System::Comparison_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A___c_TypeDefinitionIndex)->GetStaticField(0x3B2B8);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__27_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A___c_TypeDefinitionIndex)->GetStaticField(0x3B2C0);
	}
	static ::System::Action** StaticGet___9__102_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2138DB6150D0CA1A___c_TypeDefinitionIndex)->GetStaticField(0x3B2C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F4700841222EB2DC(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a1, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A___C_METHOD_1_F4700841222EB2DC_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E661BAEFA63CDC37()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A___C_METHOD_1_E661BAEFA63CDC37_OFFSET))(this);
	}

	::System::Void Method_1_866D0979717F6B36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A___C_METHOD_1_866D0979717F6B36_OFFSET))(this);
	}
};
