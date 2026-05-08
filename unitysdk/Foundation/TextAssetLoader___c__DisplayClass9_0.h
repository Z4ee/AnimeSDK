#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEAD00)
#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1BAEAD10)
#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1BAEB170)
#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__2_OFFSET UNITYSDK_OFFSET(0x1BAEAE00)
#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__3_OFFSET UNITYSDK_OFFSET(0x1BAEAF10)

namespace Foundation
{
	inline static constexpr unsigned int TextAssetLoader___c__DisplayClass9_0_TypeDefinitionIndex = 7782;

	class TextAssetLoader___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Foundation::AssetRequestCompleteDel* __9__2; // 0x10
		::System::Action_1<::Il2CppArray<::System::Byte>*>* complete; // 0x18
		::System::String* filename; // 0x20
		::System::Action_1<::Foundation::AssetRequestHandle>* __9__3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetRequestHandle _Load_b__0(::Foundation::AssetPath p)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__0_OFFSET))(this, p);
		}

		::System::Void _Load_b__2(::UnityEngine::Object* _, ::Foundation::AssetRequestHandle completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__2_OFFSET))(this, _, completeHandle);
		}

		::System::Void _Load_b__3(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__3_OFFSET))(this, handle);
		}

		::System::Void _Load_b__1(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS9_0__LOAD_B__1_OFFSET))(this, asset, requestHandle);
		}
	};
}
