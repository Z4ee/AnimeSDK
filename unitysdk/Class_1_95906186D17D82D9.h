#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_95906186D17D82D9_METHOD_1_2CC63F5CD8651171_OFFSET UNITYSDK_OFFSET(0x1836DCB0)

inline static constexpr unsigned int Class_1_95906186D17D82D9_TypeDefinitionIndex = 69783;

class Class_1_95906186D17D82D9 : public ::System::Object
{
public:
	// static const ::System::String* DLIJLNILECD; // 0x0

	static ::System::Void Method_1_2CC63F5CD8651171(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95906186D17D82D9_METHOD_1_2CC63F5CD8651171_OFFSET))(a1, a2);
	}
};
