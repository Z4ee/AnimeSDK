#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;

#define MB_TEXTUREARRAYRESULTMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03BBC0)

inline static constexpr unsigned int MB_TextureArrayResultMaterial_TypeDefinitionIndex = 84945;

class MB_TextureArrayResultMaterial : public ::System::Object
{
public:
	::Il2CppArray<::MB_AtlasesAndRects*>* slices; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYRESULTMATERIAL__CTOR_OFFSET))(this);
	}
};
