#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionInfo_HandleAssetPathDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC30A0)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS3_0__GETASSETPATHS_B__0_OFFSET UNITYSDK_OFFSET(0x1DCC30B0)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionDiffConfig___c__DisplayClass3_0_TypeDefinitionIndex = 7738;

	class MultiVersionDiffConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Foundation::MultiVersionInfo_HandleAssetPathDelegate* __9__0; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* result; // 0x18
		::Foundation::MultiVer currentType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetAssetPaths_b__0(::System::String* path, ::Foundation::MultiVer type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS3_0__GETASSETPATHS_B__0_OFFSET))(this, path, type);
		}
	};
}
