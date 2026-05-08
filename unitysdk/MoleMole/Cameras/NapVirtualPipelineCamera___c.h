#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C_METHOD_1_8047E14E3FC3F341_OFFSET UNITYSDK_OFFSET(0x122DED30)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122DECE0)
#define MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122DED20)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtualPipelineCamera___c_TypeDefinitionIndex = 56151;

	class NapVirtualPipelineCamera___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapVirtualPipelineCamera___c_TypeDefinitionIndex)->GetStaticField(0x2DE80);
		}
		static ::MoleMole::Cameras::NapVirtualPipelineCamera___c** StaticGet___9()
		{
			return (::MoleMole::Cameras::NapVirtualPipelineCamera___c**)Il2CppClass::FromTypeDefinitionIndex(NapVirtualPipelineCamera___c_TypeDefinitionIndex)->GetStaticField(0x2DE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_8047E14E3FC3F341(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUALPIPELINECAMERA___C_METHOD_1_8047E14E3FC3F341_OFFSET))(this, a1);
		}
	};
}
