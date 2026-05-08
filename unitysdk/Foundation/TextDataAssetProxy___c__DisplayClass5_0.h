#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE42D0)
#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__0_OFFSET UNITYSDK_OFFSET(0x12AE42E0)
#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__1_OFFSET UNITYSDK_OFFSET(0x12AE4730)
#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__2_OFFSET UNITYSDK_OFFSET(0x12AE43D0)
#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__3_OFFSET UNITYSDK_OFFSET(0x12AE44E0)

namespace Foundation
{
	inline static constexpr unsigned int TextDataAssetProxy___c__DisplayClass5_0_TypeDefinitionIndex = 75744;

	class TextDataAssetProxy___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Il2CppArray<::System::Byte>*>* complete; // 0x10
		::Foundation::AssetRequestCompleteDel* __9__2; // 0x18
		::System::Action_1<::Foundation::AssetRequestHandle>* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetRequestHandle _LoadBytesAsset_b__0(::Foundation::AssetPath path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__0_OFFSET))(this, path);
		}

		::System::Void _LoadBytesAsset_b__2(::UnityEngine::Object* _, ::Foundation::AssetRequestHandle completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__2_OFFSET))(this, _, completeHandle);
		}

		::System::Void _LoadBytesAsset_b__3(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__3_OFFSET))(this, handle);
		}

		::System::Void _LoadBytesAsset_b__1(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS5_0__LOADBYTESASSET_B__1_OFFSET))(this, asset, requestHandle);
		}
	};
}
