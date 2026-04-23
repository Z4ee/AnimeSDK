#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD13CF36787C336.h"

class Class_2_A1F69E2229E56CFE;
namespace System { class String; }

#define CLASS_2_B7BBC37B9B43AB7A_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE020570)
#define CLASS_2_B7BBC37B9B43AB7A__CTOR_OFFSET UNITYSDK_OFFSET(0xE020760)
#define CLASS_2_B7BBC37B9B43AB7A___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE020770)

inline static constexpr unsigned int Class_2_B7BBC37B9B43AB7A_TypeDefinitionIndex = 50044;

class Class_2_B7BBC37B9B43AB7A : public ::Class_1_BCD13CF36787C336
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7BBC37B9B43AB7A__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_B7BBC37B9B43AB7A_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_B7BBC37B9B43AB7A___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
