#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MB_MULTIMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF71C0)

inline static constexpr unsigned int MB_MultiMaterial_TypeDefinitionIndex = 84946;

class MB_MultiMaterial : public ::System::Object
{
public:
	::UnityEngine::Material* combinedMaterial; // 0x10
	::System::Boolean considerMeshUVs; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* sourceMaterials; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_MULTIMATERIAL__CTOR_OFFSET))(this);
	}
};
