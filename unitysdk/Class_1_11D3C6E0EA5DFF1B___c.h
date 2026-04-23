#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9850514C0F89B91A;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_11D3C6E0EA5DFF1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E402B0)
#define CLASS_1_11D3C6E0EA5DFF1B___C__CLEANUP_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E40300)
#define CLASS_1_11D3C6E0EA5DFF1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E402F0)

inline static constexpr unsigned int Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex = 38067;

class Class_1_11D3C6E0EA5DFF1B___c : public ::System::Object
{
public:
	static ::Class_1_11D3C6E0EA5DFF1B___c** StaticGet___9()
	{
		return (::Class_1_11D3C6E0EA5DFF1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x14240);
	}
	static ::System::Action_1<::Class_2_9850514C0F89B91A*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_2_9850514C0F89B91A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11D3C6E0EA5DFF1B___c_TypeDefinitionIndex)->GetStaticField(0x14248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CTOR_OFFSET))(this);
	}

	::System::Void _Cleanup_b__3_0(::Class_2_9850514C0F89B91A* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B___C__CLEANUP_B__3_0_OFFSET))(this, entity);
	}
};
