#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/Foundation/MultiVerSuffix.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionInfo_CheckAssetPathDelegate; }
namespace Foundation { class MultiVersionInfo_HandleAssetPathDelegate; }
namespace Foundation { class UlongSerializable; }
namespace System { class String; }

#define FOUNDATION_MULTIVERSIONINFO_ADDMULTIVERPATH_OFFSET UNITYSDK_OFFSET(0x1DE36A80)
#define FOUNDATION_MULTIVERSIONINFO_CHECKFOREACHPATHS_OFFSET UNITYSDK_OFFSET(0x1DE37750)
#define FOUNDATION_MULTIVERSIONINFO_FOREACHPATHS_OFFSET UNITYSDK_OFFSET(0x1DE36F20)
#define FOUNDATION_MULTIVERSIONINFO_GETMULTIVERSUFFIX_OFFSET UNITYSDK_OFFSET(0x1DE38CF0)
#define FOUNDATION_MULTIVERSIONINFO_GETMULTIVERTPATH_OFFSET UNITYSDK_OFFSET(0x1DE37530)
#define FOUNDATION_MULTIVERSIONINFO_ISALLNOTNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x1DE37B50)
#define FOUNDATION_MULTIVERSIONINFO_ISSUFFIXCORRECT_1_OFFSET UNITYSDK_OFFSET(0x1DE37D90)
#define FOUNDATION_MULTIVERSIONINFO_ISSUFFIXCORRECT_OFFSET UNITYSDK_OFFSET(0x1DE37C70)
#define FOUNDATION_MULTIVERSIONINFO_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DE37A30)
#define FOUNDATION_MULTIVERSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE36DE0)
#define FOUNDATION_MULTIVERSIONINFO_UPDATEHASH_OFFSET UNITYSDK_OFFSET(0x1DE371E0)
#define FOUNDATION_MULTIVERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE369A0)
#define FOUNDATION_MULTIVERSIONINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE38D70)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo_TypeDefinitionIndex = 7822;

	class MultiVersionInfo : public ::System::Object
	{
	public:
		// static const ::System::String* SUFFIX_CN; // 0x0
		::System::String* cnPath; // 0x10
		::System::String* basePath; // 0x18
		::Foundation::UlongSerializable* cnPathHash; // 0x20
		::Foundation::UlongSerializable* basePathHash; // 0x28

		::System::Void _ctor(::Foundation::MultiVer multiVerType, ::System::String* basePath, ::System::String* multiVerPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVer, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO__CTOR_OFFSET))(this, multiVerType, basePath, multiVerPath);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void UpdateHash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_UPDATEHASH_OFFSET))(this);
		}

		::System::Void AddMultiVerPath(::Foundation::MultiVer multiVerType, ::System::String* multiVerPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVer, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ADDMULTIVERPATH_OFFSET))(this, multiVerType, multiVerPath);
		}

		::System::String* GetMultiVertPath(::Foundation::MultiVer multiVerType)
		{
			return ((::System::String*(*)(::PVOID, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_GETMULTIVERTPATH_OFFSET))(this, multiVerType);
		}

		::System::Void ForEachPaths(::Foundation::MultiVersionInfo_HandleAssetPathDelegate* delegate)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionInfo_HandleAssetPathDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_FOREACHPATHS_OFFSET))(this, delegate);
		}

		::System::Boolean CheckForEachPaths(::Foundation::MultiVersionInfo_CheckAssetPathDelegate* delegate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::MultiVersionInfo_CheckAssetPathDelegate*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_CHECKFOREACHPATHS_OFFSET))(this, delegate);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsAllNOTNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ISALLNOTNULLOREMPTY_OFFSET))(this);
		}

		::System::Boolean IsSuffixCorrect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ISSUFFIXCORRECT_OFFSET))(this);
		}

		static ::Foundation::MultiVerSuffix IsSuffixCorrect_1(::System::String* path, ::Foundation::MultiVer multiVerType)
		{
			return ((::Foundation::MultiVerSuffix(*)(::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ISSUFFIXCORRECT_1_OFFSET))(path, multiVerType);
		}

		static ::System::String* GetMultiVerSuffix(::Foundation::MultiVer multiVerType)
		{
			return ((::System::String*(*)(::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_GETMULTIVERSUFFIX_OFFSET))(multiVerType);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
