#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_3D4454504DEEEB52_METHOD_1_411FD3F19D3B70D6_OFFSET UNITYSDK_OFFSET(0x12DC9F90)
#define CLASS_2_C219469667DBAA6A_CLASS_1_3D4454504DEEEB52__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC9F80)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_3D4454504DEEEB52_TypeDefinitionIndex = 65652;

class Class_2_C219469667DBAA6A_Class_1_3D4454504DEEEB52 : public ::System::Object
{
public:
	::Foundation::AssetRequestCompleteDel* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_3D4454504DEEEB52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_411FD3F19D3B70D6(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_3D4454504DEEEB52_METHOD_1_411FD3F19D3B70D6_OFFSET))(this, a1, a2);
	}
};
