#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_A6B26016D9623887_METHOD_1_122C929DA818A8A3_OFFSET UNITYSDK_OFFSET(0x13262CC0)
#define CLASS_1_A6B26016D9623887_METHOD_1_43BE527FED925D8D_OFFSET UNITYSDK_OFFSET(0x13262D70)
#define CLASS_1_A6B26016D9623887_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x132630A0)
#define CLASS_1_A6B26016D9623887__CTOR_OFFSET UNITYSDK_OFFSET(0x13262CB0)

inline static constexpr unsigned int Class_1_A6B26016D9623887_TypeDefinitionIndex = 60661;

class Class_1_A6B26016D9623887 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_1_0; // 0x10
	::UnityEngine::Renderer* Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_43BE527FED925D8D(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_43BE527FED925D8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_122C929DA818A8A3(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_122C929DA818A8A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B26016D9623887_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
