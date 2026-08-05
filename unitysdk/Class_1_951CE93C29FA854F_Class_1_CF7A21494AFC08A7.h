#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class Object; }

#define CLASS_1_951CE93C29FA854F_CLASS_1_CF7A21494AFC08A7_METHOD_1_8D18E625F22CD033_OFFSET UNITYSDK_OFFSET(0x13E88270)
#define CLASS_1_951CE93C29FA854F_CLASS_1_CF7A21494AFC08A7__CTOR_OFFSET UNITYSDK_OFFSET(0x13E88260)

inline static constexpr unsigned int Class_1_951CE93C29FA854F_Class_1_CF7A21494AFC08A7_TypeDefinitionIndex = 49005;

class Class_1_951CE93C29FA854F_Class_1_CF7A21494AFC08A7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_CLASS_1_CF7A21494AFC08A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D18E625F22CD033(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_951CE93C29FA854F_CLASS_1_CF7A21494AFC08A7_METHOD_1_8D18E625F22CD033_OFFSET))(this, a1, a2);
	}
};
