#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D12C7EAB90BB5F38___C_METHOD_1_FA2D82B7E83DEDE5_OFFSET UNITYSDK_OFFSET(0x16D2D850)
#define CLASS_2_D12C7EAB90BB5F38___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D2D800)
#define CLASS_2_D12C7EAB90BB5F38___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D2D840)

inline static constexpr unsigned int Class_2_D12C7EAB90BB5F38___c_TypeDefinitionIndex = 69034;

class Class_2_D12C7EAB90BB5F38___c : public ::System::Object
{
public:
	static ::Class_2_D12C7EAB90BB5F38___c** StaticGet___9()
	{
		return (::Class_2_D12C7EAB90BB5F38___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D12C7EAB90BB5F38___c_TypeDefinitionIndex)->GetStaticField(0x40220);
	}
	static ::System::Func_2<::System::String*, ::System::Object*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D12C7EAB90BB5F38___c_TypeDefinitionIndex)->GetStaticField(0x40228);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D12C7EAB90BB5F38___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D12C7EAB90BB5F38___C__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_FA2D82B7E83DEDE5(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D12C7EAB90BB5F38___C_METHOD_1_FA2D82B7E83DEDE5_OFFSET))(this, a1);
	}
};
