#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_C98D71F68A90976E_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1917F110)
#define CLASS_3_C98D71F68A90976E_METHOD_3_CC5389287A803194_OFFSET UNITYSDK_OFFSET(0x1917F1B0)
#define CLASS_3_C98D71F68A90976E__CTOR_OFFSET UNITYSDK_OFFSET(0x1917F180)

inline static constexpr unsigned int Class_3_C98D71F68A90976E_TypeDefinitionIndex = 20265;

class Class_3_C98D71F68A90976E : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x18
	::RPG::GameCore::DynamicString* Field_3_3; // 0x20
	::RPG::GameCore::DynamicString* Field_3_1; // 0x28
	::System::Boolean Field_3_0; // 0x30
	::System::Boolean Field_3_2; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C98D71F68A90976E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C98D71F68A90976E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C98D71F68A90976E*&))((::PBYTE)hIl2Cpp + CLASS_3_C98D71F68A90976E_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC5389287A803194(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C98D71F68A90976E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C98D71F68A90976E*))((::PBYTE)hIl2Cpp + CLASS_3_C98D71F68A90976E_METHOD_3_CC5389287A803194_OFFSET))(a1, a2);
	}
};
