#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Config { class FollowAvatarTrait; }

#define CLASS_2_A1197A3522076B01_METHOD_2_7B6683393BA69939_OFFSET UNITYSDK_OFFSET(0xE906010)
#define CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xE905FF0)
#define CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xE906000)
#define CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE905FE0)
#define CLASS_2_A1197A3522076B01_METHOD_2_F1FBE9EF8E03EB9E_OFFSET UNITYSDK_OFFSET(0xE905FD0)
#define CLASS_2_A1197A3522076B01_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE905F20)
#define CLASS_2_A1197A3522076B01_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE905EE0)
#define CLASS_2_A1197A3522076B01_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE905E50)
#define CLASS_2_A1197A3522076B01__CTOR_OFFSET UNITYSDK_OFFSET(0xE905F60)

inline static constexpr unsigned int Class_2_A1197A3522076B01_TypeDefinitionIndex = 40746;

class Class_2_A1197A3522076B01 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_A1197A3522076B01*>
{
public:
	::MoleMole::Config::FollowAvatarTrait* Field_2_1; // 0x20
	::MoleMole::EntityHandle Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_F1FBE9EF8E03EB9E(::MoleMole::Config::FollowAvatarTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FollowAvatarTrait*))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_METHOD_2_F1FBE9EF8E03EB9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::MoleMole::Config::FollowAvatarTrait* Method_2_7B6683393BA69939()
	{
		return ((::MoleMole::Config::FollowAvatarTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1197A3522076B01_METHOD_2_7B6683393BA69939_OFFSET))(this);
	}
};
