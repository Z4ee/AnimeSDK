#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIAdaptConfigItem;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_871BB9AEC950A330___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC412F80)
#define CLASS_1_871BB9AEC950A330___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC412FB0)
#define CLASS_1_871BB9AEC950A330___C___LOADROOTADAPTOPERATIONS_B__12_0_OFFSET UNITYSDK_OFFSET(0xC412FC0)

inline static constexpr unsigned int Class_1_871BB9AEC950A330___c_TypeDefinitionIndex = 72951;

class Class_1_871BB9AEC950A330___c : public ::System::Object
{
public:
	static ::System::Func_2<::MonoUIAdaptConfigItem*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::MonoUIAdaptConfigItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_871BB9AEC950A330___c_TypeDefinitionIndex)->GetStaticField(0x59840);
	}
	static ::Class_1_871BB9AEC950A330___c** StaticGet___9()
	{
		return (::Class_1_871BB9AEC950A330___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_871BB9AEC950A330___c_TypeDefinitionIndex)->GetStaticField(0x59848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __LoadRootAdaptOperations_b__12_0(::MonoUIAdaptConfigItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIAdaptConfigItem*))((::PBYTE)hIl2Cpp + CLASS_1_871BB9AEC950A330___C___LOADROOTADAPTOPERATIONS_B__12_0_OFFSET))(this, a1);
	}
};
