#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_3_DCA7639580BEBC47_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x19162630)
#define CLASS_3_DCA7639580BEBC47_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x191626B0)
#define CLASS_3_DCA7639580BEBC47__CTOR_OFFSET UNITYSDK_OFFSET(0x19162680)

inline static constexpr unsigned int Class_3_DCA7639580BEBC47_TypeDefinitionIndex = 22989;

class Class_3_DCA7639580BEBC47 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesPosition* Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCA7639580BEBC47__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DCA7639580BEBC47*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DCA7639580BEBC47*&))((::PBYTE)hIl2Cpp + CLASS_3_DCA7639580BEBC47_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DCA7639580BEBC47* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DCA7639580BEBC47*))((::PBYTE)hIl2Cpp + CLASS_3_DCA7639580BEBC47_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
