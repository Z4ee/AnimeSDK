#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_2E5ED20DB13B4FAE_METHOD_1_03769B51801A8CE5_OFFSET UNITYSDK_OFFSET(0x16193F00)
#define CLASS_1_2E5ED20DB13B4FAE_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0x161941E0)
#define CLASS_1_2E5ED20DB13B4FAE_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x16194090)
#define CLASS_1_2E5ED20DB13B4FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16194400)

inline static constexpr unsigned int Class_1_2E5ED20DB13B4FAE_TypeDefinitionIndex = 62664;

class Class_1_2E5ED20DB13B4FAE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E5ED20DB13B4FAE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03769B51801A8CE5(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_2E5ED20DB13B4FAE_METHOD_1_03769B51801A8CE5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_2E5ED20DB13B4FAE_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E5ED20DB13B4FAE_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}
};
