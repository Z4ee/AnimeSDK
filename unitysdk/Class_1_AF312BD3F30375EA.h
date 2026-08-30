#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AF312BD3F30375EA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA52240)
#define CLASS_1_AF312BD3F30375EA_METHOD_1_21CB0D991D0749D9_OFFSET UNITYSDK_OFFSET(0xBA521B0)
#define CLASS_1_AF312BD3F30375EA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA52290)

inline static constexpr unsigned int Class_1_AF312BD3F30375EA_TypeDefinitionIndex = 77080;

class Class_1_AF312BD3F30375EA : public ::System::Object
{
public:
	::System::Object* LBJJPCCEHLF; // 0x10
	::RPG::GameCore::ChimeraDuelEventType GMPGDEINODK; // 0x18
	::System::Int32 MMAMPEKECPI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF312BD3F30375EA__CTOR_OFFSET))(this);
	}

	static ::Class_1_AF312BD3F30375EA* Method_1_21CB0D991D0749D9(::System::Int32 a1, ::RPG::GameCore::ChimeraDuelEventType a2, ::System::Object* a3)
	{
		return ((::Class_1_AF312BD3F30375EA*(*)(::System::Int32, ::RPG::GameCore::ChimeraDuelEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AF312BD3F30375EA_METHOD_1_21CB0D991D0749D9_OFFSET))(a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF312BD3F30375EA_CLEAR_OFFSET))(this);
	}
};
