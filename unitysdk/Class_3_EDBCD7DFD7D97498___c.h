#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F25C0BD4B2C92757;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_EDBCD7DFD7D97498___C_METHOD_1_DCA31D3F2A3856F0_OFFSET UNITYSDK_OFFSET(0xECF4830)
#define CLASS_3_EDBCD7DFD7D97498___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xECF47E0)
#define CLASS_3_EDBCD7DFD7D97498___C__CTOR_OFFSET UNITYSDK_OFFSET(0xECF4820)

inline static constexpr unsigned int Class_3_EDBCD7DFD7D97498___c_TypeDefinitionIndex = 60804;

class Class_3_EDBCD7DFD7D97498___c : public ::System::Object
{
public:
	static ::Class_3_EDBCD7DFD7D97498___c** StaticGet___9()
	{
		return (::Class_3_EDBCD7DFD7D97498___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDBCD7DFD7D97498___c_TypeDefinitionIndex)->GetStaticField(0x41BF0);
	}
	static ::System::Action_1<::Class_3_F25C0BD4B2C92757*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_F25C0BD4B2C92757*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDBCD7DFD7D97498___c_TypeDefinitionIndex)->GetStaticField(0x41BF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EDBCD7DFD7D97498___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDBCD7DFD7D97498___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCA31D3F2A3856F0(::Class_3_F25C0BD4B2C92757* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25C0BD4B2C92757*))((::PBYTE)hIl2Cpp + CLASS_3_EDBCD7DFD7D97498___C_METHOD_1_DCA31D3F2A3856F0_OFFSET))(this, a1);
	}
};
