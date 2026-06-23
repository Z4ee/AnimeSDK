#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EXPRESSIONV2_OPERATORCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0BFD0)

namespace ExpressionV2
{
	inline static constexpr unsigned int OperatorCode_TypeDefinitionIndex = 80114;

	class OperatorCode : public ::System::Object
	{
	public:
		// static const ::System::UInt16 Add = 0x2B; // 0x0
		// static const ::System::UInt16 Sub = 0x2D; // 0x0
		// static const ::System::UInt16 Mul = 0x2A; // 0x0
		// static const ::System::UInt16 Div = 0x2F; // 0x0
		// static const ::System::UInt16 Not = 0x21; // 0x0
		// static const ::System::UInt16 Pow = 0x5E; // 0x0
		// static const ::System::UInt16 Mod = 0x25; // 0x0
		// static const ::System::UInt16 Great = 0x3E; // 0x0
		// static const ::System::UInt16 Less = 0x3C; // 0x0
		// static const ::System::UInt16 EQ = 0x3D3D; // 0x0
		// static const ::System::UInt16 NE = 0x213D; // 0x0
		// static const ::System::UInt16 GE = 0x3E3D; // 0x0
		// static const ::System::UInt16 LE = 0x3C3D; // 0x0
		// static const ::System::UInt16 AND = 0x2626; // 0x0
		// static const ::System::UInt16 OR = 0x7C7C; // 0x0
		// static const ::System::UInt16 Sharp = 0x23; // 0x0
		// static const ::System::UInt16 Dollar = 0x24; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_OPERATORCODE__CTOR_OFFSET))(this);
		}
	};
}
