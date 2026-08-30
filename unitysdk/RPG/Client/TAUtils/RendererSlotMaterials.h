#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/RendererSlotMaterials_SlotMaterial.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE152D90)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_OFFSET UNITYSDK_OFFSET(0xE152BD0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE152FF0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0xE152970)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xE152B60)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xE153070)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterials_TypeDefinitionIndex = 73542;

	class RendererSlotMaterials : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterials_SlotMaterial>* materials; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_7223CD34BEFCBF48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlotMaterials* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlotMaterials*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTMATERIALS_GETHASHCODE_OFFSET))(this);
		}
	};
}
