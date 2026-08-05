#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_72BDD67FEA972F1C;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0950434881222BF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15768610)
#define CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_1_OFFSET UNITYSDK_OFFSET(0x15768010)
#define CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_2_OFFSET UNITYSDK_OFFSET(0x157681A0)
#define CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x15767E80)
#define CLASS_1_0950434881222BF3_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x15768740)
#define CLASS_1_0950434881222BF3_METHOD_1_E520A167F26E296D_OFFSET UNITYSDK_OFFSET(0x15768330)
#define CLASS_1_0950434881222BF3_METHOD_1_FA863C42A57AAC36_OFFSET UNITYSDK_OFFSET(0x15768500)
#define CLASS_1_0950434881222BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x15768650)

inline static constexpr unsigned int Class_1_0950434881222BF3_TypeDefinitionIndex = 58591;

class Class_1_0950434881222BF3 : public ::System::Object
{
public:
	::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_1_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_0868EF727040C390_2_OFFSET))(this);
	}

	::System::Void Method_1_E520A167F26E296D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_E520A167F26E296D_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA863C42A57AAC36(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_FA863C42A57AAC36_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_0950434881222BF3* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_0950434881222BF3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0950434881222BF3_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}
};
