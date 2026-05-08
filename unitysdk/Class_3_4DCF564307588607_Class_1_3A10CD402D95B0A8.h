#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_4DCF564307588607_CLASS_1_3A10CD402D95B0A8_METHOD_1_1EEFFEB2AAC3855F_OFFSET UNITYSDK_OFFSET(0x12464820)
#define CLASS_3_4DCF564307588607_CLASS_1_3A10CD402D95B0A8__CTOR_OFFSET UNITYSDK_OFFSET(0x12464810)

inline static constexpr unsigned int Class_3_4DCF564307588607_Class_1_3A10CD402D95B0A8_TypeDefinitionIndex = 56710;

class Class_3_4DCF564307588607_Class_1_3A10CD402D95B0A8 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DCF564307588607_CLASS_1_3A10CD402D95B0A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1EEFFEB2AAC3855F(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4DCF564307588607_CLASS_1_3A10CD402D95B0A8_METHOD_1_1EEFFEB2AAC3855F_OFFSET))(this, a1, a2);
	}
};
