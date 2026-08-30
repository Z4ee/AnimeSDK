#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_4D5392646284AC8C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE891AD0)
#define CLASS_2_4D5392646284AC8C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE891B10)
#define CLASS_2_4D5392646284AC8C___C___CLOSESCREENTRANSFER_B__15_0_OFFSET UNITYSDK_OFFSET(0xE891B20)

inline static constexpr unsigned int Class_2_4D5392646284AC8C___c_TypeDefinitionIndex = 53092;

class Class_2_4D5392646284AC8C___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5392646284AC8C___c_TypeDefinitionIndex)->GetStaticField(0x4A00);
	}
	static ::Class_2_4D5392646284AC8C___c** StaticGet___9()
	{
		return (::Class_2_4D5392646284AC8C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5392646284AC8C___c_TypeDefinitionIndex)->GetStaticField(0x4A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5392646284AC8C___C___CLOSESCREENTRANSFER_B__15_0_OFFSET))(this);
	}
};
