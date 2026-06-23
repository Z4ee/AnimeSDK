#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_43BD383C98B4C0C5_74__CTOR_OFFSET UNITYSDK_OFFSET(0x1558CC40)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_74_TypeDefinitionIndex = 56765;

class Class_1_43BD383C98B4C0C5_74 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigCameraNoise* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* Field_1_1; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_1_6; // 0x28
	::System::Threading::CancellationTokenSource* Field_1_13; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_1_15; // 0x38
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::System::Int32 Field_1_12; // 0x4C
	::UnityEngine::Quaternion Field_1_8; // 0x50
	::System::Single Field_1_4; // 0x60
	::UnityEngine::Quaternion Field_1_3; // 0x64
	::System::Single Field_1_11; // 0x74
	::System::Boolean Field_1_9; // 0x78
	::System::Single Field_1_14; // 0x7C
	::System::Int32 Field_1_5; // 0x80
	::UnityEngine::Vector3 Field_1_7; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_74__CTOR_OFFSET))(this);
	}
};
