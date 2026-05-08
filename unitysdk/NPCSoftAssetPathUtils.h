#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xEC910F0)
#define NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xEC91150)
#define NPCSOFTASSETPATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC911B0)

inline static constexpr unsigned int NPCSoftAssetPathUtils_TypeDefinitionIndex = 40959;

class NPCSoftAssetPathUtils : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__IsNpcUnloadImmediate_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCSoftAssetPathUtils_TypeDefinitionIndex)->GetStaticField(0xC7D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCSOFTASSETPATHUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_IsNpcUnloadImmediate()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET))();
	}

	static ::System::Void set_IsNpcUnloadImmediate(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET))(value);
	}
};
