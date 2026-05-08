#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_FILEHELPER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00E550)
#define FOUNDATION_FILEHELPER___C__DISPLAYCLASS7_0__LOADTEXTFILEFROMBINARYASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C00E560)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper___c__DisplayClass7_0_TypeDefinitionIndex = 7949;

	class FileHelper___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Il2CppArray<::System::Byte>*>* callback; // 0x10
		::System::Boolean noError; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadTextFileFromBinaryAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DISPLAYCLASS7_0__LOADTEXTFILEFROMBINARYASYNC_B__0_OFFSET))(this, asset, requestHandle);
		}
	};
}
