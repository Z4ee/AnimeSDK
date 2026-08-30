#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/RendererSlotMaterialPaths_SlotMaterialPath.h"
#include "unitysdk/RPG/Client/TAUtils/RendererSlotMaterials_SlotMaterial.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE1525F0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_OFFSET UNITYSDK_OFFSET(0xE152430)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE152850)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xE151E70)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xE152150)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE1523E0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0xE1521C0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS__CTOR_OFFSET UNITYSDK_OFFSET(0xE1528D0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterialPaths_TypeDefinitionIndex = 73544;

	class RendererSlotMaterialPaths : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterialPaths_SlotMaterialPath>* materialPaths; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterials_SlotMaterial>* _materials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterials_SlotMaterial>* get_materials()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterials_SlotMaterial>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void Method_1_F773D945760BF918(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_F773D945760BF918_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlotMaterialPaths* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlotMaterialPaths*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GETHASHCODE_OFFSET))(this);
		}
	};
}
