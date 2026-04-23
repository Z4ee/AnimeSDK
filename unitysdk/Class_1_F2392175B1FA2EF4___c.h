#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F2392175B1FA2EF4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F9CA0)
#define CLASS_1_F2392175B1FA2EF4___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x118F9CF0)
#define CLASS_1_F2392175B1FA2EF4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118F9CE0)

inline static constexpr unsigned int Class_1_F2392175B1FA2EF4___c_TypeDefinitionIndex = 60386;

class Class_1_F2392175B1FA2EF4___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2392175B1FA2EF4___c_TypeDefinitionIndex)->GetStaticField(0x22EE0);
	}
	static ::Class_1_F2392175B1FA2EF4___c** StaticGet___9()
	{
		return (::Class_1_F2392175B1FA2EF4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2392175B1FA2EF4___c_TypeDefinitionIndex)->GetStaticField(0x22EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2392175B1FA2EF4___C__CREATEITEM_B__1_0_OFFSET))(this);
	}
};
