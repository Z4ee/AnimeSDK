#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116FDE70)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116FDEB0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__ONBEFORESERIALIZE_B__12_0_OFFSET UNITYSDK_OFFSET(0x116FDEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas___c_TypeDefinitionIndex = 68149;

	class ConfigCameraStoryDatas___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigCameraStoryDatas___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigCameraStoryDatas___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas___c_TypeDefinitionIndex)->GetStaticField(0x36420);
		}
		static ::System::Comparison_1<::MoleMole::Config::CameraStoryDataEntry*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::CameraStoryDataEntry*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas___c_TypeDefinitionIndex)->GetStaticField(0x36428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnBeforeSerialize_b__12_0(::MoleMole::Config::CameraStoryDataEntry* a, ::MoleMole::Config::CameraStoryDataEntry* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::CameraStoryDataEntry*, ::MoleMole::Config::CameraStoryDataEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__ONBEFORESERIALIZE_B__12_0_OFFSET))(this, a, b);
		}
	};
}
