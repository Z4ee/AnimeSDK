#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142F8430)
#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x142F8440)
#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__INIT_B__1_OFFSET UNITYSDK_OFFSET(0x142F85F0)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool___c__DisplayClass28_0_TypeDefinitionIndex = 62278;

	class ReservedObjectPool___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Foundation::AssetRequestHandle>* preloadFunc; // 0x10
		::Foundation::ReservedObjectPool* __4__this; // 0x18
		::System::Int32 preloadCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__INIT_B__0_OFFSET))(this, handle);
		}

		::System::Void _Init_b__1(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_0__INIT_B__1_OFFSET))(this, asset, handle);
		}
	};
}
