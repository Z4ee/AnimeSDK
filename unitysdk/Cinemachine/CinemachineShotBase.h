#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINESHOTBASE_GET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0xC741220)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC741110)
#define CINEMACHINE_CINEMACHINESHOTBASE_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xC741240)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_07AF65C462E0D8FA_OFFSET UNITYSDK_OFFSET(0xC740660)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_1F7078DEAED43133_OFFSET UNITYSDK_OFFSET(0xC7414D0)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC7411E0)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xC740610)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xC7406D0)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_C4D99CFCA628428A_OFFSET UNITYSDK_OFFSET(0xC741440)
#define CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xC7405A0)
#define CINEMACHINE_CINEMACHINESHOTBASE_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xC7412C0)
#define CINEMACHINE_CINEMACHINESHOTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xC741250)
#define CINEMACHINE_CINEMACHINESHOTBASE_SET_CALCULATEINRUNTIME_OFFSET UNITYSDK_OFFSET(0xC741230)
#define CINEMACHINE_CINEMACHINESHOTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC741050)
#define CINEMACHINE_CINEMACHINESHOTBASE___IFIXBASEPROXY_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xC741540)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineShotBase_TypeDefinitionIndex = 46822;

	class CinemachineShotBase : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::System::Boolean _CalculateInRuntime_k__BackingField; // 0x50
		::Cinemachine::CameraState Field_6_1; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CalculateInRuntime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_CALCULATEINRUNTIME_OFFSET))(this);
		}

		::System::Void set_CalculateInRuntime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_SET_CALCULATEINRUNTIME_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Int32 Method_6_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_GET_STAGE_OFFSET))(this);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Double Method_6_1F7078DEAED43133(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_1F7078DEAED43133_OFFSET))(this, a1);
		}

		::System::Double Method_6_07AF65C462E0D8FA(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_07AF65C462E0D8FA_OFFSET))(this, a1);
		}

		::System::Void Method_6_C4D99CFCA628428A(::Cinemachine::CameraState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE_METHOD_6_C4D99CFCA628428A_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_PrePipelineMutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESHOTBASE___IFIXBASEPROXY_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}
	};
}
