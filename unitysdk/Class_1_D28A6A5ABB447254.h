#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define CLASS_1_D28A6A5ABB447254__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF802360)
#define CLASS_1_D28A6A5ABB447254__CTOR_OFFSET UNITYSDK_OFFSET(0xF8021B0)

inline static constexpr unsigned int Class_1_D28A6A5ABB447254_TypeDefinitionIndex = 82866;

class Class_1_D28A6A5ABB447254 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_0; // 0x10
	::UnityEngine::Texture* Field_1_1; // 0x30

	::System::Void _ctor(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_D28A6A5ABB447254__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_D28A6A5ABB447254__CTOR_1_OFFSET))(this, a1);
	}
};
