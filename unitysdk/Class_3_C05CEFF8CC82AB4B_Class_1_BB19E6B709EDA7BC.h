#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_01B07B0D136F7C90_OFFSET UNITYSDK_OFFSET(0xFC09860)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_311C27EC07E88B49_OFFSET UNITYSDK_OFFSET(0xFC09590)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFC09640)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xFC09580)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_DBB8DDF63CB9FC12_OFFSET UNITYSDK_OFFSET(0xFC096F0)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFC09850)
#define CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC__CTOR_OFFSET UNITYSDK_OFFSET(0xFC09570)

inline static constexpr unsigned int Class_3_C05CEFF8CC82AB4B_Class_1_BB19E6B709EDA7BC_TypeDefinitionIndex = 53263;

class Class_3_C05CEFF8CC82AB4B_Class_1_BB19E6B709EDA7BC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::EntityHandle Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_4; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_311C27EC07E88B49()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_311C27EC07E88B49_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_DBB8DDF63CB9FC12(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_DBB8DDF63CB9FC12_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_01B07B0D136F7C90(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C05CEFF8CC82AB4B_CLASS_1_BB19E6B709EDA7BC_METHOD_1_01B07B0D136F7C90_OFFSET))(this, a1, a2, a3, a4);
	}
};
