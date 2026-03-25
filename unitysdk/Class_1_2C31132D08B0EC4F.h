#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0158E2E99AA204F4.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define CLASS_1_2C31132D08B0EC4F_METHOD_1_35ED9546DAE5BC5C_OFFSET UNITYSDK_OFFSET(0x10A2CCB0)
#define CLASS_1_2C31132D08B0EC4F_METHOD_1_3BB6253F5FF6E09C_OFFSET UNITYSDK_OFFSET(0x10A2CBD0)
#define CLASS_1_2C31132D08B0EC4F_METHOD_1_B61A7107268804B8_OFFSET UNITYSDK_OFFSET(0x10A2CC50)

inline static constexpr unsigned int Class_1_2C31132D08B0EC4F_TypeDefinitionIndex = 50854;

class Class_1_2C31132D08B0EC4F : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarCommonRowWrap* Method_1_3BB6253F5FF6E09C(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_2C31132D08B0EC4F_METHOD_1_3BB6253F5FF6E09C_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarUltraSkillConfigRow* Method_1_B61A7107268804B8(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_2C31132D08B0EC4F_METHOD_1_B61A7107268804B8_OFFSET))(a1);
	}

	static ::Struct_2_0158E2E99AA204F4 Method_1_35ED9546DAE5BC5C(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::Struct_2_0158E2E99AA204F4(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_2C31132D08B0EC4F_METHOD_1_35ED9546DAE5BC5C_OFFSET))(a1);
	}
};
