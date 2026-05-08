#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CollisionDetect.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_TEXTUREDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x16AA9710)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16AA97D0)
#define MOLEMOLE_CONFIG_TEXTUREDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9840)
#define MOLEMOLE_CONFIG_TEXTUREDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16AA9870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TextureDetect_TypeDefinitionIndex = 39006;

	class TextureDetect : public ::MoleMole::Config::CollisionDetect
	{
	public:
		::Il2CppArray<::System::Byte>* data; // 0x80
		::System::Int32 textureHeight; // 0x88
		::System::Int32 textureWidth; // 0x8C
		::System::Single hitRatio; // 0x90
		::System::Single height; // 0x94
		::System::Single width; // 0x98
		::System::Single distance; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
