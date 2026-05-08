#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace UnityEngine { class MeshFilter; }

#define FLUFFYUNDERWARE_DEVTOOLS_DUPLICATEEDITORMESH_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1B2D0070)
#define FLUFFYUNDERWARE_DEVTOOLS_DUPLICATEEDITORMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D0110)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DuplicateEditorMesh_TypeDefinitionIndex = 25895;

	class DuplicateEditorMesh : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::UnityEngine::MeshFilter* mFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DUPLICATEEDITORMESH__CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_Filter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DUPLICATEEDITORMESH_GET_FILTER_OFFSET))(this);
		}
	};
}
