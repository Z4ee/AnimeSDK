#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2641F1F88DCFA311_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x183330A0)
#define CLASS_3_2641F1F88DCFA311_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x18333120)
#define CLASS_3_2641F1F88DCFA311__CTOR_OFFSET UNITYSDK_OFFSET(0x183330F0)

inline static constexpr unsigned int Class_3_2641F1F88DCFA311_TypeDefinitionIndex = 10102;

class Class_3_2641F1F88DCFA311 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2641F1F88DCFA311__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2641F1F88DCFA311*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2641F1F88DCFA311*&))((::PBYTE)hIl2Cpp + CLASS_3_2641F1F88DCFA311_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2641F1F88DCFA311* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2641F1F88DCFA311*))((::PBYTE)hIl2Cpp + CLASS_3_2641F1F88DCFA311_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
