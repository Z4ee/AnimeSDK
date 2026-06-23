#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_MaterialAndUVRect;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define MB_ATLASESANDRECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E36FE80)

inline static constexpr unsigned int MB_AtlasesAndRects_TypeDefinitionIndex = 90518;

class MB_AtlasesAndRects : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Texture2D*>* atlases; // 0x10
	::System::Collections::Generic::List_1<::MB_MaterialAndUVRect*>* mat2rect_map; // 0x18
	::Il2CppArray<::System::String*>* texPropertyNames; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_ATLASESANDRECTS__CTOR_OFFSET))(this);
	}
};
