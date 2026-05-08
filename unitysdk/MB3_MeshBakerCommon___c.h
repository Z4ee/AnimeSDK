#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define MB3_MESHBAKERCOMMON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD02D70)
#define MB3_MESHBAKERCOMMON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD02DB0)
#define MB3_MESHBAKERCOMMON___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BD02DC0)

inline static constexpr unsigned int MB3_MeshBakerCommon___c_TypeDefinitionIndex = 84967;

class MB3_MeshBakerCommon___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::UnityEngine::GameObject*>** StaticGet___9__20_0()
	{
		return (::System::Predicate_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MB3_MeshBakerCommon___c_TypeDefinitionIndex)->GetStaticField(0x49CF0);
	}
	static ::MB3_MeshBakerCommon___c** StaticGet___9()
	{
		return (::MB3_MeshBakerCommon___c**)Il2CppClass::FromTypeDefinitionIndex(MB3_MeshBakerCommon___c_TypeDefinitionIndex)->GetStaticField(0x49CF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _PurgeNullsFromObjectsToCombine_b__20_0(::UnityEngine::GameObject* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__20_0_OFFSET))(this, obj);
	}
};
