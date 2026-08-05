#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/AnisotropyVelocityBasedFloatDamper_2.h"
#include "unitysdk/PipelineCamera/CriticalSpringDamper.h"
#include "unitysdk/PipelineCamera/PositionAxisDecomposer.h"
#include "unitysdk/Struct_2_4E049E2562254C08.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_02B6663B077C485D_OFFSET UNITYSDK_OFFSET(0x87E350)
#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_1428CC265AA1C570_OFFSET UNITYSDK_OFFSET(0x70C440)
#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_67B7955FD5047F12_OFFSET UNITYSDK_OFFSET(0x70C3E0)
#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_81F969B0AB89816D_OFFSET UNITYSDK_OFFSET(0x70C190)
#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_D0A49964B6DE96BC_OFFSET UNITYSDK_OFFSET(0x87E370)
#define STRUCT_2_66C8C229A7C86FCA_METHOD_2_D1E9962DB2ABE4AB_OFFSET UNITYSDK_OFFSET(0x59E640)
#define STRUCT_2_66C8C229A7C86FCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x182658B0)

inline static constexpr unsigned int Struct_2_66C8C229A7C86FCA_TypeDefinitionIndex = 57846;

struct alignas(8) Struct_2_66C8C229A7C86FCA
{
	static ::PipelineCamera::PositionAxisDecomposer* StaticGet_Field_2_10()
	{
		return (::PipelineCamera::PositionAxisDecomposer*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_66C8C229A7C86FCA_TypeDefinitionIndex)->GetStaticField(0x127D0);
	}
	::Foundation::Variable_1<::UnityEngine::Vector3> Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x30
	::System::Single Field_2_7; // 0x34
	::UnityEngine::LayerMask Field_2_6; // 0x38
	::UnityEngine::RaycastHit Field_2_5; // 0x3C
	::Foundation::Variable_2<::UnityEngine::Vector3, ::Struct_2_4E049E2562254C08> Field_2_4; // 0x70
	::PipelineCamera::AnisotropyVelocityBasedFloatDamper_2<::PipelineCamera::CriticalSpringDamper, ::PipelineCamera::CriticalSpringDamper> Field_2_11; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA__CCTOR_OFFSET))();
	}

	::Struct_2_4E049E2562254C08 Method_2_02B6663B077C485D(::System::Single a1)
	{
		return ((::Struct_2_4E049E2562254C08(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_02B6663B077C485D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D0A49964B6DE96BC(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_D0A49964B6DE96BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_67B7955FD5047F12(::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_67B7955FD5047F12_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1E9962DB2ABE4AB(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_D1E9962DB2ABE4AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_81F969B0AB89816D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_81F969B0AB89816D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1428CC265AA1C570(::System::Func_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_66C8C229A7C86FCA_METHOD_2_1428CC265AA1C570_OFFSET))(this, a1, a2, a3);
	}
};
