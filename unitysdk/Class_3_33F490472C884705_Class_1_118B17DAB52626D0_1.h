#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_90972F4C8EBA0D9A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_35D50070BC469EAB;
namespace System { class String; }

#define CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1_METHOD_1_6FE8435CF1B8A925_OFFSET UNITYSDK_OFFSET(0xFD240E0)
#define CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1_METHOD_1_9C012FBA6F1889DE_OFFSET UNITYSDK_OFFSET(0xFD240B0)
#define CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFD240A0)

inline static constexpr unsigned int Class_3_33F490472C884705_Class_1_118B17DAB52626D0_1_TypeDefinitionIndex = 41128;

class Class_3_33F490472C884705_Class_1_118B17DAB52626D0_1 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9C012FBA6F1889DE(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1_METHOD_1_9C012FBA6F1889DE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6FE8435CF1B8A925(::Enum_3_90972F4C8EBA0D9A a1, ::Enum_3_90972F4C8EBA0D9A a2, ::Class_1_35D50070BC469EAB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90972F4C8EBA0D9A, ::Enum_3_90972F4C8EBA0D9A, ::Class_1_35D50070BC469EAB*))((::PBYTE)hIl2Cpp + CLASS_3_33F490472C884705_CLASS_1_118B17DAB52626D0_1_METHOD_1_6FE8435CF1B8A925_OFFSET))(this, a1, a2, a3);
	}
};
