#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F9870DE8592C94DF;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_F9870DE8592C94DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9D3F70)
#define CLASS_2_F9870DE8592C94DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D3FA0)
#define CLASS_2_F9870DE8592C94DF___C___CREATETRIGGER_B__2_0_OFFSET UNITYSDK_OFFSET(0xA9D3FB0)

inline static constexpr unsigned int Class_2_F9870DE8592C94DF___c_TypeDefinitionIndex = 62757;

class Class_2_F9870DE8592C94DF___c : public ::System::Object
{
public:
	static ::Class_2_F9870DE8592C94DF___c** StaticGet___9()
	{
		return (::Class_2_F9870DE8592C94DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9870DE8592C94DF___c_TypeDefinitionIndex)->GetStaticField(0x48D40);
	}
	static ::System::Action_2<::Class_2_F9870DE8592C94DF*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_2_F9870DE8592C94DF*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F9870DE8592C94DF___c_TypeDefinitionIndex)->GetStaticField(0x48D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__2_0(::Class_2_F9870DE8592C94DF* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F9870DE8592C94DF*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_F9870DE8592C94DF___C___CREATETRIGGER_B__2_0_OFFSET))(this, self, ent);
	}
};
