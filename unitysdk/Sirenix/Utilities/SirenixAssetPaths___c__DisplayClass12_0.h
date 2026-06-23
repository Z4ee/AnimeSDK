#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_UTILITIES_SIRENIXASSETPATHS___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE560C0)
#define SIRENIX_UTILITIES_SIRENIXASSETPATHS___C__DISPLAYCLASS12_0__TOPATHSAFESTRING_B__0_OFFSET UNITYSDK_OFFSET(0x1DE560D0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixAssetPaths___c__DisplayClass12_0_TypeDefinitionIndex = 6508;

	class SirenixAssetPaths___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* invalids; // 0x10
		::System::Char replace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Char _ToPathSafeString_b__0(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS___C__DISPLAYCLASS12_0__TOPATHSAFESTRING_B__0_OFFSET))(this, c);
		}
	};
}
