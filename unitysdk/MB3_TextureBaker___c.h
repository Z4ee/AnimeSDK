#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define MB3_TEXTUREBAKER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FB30)
#define MB3_TEXTUREBAKER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FB70)
#define MB3_TEXTUREBAKER___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__101_0_OFFSET UNITYSDK_OFFSET(0x1DA6FB80)

inline static constexpr unsigned int MB3_TextureBaker___c_TypeDefinitionIndex = 90552;

class MB3_TextureBaker___c : public ::System::Object
{
public:
	static ::MB3_TextureBaker___c** StaticGet___9()
	{
		return (::MB3_TextureBaker___c**)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureBaker___c_TypeDefinitionIndex)->GetStaticField(0x4E400);
	}
	static ::System::Predicate_1<::UnityEngine::GameObject*>** StaticGet___9__101_0()
	{
		return (::System::Predicate_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureBaker___c_TypeDefinitionIndex)->GetStaticField(0x4E408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _PurgeNullsFromObjectsToCombine_b__101_0(::UnityEngine::GameObject* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___C__PURGENULLSFROMOBJECTSTOCOMBINE_B__101_0_OFFSET))(this, obj);
	}
};
