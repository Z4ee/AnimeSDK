#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LightningStrikeAreaConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EC562651AEE6EC13_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0xCA45A30)
#define CLASS_3_EC562651AEE6EC13_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0xCA45A70)
#define CLASS_3_EC562651AEE6EC13__CTOR_OFFSET UNITYSDK_OFFSET(0xCA45A60)

inline static constexpr unsigned int Class_3_EC562651AEE6EC13_TypeDefinitionIndex = 20838;

class Class_3_EC562651AEE6EC13 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::LightningStrikeAreaConfig* BKGNKKLLLNC; // 0x18
	::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC562651AEE6EC13__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EC562651AEE6EC13*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EC562651AEE6EC13*&))((::PBYTE)hIl2Cpp + CLASS_3_EC562651AEE6EC13_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EC562651AEE6EC13* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EC562651AEE6EC13*))((::PBYTE)hIl2Cpp + CLASS_3_EC562651AEE6EC13_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
