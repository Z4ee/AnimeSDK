#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x109E4600)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_46C7B225FF6DDB9E_OFFSET UNITYSDK_OFFSET(0x109E4420)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x109E4DA0)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_6266594FEEF9D261_OFFSET UNITYSDK_OFFSET(0x109E48C0)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_AB7E6D6F8FBAB936_OFFSET UNITYSDK_OFFSET(0x109E4680)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x109E48A0)
#define CLASS_2_CEEEBDAAA296D6A5_METHOD_2_F4D36AD9CE28CAD0_OFFSET UNITYSDK_OFFSET(0x109E4500)
#define CLASS_2_CEEEBDAAA296D6A5__CTOR_OFFSET UNITYSDK_OFFSET(0x109E4670)

inline static constexpr unsigned int Class_2_CEEEBDAAA296D6A5_TypeDefinitionIndex = 85725;

class Class_2_CEEEBDAAA296D6A5 : public ::Class_1_194AF035DF2F7DB0
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::Vector3 Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_46C7B225FF6DDB9E(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_46C7B225FF6DDB9E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_F4D36AD9CE28CAD0(::Cinemachine::CameraState& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_F4D36AD9CE28CAD0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_AB7E6D6F8FBAB936(::Cinemachine::CameraState& a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_AB7E6D6F8FBAB936_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_6266594FEEF9D261(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_CEEEBDAAA296D6A5_METHOD_2_6266594FEEF9D261_OFFSET))(this, a1, a2, a3, a4);
	}
};
