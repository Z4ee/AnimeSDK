#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12A7DB30)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_27C66A2308F65974_OFFSET UNITYSDK_OFFSET(0x12A7DB70)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x12A7DAD0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12A7D950)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A7DDD0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x12A7DA20)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x12A7ECE0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x12A7D9E0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_8358AC7B391CDD79_OFFSET UNITYSDK_OFFSET(0x12A7E530)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x12A7E4C0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_B552E6D815E9BCDB_OFFSET UNITYSDK_OFFSET(0x12A7ED00)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x12A7DC30)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x12A7DC10)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x12A7F8A0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12A7D9D0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A7DE70)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x12A7DDB0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x12A7DA00)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12A7D9C0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x12A7DC20)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12A7D9B0)
#define CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_FDC1FB876FA5D8DD_OFFSET UNITYSDK_OFFSET(0x12A7DEE0)
#define CLASS_1_AA86ECB2DD6EA9E5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12A7D050)
#define CLASS_1_AA86ECB2DD6EA9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7D940)

inline static constexpr unsigned int Class_1_AA86ECB2DD6EA9E5_TypeDefinitionIndex = 46751;

class Class_1_AA86ECB2DD6EA9E5 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::UnityEngine::AnimationCurve* Field_1_23; // 0x18
	::System::String* Field_1_11; // 0x20
	::System::String* Field_1_0; // 0x28
	::UnityEngine::AnimationCurve* Field_1_13; // 0x30
	::UnityEngine::AnimationCurve* Field_1_27; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::UnityEngine::AnimationCurve* Field_1_21; // 0x48
	::MoleMole::Config::DissipationMode Field_1_8; // 0x50
	::UnityEngine::Vector3 Field_1_39; // 0x54
	::System::Single Field_1_15; // 0x60
	::System::Single Field_1_33; // 0x64
	::System::Boolean Field_1_10; // 0x68
	::System::Boolean Field_1_30; // 0x69
	::System::Boolean Field_1_43; // 0x6A
	::System::Boolean Field_1_26; // 0x6B
	::MoleMole::Config::ConfigDataPriority Field_1_31; // 0x6C
	::System::Single Field_1_14; // 0x70
	::System::Single Field_1_20; // 0x74
	::UnityEngine::Vector3 Field_1_34; // 0x78
	::System::Single Field_1_9; // 0x84
	::System::Single Field_1_17; // 0x88
	::System::Single Field_1_42; // 0x8C
	::System::Int32 Field_1_24; // 0x90
	::UnityEngine::Vector3 Field_1_19; // 0x94
	::System::Single Field_1_22; // 0xA0
	::System::Single Field_1_37; // 0xA4
	::UnityEngine::Vector3 Field_1_12; // 0xA8
	::UnityEngine::Vector3 Field_1_32; // 0xB4
	::UnityEngine::Vector3 Field_1_5; // 0xC0
	::MoleMole::Cameras::VNoiseParams Field_1_4; // 0xCC
	::MoleMole::Config::ConfigDataPlayStacking Field_1_25; // 0xD8
	::System::Single Field_1_36; // 0xDC
	::System::Int32 Field_1_2; // 0xE0
	::System::Boolean Field_1_29; // 0xE4
	::System::Boolean Field_1_28; // 0xE5
	::MoleMole::Config::ShakeType Field_1_18; // 0xE8
	::System::UInt32 Field_1_7; // 0xEC
	::UnityEngine::Vector3 Field_1_35; // 0xF0
	::System::Single Field_1_16; // 0xFC
	::System::Int32 Field_1_38; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Single Method_1_27C66A2308F65974(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_27C66A2308F65974_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FDC1FB876FA5D8DD(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_FDC1FB876FA5D8DD_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_8358AC7B391CDD79(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_8358AC7B391CDD79_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B552E6D815E9BCDB(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_B552E6D815E9BCDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA86ECB2DD6EA9E5_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}
};
