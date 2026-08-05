#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class VersionFileInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VERSIONFILEINFOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F786560)

namespace Foundation
{
	inline static constexpr unsigned int VersionFileInfoList_TypeDefinitionIndex = 8134;

	class VersionFileInfoList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* versions_list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSIONFILEINFOLIST__CTOR_OFFSET))(this);
		}
	};
}
