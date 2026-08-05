#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionInfo; }
namespace Foundation { class MultiVersionInfo_CheckAssetPathDelegate; }
namespace System { class String; }

#define FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CONTAINS_B__0_OFFSET UNITYSDK_OFFSET(0x1EF48E30)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CONTAINS_B__1_OFFSET UNITYSDK_OFFSET(0x1EF48EB0)
#define FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF48E20)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionDiffConfig___c__DisplayClass2_0_TypeDefinitionIndex = 7943;

	class MultiVersionDiffConfig___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Foundation::MultiVersionInfo_CheckAssetPathDelegate* __9__1; // 0x10
		::System::String* path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Contains_b__0(::Foundation::MultiVersionInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::MultiVersionInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CONTAINS_B__0_OFFSET))(this, info);
		}

		::System::Boolean _Contains_b__1(::System::String* tmpPath, ::Foundation::MultiVer type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONDIFFCONFIG___C__DISPLAYCLASS2_0__CONTAINS_B__1_OFFSET))(this, tmpPath, type);
		}
	};
}
