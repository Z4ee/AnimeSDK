#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_4.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_2E1C19919B42FB4E_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CCF8860)
#define CLASS_4_2E1C19919B42FB4E_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x1CCF8670)
#define CLASS_4_2E1C19919B42FB4E_METHOD_4_B7FA72CFA6BF5CE4_OFFSET UNITYSDK_OFFSET(0x1CCF86B0)
#define CLASS_4_2E1C19919B42FB4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF86A0)

inline static constexpr unsigned int Class_4_2E1C19919B42FB4E_TypeDefinitionIndex = 22783;

class Class_4_2E1C19919B42FB4E : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
	::Enum_3_0A3761FE34514D6C_4 PICEOEEKCIN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E1C19919B42FB4E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2E1C19919B42FB4E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2E1C19919B42FB4E*&))((::PBYTE)hIl2Cpp + CLASS_4_2E1C19919B42FB4E_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B7FA72CFA6BF5CE4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2E1C19919B42FB4E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2E1C19919B42FB4E*))((::PBYTE)hIl2Cpp + CLASS_4_2E1C19919B42FB4E_METHOD_4_B7FA72CFA6BF5CE4_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E1C19919B42FB4E_GETDYNAMICKEY_OFFSET))(this);
	}
};
