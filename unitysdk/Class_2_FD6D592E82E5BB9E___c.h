#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FD6D592E82E5BB9E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1541C6C0)
#define CLASS_2_FD6D592E82E5BB9E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1541C700)
#define CLASS_2_FD6D592E82E5BB9E___C___ROLLDICEBYPRESET_B__8_0_OFFSET UNITYSDK_OFFSET(0x1541C710)

inline static constexpr unsigned int Class_2_FD6D592E82E5BB9E___c_TypeDefinitionIndex = 35818;

class Class_2_FD6D592E82E5BB9E___c : public ::System::Object
{
public:
	static ::Class_2_FD6D592E82E5BB9E___c** StaticGet___9()
	{
		return (::Class_2_FD6D592E82E5BB9E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD6D592E82E5BB9E___c_TypeDefinitionIndex)->GetStaticField(0x1A3E0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD6D592E82E5BB9E___c_TypeDefinitionIndex)->GetStaticField(0x1A3E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E___C__CTOR_OFFSET))(this);
	}

	::System::String* __RollDiceByPreset_b__8_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E___C___ROLLDICEBYPRESET_B__8_0_OFFSET))(this, a1);
	}
};
