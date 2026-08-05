#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_98AF17B046D48248_CLASS_1_884958706C66AEAC_METHOD_1_2E4D207A8C5C61AF_OFFSET UNITYSDK_OFFSET(0x128D5300)
#define CLASS_1_98AF17B046D48248_CLASS_1_884958706C66AEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x128D52F0)

inline static constexpr unsigned int Class_1_98AF17B046D48248_Class_1_884958706C66AEAC_TypeDefinitionIndex = 56091;

class Class_1_98AF17B046D48248_Class_1_884958706C66AEAC : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action_1<::Foundation::AssetRequestHandle>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_CLASS_1_884958706C66AEAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2E4D207A8C5C61AF(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_CLASS_1_884958706C66AEAC_METHOD_1_2E4D207A8C5C61AF_OFFSET))(this, a1, a2);
	}
};
