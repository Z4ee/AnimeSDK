#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CRUISEROTATIONNODE_GET_CURRENTPITCHANGLE_OFFSET UNITYSDK_OFFSET(0xE020CC0)
#define CRUISEROTATIONNODE_GET_CURRENTROLLANGLE_OFFSET UNITYSDK_OFFSET(0xE020CB0)
#define CRUISEROTATIONNODE_METHOD_1_031DC55E7B9F51C9_OFFSET UNITYSDK_OFFSET(0xE0208C0)
#define CRUISEROTATIONNODE_METHOD_1_0BC3FBBF9075A049_OFFSET UNITYSDK_OFFSET(0xE020CD0)
#define CRUISEROTATIONNODE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE0207C0)
#define CRUISEROTATIONNODE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE020BF0)
#define CRUISEROTATIONNODE_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0xE01F3A0)
#define CRUISEROTATIONNODE_METHOD_1_B49D9DFCA7DAD6C6_OFFSET UNITYSDK_OFFSET(0xE0203B0)
#define CRUISEROTATIONNODE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE020C60)
#define CRUISEROTATIONNODE_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xE020E20)
#define CRUISEROTATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE020B30)

inline static constexpr unsigned int CruiseRotationNode_TypeDefinitionIndex = 47792;

class CruiseRotationNode : public ::System::Object
{
public:
	::System::Boolean _Enabled; // 0x10
	::System::Boolean EnableRoll; // 0x11
	::System::Single RollPeriod; // 0x14
	::System::Single RollMinAngle; // 0x18
	::System::Single RollMaxAngle; // 0x1C
	::System::Boolean EnablePitch; // 0x20
	::System::Single PitchPeriod; // 0x24
	::System::Single PitchMinAngle; // 0x28
	::System::Single PitchMaxAngle; // 0x2C
	::UnityEngine::AnimationCurve* EasingCurve; // 0x30
	::System::Single _currentRollAngle; // 0x38
	::System::Single _currentPitchAngle; // 0x3C
	::System::Int32 _rollDirection; // 0x40
	::System::Int32 _pitchDirection; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single get_CurrentRollAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_GET_CURRENTROLLANGLE_OFFSET))(this);
	}

	::System::Single get_CurrentPitchAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_GET_CURRENTPITCHANGLE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_031DC55E7B9F51C9(::CruiseRotationNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CruiseRotationNode*))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_031DC55E7B9F51C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B49D9DFCA7DAD6C6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_B49D9DFCA7DAD6C6_OFFSET))(this, a1);
	}

	::System::Single Method_1_0BC3FBBF9075A049(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32& a6)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_0BC3FBBF9075A049_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEROTATIONNODE_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}
};
