#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_METHOD_8_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x14882E20)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x14882880)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x14883160)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14883220)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x14883210)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x14883330)

namespace MoleMole
{
	inline static constexpr unsigned int DebugPathGuidePoints_TypeDefinitionIndex = 42770;

	class DebugPathGuidePoints : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_8_0()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(DebugPathGuidePoints_TypeDefinitionIndex)->GetStaticField(0x42520);
		}
		::UnityEngine::UI::Extension::PathGuide* PathGuideComponent; // 0xF8
		::UnityEngine::UI::Extension::PathGuide* Field_8_1; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS__CCTOR_OFFSET))();
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS___BASE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Method_8_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_METHOD_8_1947BC35B7A7FCB8_OFFSET))(this);
		}
	};
}
