#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6033F6769DF6DA2F;
namespace System { class Action; }

#define CLASS_1_6033F6769DF6DA2F_CLASS_1_DB6E91C0E8D3B6ED_METHOD_1_B2A9BDCD63B0BFDB_OFFSET UNITYSDK_OFFSET(0x1AC1B950)
#define CLASS_1_6033F6769DF6DA2F_CLASS_1_DB6E91C0E8D3B6ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1B0C0)

inline static constexpr unsigned int Class_1_6033F6769DF6DA2F_Class_1_DB6E91C0E8D3B6ED_TypeDefinitionIndex = 8842;

class Class_1_6033F6769DF6DA2F_Class_1_DB6E91C0E8D3B6ED : public ::System::Object
{
public:
	::Class_1_6033F6769DF6DA2F* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6033F6769DF6DA2F_CLASS_1_DB6E91C0E8D3B6ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B2A9BDCD63B0BFDB(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_6033F6769DF6DA2F_CLASS_1_DB6E91C0E8D3B6ED_METHOD_1_B2A9BDCD63B0BFDB_OFFSET))(this, a1);
	}
};
