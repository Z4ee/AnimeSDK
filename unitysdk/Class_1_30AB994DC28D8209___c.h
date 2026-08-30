#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_30AB994DC28D8209___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF6F30)
#define CLASS_1_30AB994DC28D8209___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF6F60)
#define CLASS_1_30AB994DC28D8209___C___CLOSESCREENTRANSFER_B__24_0_OFFSET UNITYSDK_OFFSET(0x16EF6F70)

inline static constexpr unsigned int Class_1_30AB994DC28D8209___c_TypeDefinitionIndex = 66180;

class Class_1_30AB994DC28D8209___c : public ::System::Object
{
public:
	static ::Class_1_30AB994DC28D8209___c** StaticGet___9()
	{
		return (::Class_1_30AB994DC28D8209___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB994DC28D8209___c_TypeDefinitionIndex)->GetStaticField(0x45B0);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AB994DC28D8209___c_TypeDefinitionIndex)->GetStaticField(0x45B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__24_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AB994DC28D8209___C___CLOSESCREENTRANSFER_B__24_0_OFFSET))(this);
	}
};
