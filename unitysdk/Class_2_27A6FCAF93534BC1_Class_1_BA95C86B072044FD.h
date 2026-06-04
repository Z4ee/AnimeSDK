#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1392E510)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_GET_POSE0_OFFSET UNITYSDK_OFFSET(0x1392E570)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_GET_POSE1_OFFSET UNITYSDK_OFFSET(0x1392E580)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1392D130)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_84412C678F168720_OFFSET UNITYSDK_OFFSET(0x1392E560)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1392E590)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_C1FE7B4E51B10D4E_OFFSET UNITYSDK_OFFSET(0x1392DFB0)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1392D4C0)
#define CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1392E410)

inline static constexpr unsigned int Class_2_27A6FCAF93534BC1_Class_1_BA95C86B072044FD_TypeDefinitionIndex = 56660;

class Class_2_27A6FCAF93534BC1_Class_1_BA95C86B072044FD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::MapRotationVolumeState Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 _Pose0_k__BackingField; // 0x30
	::System::UInt32 Field_1_6; // 0x34
	::System::UInt32 _Pose1_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::MapRotationVolumeState Method_1_84412C678F168720()
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_84412C678F168720_OFFSET))(this);
	}

	::System::Void Method_1_C1FE7B4E51B10D4E(::RPG::GameCore::MapRotationVolumeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_C1FE7B4E51B10D4E_OFFSET))(this, a1);
	}

	::System::UInt32 get_Pose0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_GET_POSE0_OFFSET))(this);
	}

	::System::UInt32 get_Pose1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_GET_POSE1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27A6FCAF93534BC1_CLASS_1_BA95C86B072044FD_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
