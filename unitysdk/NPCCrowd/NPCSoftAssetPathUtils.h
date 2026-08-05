#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NPCCROWD_NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x10670130)
#define NPCCROWD_NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x10670190)
#define NPCCROWD_NPCSOFTASSETPATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x106701F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathUtils_TypeDefinitionIndex = 47717;

	class NPCSoftAssetPathUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsNpcUnloadImmediate_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCSoftAssetPathUtils_TypeDefinitionIndex)->GetStaticField(0x10E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsNpcUnloadImmediate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET))();
		}

		static ::System::Void set_IsNpcUnloadImmediate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET))(value);
		}
	};
}
