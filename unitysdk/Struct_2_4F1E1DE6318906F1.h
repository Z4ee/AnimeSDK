#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_ShotAttachOffsetData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D0B450E6AFA69361;
class Class_3_DFD5D1FDB9D2A4AC;

#define STRUCT_2_4F1E1DE6318906F1_METHOD_2_06BAC08464DF60E6_OFFSET UNITYSDK_OFFSET(0x777E90)
#define STRUCT_2_4F1E1DE6318906F1_METHOD_2_11F11AA88F48783A_OFFSET UNITYSDK_OFFSET(0x13F2E110)
#define STRUCT_2_4F1E1DE6318906F1_METHOD_2_71B79C7B652ED6A0_OFFSET UNITYSDK_OFFSET(0x13F2E5A0)
#define STRUCT_2_4F1E1DE6318906F1_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x777FA0)
#define STRUCT_2_4F1E1DE6318906F1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x777F20)

inline static constexpr unsigned int Struct_2_4F1E1DE6318906F1_TypeDefinitionIndex = 68805;

struct alignas(8) Struct_2_4F1E1DE6318906F1
{
	::Class_2_D0B450E6AFA69361* Field_2_0; // 0x10
	::MoleMole::CameraShotData_ShotAttachOffsetData Field_2_1; // 0x18
	::MoleMole::CameraShotData_ShotAttachOffsetData Field_2_2; // 0x38
	::UnityEngine::Vector3 Field_2_3; // 0x58
	::UnityEngine::Vector3 Field_2_4; // 0x64

	::System::Void Method_2_06BAC08464DF60E6(::Class_2_D0B450E6AFA69361* a1, ::UnityEngine::Vector3 a2, ::MoleMole::CameraShotData_ShotAttachOffsetData a3, ::MoleMole::CameraShotData_ShotAttachOffsetData a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D0B450E6AFA69361*, ::UnityEngine::Vector3, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_4F1E1DE6318906F1_METHOD_2_06BAC08464DF60E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4F1E1DE6318906F1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_2_11F11AA88F48783A(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::CameraShotData_ShotAttachOffsetData a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4F1E1DE6318906F1_METHOD_2_11F11AA88F48783A_OFFSET))(a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_4F1E1DE6318906F1_METHOD_2_8E51D9ED71E4930C_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_71B79C7B652ED6A0(::UnityEngine::Vector3 a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::CameraShotData_ShotAttachOffsetData a3, ::MoleMole::CameraShotData_ShotAttachOffsetData a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_4F1E1DE6318906F1_METHOD_2_71B79C7B652ED6A0_OFFSET))(a1, a2, a3, a4, a5);
	}
};
