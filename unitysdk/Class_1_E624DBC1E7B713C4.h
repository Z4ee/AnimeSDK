#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_351;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define CLASS_1_E624DBC1E7B713C4_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1C70C270)
#define CLASS_1_E624DBC1E7B713C4_METHOD_1_8F26EE4498D391BC_OFFSET UNITYSDK_OFFSET(0x1C70C200)
#define CLASS_1_E624DBC1E7B713C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C70C2C0)
#define CLASS_1_E624DBC1E7B713C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70C2B0)

inline static constexpr unsigned int Class_1_E624DBC1E7B713C4_TypeDefinitionIndex = 43995;

class Class_1_E624DBC1E7B713C4 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_351** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_0_16E4307DCC419505_351**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E624DBC1E7B713C4_TypeDefinitionIndex)->GetStaticField(0x13F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E624DBC1E7B713C4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E624DBC1E7B713C4__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_8F26EE4498D391BC(::System::String* a1, ::RPG::GameCore::DynamicValue*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicValue*&))((::PBYTE)hIl2Cpp + CLASS_1_E624DBC1E7B713C4_METHOD_1_8F26EE4498D391BC_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E624DBC1E7B713C4_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
