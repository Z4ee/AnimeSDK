#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_5F9EE327CC8A2E3C_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x18423160)
#define CLASS_3_5F9EE327CC8A2E3C_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x184231E0)
#define CLASS_3_5F9EE327CC8A2E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x184231B0)

inline static constexpr unsigned int Class_3_5F9EE327CC8A2E3C_TypeDefinitionIndex = 20366;

class Class_3_5F9EE327CC8A2E3C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F9EE327CC8A2E3C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F9EE327CC8A2E3C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F9EE327CC8A2E3C*&))((::PBYTE)hIl2Cpp + CLASS_3_5F9EE327CC8A2E3C_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F9EE327CC8A2E3C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F9EE327CC8A2E3C*))((::PBYTE)hIl2Cpp + CLASS_3_5F9EE327CC8A2E3C_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
