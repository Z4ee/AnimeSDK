#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Config { class FollowAvatarTrait; }

#define CLASS_3_FB954E09AC2EDE01_METHOD_3_7B6683393BA69939_OFFSET UNITYSDK_OFFSET(0x17817580)
#define CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x17817590)
#define CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x178175A0)
#define CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17817570)
#define CLASS_3_FB954E09AC2EDE01_METHOD_3_F1FBE9EF8E03EB9E_OFFSET UNITYSDK_OFFSET(0x178175B0)
#define CLASS_3_FB954E09AC2EDE01_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x178174C0)
#define CLASS_3_FB954E09AC2EDE01_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17817480)
#define CLASS_3_FB954E09AC2EDE01_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x178173F0)
#define CLASS_3_FB954E09AC2EDE01__CTOR_OFFSET UNITYSDK_OFFSET(0x17817500)

inline static constexpr unsigned int Class_3_FB954E09AC2EDE01_TypeDefinitionIndex = 52904;

class Class_3_FB954E09AC2EDE01 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_FB954E09AC2EDE01*>
{
public:
	::MoleMole::EntityHandle Field_3_1; // 0x20
	::MoleMole::Config::FollowAvatarTrait* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::MoleMole::Config::FollowAvatarTrait* Method_3_7B6683393BA69939()
	{
		return ((::MoleMole::Config::FollowAvatarTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_METHOD_3_7B6683393BA69939_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_F1FBE9EF8E03EB9E(::MoleMole::Config::FollowAvatarTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FollowAvatarTrait*))((::PBYTE)hIl2Cpp + CLASS_3_FB954E09AC2EDE01_METHOD_3_F1FBE9EF8E03EB9E_OFFSET))(this, a1);
	}
};
