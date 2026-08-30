#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF45CB0)
#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA___C__DISPLAYCLASS9_0__TOMESHRENDER_B__0_OFFSET UNITYSDK_OFFSET(0x1BF45D40)

namespace ScenenLightManager
{
	inline static constexpr unsigned int MeshRenderExportData___c__DisplayClass9_0_TypeDefinitionIndex = 49573;

	class MeshRenderExportData___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* mr; // 0x10
		::System::Action_1<::UnityEngine::Material*>* __9__0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* mats; // 0x20
		::System::Int32 counter; // 0x28
		::System::Int32 i; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToMeshRender_b__0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA___C__DISPLAYCLASS9_0__TOMESHRENDER_B__0_OFFSET))(this, a1);
		}
	};
}
