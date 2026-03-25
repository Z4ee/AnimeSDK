#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessAnimStateType.h"
#include "unitysdk/RPG/GameCore/ChessMoveStopReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_422;
class Class_1_2BDF7B9A4F656673;
class Class_1_B229BC73065D28E3_1;
class Class_2_B5BF53FFA523B5C8;
namespace RPG::Client { class MockAnimator; }
namespace UnityEngine { class Animator; }

#define CLASS_2_13661480B6BE936D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1140C7A0)
#define CLASS_2_13661480B6BE936D_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1140CBB0)
#define CLASS_2_13661480B6BE936D_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x1140CC40)
#define CLASS_2_13661480B6BE936D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1140C880)
#define CLASS_2_13661480B6BE936D_METHOD_2_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0x1140C980)
#define CLASS_2_13661480B6BE936D_METHOD_2_78CA97F77C3FE5CD_OFFSET UNITYSDK_OFFSET(0x1140C910)
#define CLASS_2_13661480B6BE936D_METHOD_2_85F768A977081C2D_OFFSET UNITYSDK_OFFSET(0x1140CB40)
#define CLASS_2_13661480B6BE936D_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x1140CC90)
#define CLASS_2_13661480B6BE936D_METHOD_2_C73D3AF9E27E83D8_OFFSET UNITYSDK_OFFSET(0x1140CA20)
#define CLASS_2_13661480B6BE936D_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1140C680)
#define CLASS_2_13661480B6BE936D_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1140CBF0)
#define CLASS_2_13661480B6BE936D__CTOR_OFFSET UNITYSDK_OFFSET(0x1140CCA0)
#define CLASS_2_13661480B6BE936D___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1140CCB0)

inline static constexpr unsigned int Class_2_13661480B6BE936D_TypeDefinitionIndex = 45238;

class Class_2_13661480B6BE936D : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_2BDF7B9A4F656673* Field_2_1; // 0x18
	::Class_2_B5BF53FFA523B5C8* Field_2_2; // 0x20
	::RPG::Client::MockAnimator* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_DISPOSE_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_78CA97F77C3FE5CD(::RPG::GameCore::ChessAnimStateType a1, ::Class_1_B229BC73065D28E3_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAnimStateType, ::Class_1_B229BC73065D28E3_1*))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_78CA97F77C3FE5CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_422* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_422*))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C73D3AF9E27E83D8(::Class_0_16E4307DCC419505_422* a1, ::RPG::GameCore::ChessMoveStopReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_422*, ::RPG::GameCore::ChessMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_C73D3AF9E27E83D8_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChessAnimStateType Method_2_85F768A977081C2D()
	{
		return ((::RPG::GameCore::ChessAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_85F768A977081C2D_OFFSET))(this);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_GETUNITYANIMATOR_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_13661480B6BE936D___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
