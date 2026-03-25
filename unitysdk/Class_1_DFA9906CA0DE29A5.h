#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DFA9906CA0DE29A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x165AB1B0)
#define CLASS_1_DFA9906CA0DE29A5__CTOR_OFFSET UNITYSDK_OFFSET(0x165AB080)

inline static constexpr unsigned int Class_1_DFA9906CA0DE29A5_TypeDefinitionIndex = 28678;

class Class_1_DFA9906CA0DE29A5 : public ::System::Object
{
public:
	static ::MessagePack::IFormatterResolver** StaticGet_Field_1_0()
	{
		return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DFA9906CA0DE29A5_TypeDefinitionIndex)->GetStaticField(0x24590);
	}
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::MessagePack::Formatters::IMessagePackFormatter*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFA9906CA0DE29A5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DFA9906CA0DE29A5__CCTOR_OFFSET))();
	}
};
