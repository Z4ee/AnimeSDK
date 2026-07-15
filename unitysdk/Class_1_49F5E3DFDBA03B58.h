#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinExtraSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_9142AEEC954ACD89;
class Class_1_C753B32AC5009099;
class Class_1_D294488719556168;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_49F5E3DFDBA03B58_METHOD_1_6DFEAC39684D5F96_OFFSET UNITYSDK_OFFSET(0x176C4950)
#define CLASS_1_49F5E3DFDBA03B58_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x176C4900)
#define CLASS_1_49F5E3DFDBA03B58__CTOR_OFFSET UNITYSDK_OFFSET(0x176C48F0)

inline static constexpr unsigned int Class_1_49F5E3DFDBA03B58_TypeDefinitionIndex = 53443;

class Class_1_49F5E3DFDBA03B58 : public ::System::Object
{
public:
	::Class_1_D294488719556168* Field_1_0; // 0x10
	::Class_1_C753B32AC5009099* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_382* Field_1_2; // 0x20
	::Class_1_9142AEEC954ACD89* Field_1_3; // 0x28
	::RPG::GameCore::FateRinExtraSource Field_1_4; // 0x30

	::System::Void _ctor(::Class_1_C753B32AC5009099* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C753B32AC5009099*))((::PBYTE)hIl2Cpp + CLASS_1_49F5E3DFDBA03B58__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F5E3DFDBA03B58_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_9142AEEC954ACD89* Method_1_6DFEAC39684D5F96(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_9142AEEC954ACD89*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_49F5E3DFDBA03B58_METHOD_1_6DFEAC39684D5F96_OFFSET))(this, a1);
	}
};
