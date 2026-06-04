#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_2B38BF65A115C2B9_1_METHOD_1_03FB712EC45BEB06_OFFSET UNITYSDK_OFFSET(0x13ADB9E0)
#define CLASS_1_2B38BF65A115C2B9_1_METHOD_1_45527DA9D4E558FD_OFFSET UNITYSDK_OFFSET(0x13ADB970)
#define CLASS_1_2B38BF65A115C2B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADBB30)

inline static constexpr unsigned int Class_1_2B38BF65A115C2B9_1_TypeDefinitionIndex = 58804;

class Class_1_2B38BF65A115C2B9_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_45527DA9D4E558FD(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1_METHOD_1_45527DA9D4E558FD_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_360* Method_1_03FB712EC45BEB06(::Class_0_16E4307DCC419505_360* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_61097837E1D530F4* a3)
	{
		return ((::Class_0_16E4307DCC419505_360*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1_METHOD_1_03FB712EC45BEB06_OFFSET))(this, a1, a2, a3);
	}
};
