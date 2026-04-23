#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9348020)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_GET_POSE0_OFFSET UNITYSDK_OFFSET(0x9348080)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_GET_POSE1_OFFSET UNITYSDK_OFFSET(0x9348090)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9346AA0)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_84412C678F168720_OFFSET UNITYSDK_OFFSET(0x9348070)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_930E3456A7E7A49B_OFFSET UNITYSDK_OFFSET(0x9347B40)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x93480A0)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9346EB0)
#define CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD__CTOR_OFFSET UNITYSDK_OFFSET(0x9348000)

inline static constexpr unsigned int Class_2_624AFA55756E2453_Class_1_BA95C86B072044FD_TypeDefinitionIndex = 55905;

class Class_2_624AFA55756E2453_Class_1_BA95C86B072044FD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_3; // 0x18
	::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* Field_1_2; // 0x20
	::System::UInt32 _Pose0_k__BackingField; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::RPG::GameCore::MapRotationVolumeState Field_1_4; // 0x30
	::System::UInt32 Field_1_7; // 0x34
	::System::UInt32 _Pose1_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::MapRotationVolumeState Method_1_84412C678F168720()
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_84412C678F168720_OFFSET))(this);
	}

	::System::Void Method_1_930E3456A7E7A49B(::RPG::GameCore::MapRotationVolumeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_930E3456A7E7A49B_OFFSET))(this, a1);
	}

	::System::UInt32 get_Pose0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_GET_POSE0_OFFSET))(this);
	}

	::System::UInt32 get_Pose1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_GET_POSE1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624AFA55756E2453_CLASS_1_BA95C86B072044FD_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
