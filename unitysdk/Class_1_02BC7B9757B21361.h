#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_02BC7B9757B21361_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xB54E770)
#define CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_1_OFFSET UNITYSDK_OFFSET(0xB54E6F0)
#define CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_2_OFFSET UNITYSDK_OFFSET(0xB54E730)
#define CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_OFFSET UNITYSDK_OFFSET(0xB54E6B0)
#define CLASS_1_02BC7B9757B21361_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0xB54E670)
#define CLASS_1_02BC7B9757B21361__CTOR_OFFSET UNITYSDK_OFFSET(0xB54E780)

inline static constexpr unsigned int Class_1_02BC7B9757B21361_TypeDefinitionIndex = 81246;

class Class_1_02BC7B9757B21361 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* HADHHFFPFIL; // 0x10
	::R3::ReactiveProperty_1<::System::String*>* FADILKPGCEM; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* DFCELAPKGIB; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* OOFAMMJEKLC; // 0x28
	::Class_0_16E4307DCC419505_397* _ClickCommand_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_397* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_1()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_1_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_2()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361_METHOD_1_59C71AB384B1430D_2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_ClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02BC7B9757B21361_GET_CLICKCOMMAND_OFFSET))(this);
	}
};
