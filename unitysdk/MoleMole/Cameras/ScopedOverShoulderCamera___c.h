#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_METHOD_1_6150939D7C57528A_OFFSET UNITYSDK_OFFSET(0x1A04AF00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET UNITYSDK_OFFSET(0x1A04AEF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A04AEA0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04AEE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera___c_TypeDefinitionIndex = 81855;

	class ScopedOverShoulderCamera___c : public ::System::Object
	{
	public:
		static ::MoleMole::Cameras::ScopedOverShoulderCamera___c** StaticGet___9()
		{
			return (::MoleMole::Cameras::ScopedOverShoulderCamera___c**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x46410);
		}
		static ::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__22_1()
		{
			return (::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x46418);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__23_3()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(ScopedOverShoulderCamera___c_TypeDefinitionIndex)->GetStaticField(0x46420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6C6FE6B6DCEB2431(::PipelineCamera::ICameraDataBlender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_METHOD_1_6C6FE6B6DCEB2431_OFFSET))(this, a1);
		}

		::System::Void Method_1_6150939D7C57528A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA___C_METHOD_1_6150939D7C57528A_OFFSET))(this, a1);
		}
	};
}
