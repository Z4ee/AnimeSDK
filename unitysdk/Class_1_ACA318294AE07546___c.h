#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F214E1A5E1FAFFB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_ACA318294AE07546___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF1F180)
#define CLASS_1_ACA318294AE07546___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F1C0)
#define CLASS_1_ACA318294AE07546___C__GETLEVELGROUPSORDERED_B__4_0_OFFSET UNITYSDK_OFFSET(0xBF1F1D0)

inline static constexpr unsigned int Class_1_ACA318294AE07546___c_TypeDefinitionIndex = 82088;

class Class_1_ACA318294AE07546___c : public ::System::Object
{
public:
	static ::Class_1_ACA318294AE07546___c** StaticGet___9()
	{
		return (::Class_1_ACA318294AE07546___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACA318294AE07546___c_TypeDefinitionIndex)->GetStaticField(0x59090);
	}
	static ::System::Func_2<::Class_1_2F214E1A5E1FAFFB*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_2F214E1A5E1FAFFB*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACA318294AE07546___c_TypeDefinitionIndex)->GetStaticField(0x59098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ACA318294AE07546___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA318294AE07546___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetLevelGroupsOrdered_b__4_0(::Class_1_2F214E1A5E1FAFFB* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_2F214E1A5E1FAFFB*))((::PBYTE)hIl2Cpp + CLASS_1_ACA318294AE07546___C__GETLEVELGROUPSORDERED_B__4_0_OFFSET))(this, a1);
	}
};
