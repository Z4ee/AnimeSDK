#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7291C38274750BA2_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xC527470)
#define CLASS_1_7291C38274750BA2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC527460)

inline static constexpr unsigned int Class_1_7291C38274750BA2_1_TypeDefinitionIndex = 49575;

class Class_1_7291C38274750BA2_1 : public ::System::Object
{
public:
	::System::String* LFLPOOCDHDP; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
