#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_01B07B0D136F7C90_OFFSET UNITYSDK_OFFSET(0x14E9DC40)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_311C27EC07E88B49_OFFSET UNITYSDK_OFFSET(0x14E9DA20)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14E9DCD0)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14E9DAD0)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_DBB8DDF63CB9FC12_OFFSET UNITYSDK_OFFSET(0x14E9DAE0)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14E9DD80)
#define CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9DA10)

inline static constexpr unsigned int Class_3_C7183ACDF245D19F_Class_1_BB19E6B709EDA7BC_TypeDefinitionIndex = 51296;

class Class_3_C7183ACDF245D19F_Class_1_BB19E6B709EDA7BC : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_7; // 0x10
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x2D
	::System::Single Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_311C27EC07E88B49()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_311C27EC07E88B49_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBB8DDF63CB9FC12(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_DBB8DDF63CB9FC12_OFFSET))(this, a1);
	}

	::System::Void Method_1_01B07B0D136F7C90(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_01B07B0D136F7C90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7183ACDF245D19F_CLASS_1_BB19E6B709EDA7BC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
