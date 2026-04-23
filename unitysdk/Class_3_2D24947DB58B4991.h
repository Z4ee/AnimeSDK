#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AttachAvatarChange; }
namespace RPG::GameCore { class AvatarChangeTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_2D24947DB58B4991_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFE10F0)
#define CLASS_3_2D24947DB58B4991_METHOD_3_6A4ED1FCC0ADD2AB_OFFSET UNITYSDK_OFFSET(0xAFE1F60)
#define CLASS_3_2D24947DB58B4991_METHOD_3_8EB5F47953521201_OFFSET UNITYSDK_OFFSET(0xAFE1E60)
#define CLASS_3_2D24947DB58B4991_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFE1230)
#define CLASS_3_2D24947DB58B4991__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE0CA0)
#define CLASS_3_2D24947DB58B4991___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFE2450)

inline static constexpr unsigned int Class_3_2D24947DB58B4991_TypeDefinitionIndex = 50599;

class Class_3_2D24947DB58B4991 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachAvatarChange*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_6; // 0x28
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_3_2; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_3_7; // 0x40
	::RPG::GameCore::AvatarChangeTemplate* Field_3_0; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_3_3; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_3_8; // 0x58
	::Class_3_E21F6DE9B7FA4D05* Field_3_5; // 0x60
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_4; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachAvatarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8EB5F47953521201(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991_METHOD_3_8EB5F47953521201_OFFSET))(this, a1);
	}

	::System::Void Method_3_6A4ED1FCC0ADD2AB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991_METHOD_3_6A4ED1FCC0ADD2AB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D24947DB58B4991___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
