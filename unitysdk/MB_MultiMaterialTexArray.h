#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_TexArrayForProperty;
class MB_TexArraySlice;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MB_MULTIMATERIALTEXARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4CD0)

inline static constexpr unsigned int MB_MultiMaterialTexArray_TypeDefinitionIndex = 90525;

class MB_MultiMaterialTexArray : public ::System::Object
{
public:
	::UnityEngine::Material* combinedMaterial; // 0x10
	::System::Collections::Generic::List_1<::MB_TexArraySlice*>* slices; // 0x18
	::System::Collections::Generic::List_1<::MB_TexArrayForProperty*>* textureProperties; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_MULTIMATERIALTEXARRAY__CTOR_OFFSET))(this);
	}
};
