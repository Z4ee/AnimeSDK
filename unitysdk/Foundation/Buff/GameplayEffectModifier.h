#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_42;
class Class_1_446FF0195498B714;
namespace Foundation { class IEntity; }

#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_30E165588BE6CE87_OFFSET UNITYSDK_OFFSET(0xA5E290)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_416DF9B220F27517_OFFSET UNITYSDK_OFFSET(0xA5E270)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0xA5E280)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E250)

namespace Foundation::Buff
{
	inline static constexpr unsigned int GameplayEffectModifier_TypeDefinitionIndex = 19590;

	struct alignas(8) GameplayEffectModifier
	{
		::Enum_3_CE80FD07999C5845 AttributeSetEnum; // 0x10
		::Enum_3_2C704E2262533CBD AttributeShortEnum; // 0x14
		::System::Single ModiferMagnitude; // 0x18
		::Enum_3_C460945F1F3C12F5 Operation; // 0x1C
		::Class_0_16E4307DCC419505_42* MMC; // 0x20

		::System::Void _ctor(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_2C704E2262533CBD a2, ::System::Single a3, ::Enum_3_C460945F1F3C12F5 a4, ::Class_0_16E4307DCC419505_42* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single, ::Enum_3_C460945F1F3C12F5, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single Method_2_416DF9B220F27517(::Class_1_446FF0195498B714* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::Class_1_446FF0195498B714*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_416DF9B220F27517_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C6E4AB6C40FAF7DC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
		}

		::System::Void Method_2_30E165588BE6CE87(::Foundation::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_30E165588BE6CE87_OFFSET))(this, a1);
		}
	};
}
