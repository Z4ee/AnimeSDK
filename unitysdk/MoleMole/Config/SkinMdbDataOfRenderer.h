#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_SKINMDBDATAOFRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1920FEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkinMdbDataOfRenderer_TypeDefinitionIndex = 61998;

	class SkinMdbDataOfRenderer : public ::System::Object
	{
	public:
		::System::String* RendererName; // 0x10
		::Il2CppArray<::System::String*>* ClothNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINMDBDATAOFRENDERER__CTOR_OFFSET))(this);
		}
	};
}
