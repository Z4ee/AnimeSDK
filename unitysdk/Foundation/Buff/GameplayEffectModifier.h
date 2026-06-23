#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_42;
class Class_1_CED4C4BADCBE81C2;
namespace Foundation { class IEntity; }

#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_30E165588BE6CE87_OFFSET UNITYSDK_OFFSET(0x9E8E00)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_416DF9B220F27517_OFFSET UNITYSDK_OFFSET(0x9E8E10)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x9E8E20)
#define FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8DE0)

namespace Foundation::Buff
{
	inline static constexpr unsigned int GameplayEffectModifier_TypeDefinitionIndex = 19245;

	struct alignas(8) GameplayEffectModifier
	{
		::Enum_3_CE80FD07999C5845 AttributeSetEnum; // 0x10
		::Enum_3_3590B72267A04337 AttributeShortEnum; // 0x14
		::System::Single ModiferMagnitude; // 0x18
		::Enum_3_C460945F1F3C12F5 Operation; // 0x1C
		::Class_0_16E4307DCC419505_42* MMC; // 0x20

		::System::Void _ctor(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_3590B72267A04337 a2, ::System::Single a3, ::Enum_3_C460945F1F3C12F5 a4, ::Class_0_16E4307DCC419505_42* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single, ::Enum_3_C460945F1F3C12F5, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_30E165588BE6CE87(::Foundation::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_30E165588BE6CE87_OFFSET))(this, a1);
		}

		::System::Single Method_2_416DF9B220F27517(::Class_1_CED4C4BADCBE81C2* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::Class_1_CED4C4BADCBE81C2*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_416DF9B220F27517_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C6E4AB6C40FAF7DC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUFF_GAMEPLAYEFFECTMODIFIER_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
		}
	};
}
