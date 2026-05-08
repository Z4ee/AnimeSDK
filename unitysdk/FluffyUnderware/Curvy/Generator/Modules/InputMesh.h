#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGMeshProperties; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_GET_MESHES_OFFSET UNITYSDK_OFFSET(0x1BE916D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_GET_SUPPORTSIPE_OFFSET UNITYSDK_OFFSET(0x1BE916E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_ONTEMPLATECREATED_OFFSET UNITYSDK_OFFSET(0x1BE91B00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BE916F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BE91840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1BE917F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_WARNABOUTINVALIDINPUTS_OFFSET UNITYSDK_OFFSET(0x1BE91B50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE91EB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH__WARNABOUTINVALIDINPUTS_B__10_3_OFFSET UNITYSDK_OFFSET(0x1BE92030)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputMesh_TypeDefinitionIndex = 37417;

	class InputMesh : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMesh; // 0xB8
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshProperties*>* m_Meshes; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshProperties*>* get_Meshes()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshProperties*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_GET_MESHES_OFFSET))(this);
		}

		::System::Boolean get_SupportsIPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_GET_SUPPORTSIPE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_REFRESH_OFFSET))(this);
		}

		::System::Void OnTemplateCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_ONTEMPLATECREATED_OFFSET))(this);
		}

		::System::Void WarnAboutInvalidInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH_WARNABOUTINVALIDINPUTS_OFFSET))(this);
		}

		::System::Void _WarnAboutInvalidInputs_b__10_3(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTMESH__WARNABOUTINVALIDINPUTS_B__10_3_OFFSET))(this, m);
		}
	};
}
