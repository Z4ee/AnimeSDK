#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_B48EE42F47680F98;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_185D35ED12C1A755___C_METHOD_1_C7C4399D2E9567C9_OFFSET UNITYSDK_OFFSET(0x1F2DBB10)
#define CLASS_3_185D35ED12C1A755___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2DBAC0)
#define CLASS_3_185D35ED12C1A755___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DBB00)

inline static constexpr unsigned int Class_3_185D35ED12C1A755___c_TypeDefinitionIndex = 29554;

class Class_3_185D35ED12C1A755___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_4_B48EE42F47680F98*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_4_B48EE42F47680F98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_185D35ED12C1A755___c_TypeDefinitionIndex)->GetStaticField(0x24B70);
	}
	static ::Class_3_185D35ED12C1A755___c** StaticGet___9()
	{
		return (::Class_3_185D35ED12C1A755___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_185D35ED12C1A755___c_TypeDefinitionIndex)->GetStaticField(0x24B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_185D35ED12C1A755___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_185D35ED12C1A755___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7C4399D2E9567C9(::Class_4_B48EE42F47680F98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B48EE42F47680F98*))((::PBYTE)hIl2Cpp + CLASS_3_185D35ED12C1A755___C_METHOD_1_C7C4399D2E9567C9_OFFSET))(this, a1);
	}
};
