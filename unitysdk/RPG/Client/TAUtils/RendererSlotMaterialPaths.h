#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/RendererSlotMaterialPaths_SlotMaterialPath.h"
#include "unitysdk/RPG/Client/TAUtils/RendererSlotMaterials_SlotMaterial.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB275600)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_EQUALS_OFFSET UNITYSDK_OFFSET(0xB275530)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB275780)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB274F20)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB2751E0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2754E0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0xB275250)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS__CTOR_OFFSET UNITYSDK_OFFSET(0xB275800)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2758A0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2758B0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterialPaths_TypeDefinitionIndex = 67785;

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

		::System::Void Method_1_FDF9B21BA16000B3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS_METHOD_1_FDF9B21BA16000B3_OFFSET))(this, a1);
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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALPATHS___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
