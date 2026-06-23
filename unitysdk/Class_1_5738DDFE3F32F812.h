#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Canvas; }

#define CLASS_1_5738DDFE3F32F812_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x12E93070)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12E926B0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_2B1D3AFDA8D2D547_OFFSET UNITYSDK_OFFSET(0x12E932E0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x12E92CD0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12E928B0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x12E926F0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_4F57A73D9ABE2F77_OFFSET UNITYSDK_OFFSET(0x12E93600)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_7BB5266A62E05371_OFFSET UNITYSDK_OFFSET(0x12E93180)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12E938C0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_C751AE69BABECA8F_OFFSET UNITYSDK_OFFSET(0x12E92900)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12E93550)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12E935C0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E93290)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x12E92D20)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_D68AA0A7C2144D57_OFFSET UNITYSDK_OFFSET(0x12E92970)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12E938D0)
#define CLASS_1_5738DDFE3F32F812_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x12E92E20)
#define CLASS_1_5738DDFE3F32F812_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E92210)
#define CLASS_1_5738DDFE3F32F812__CTOR_OFFSET UNITYSDK_OFFSET(0x12E926A0)

inline static constexpr unsigned int Class_1_5738DDFE3F32F812_TypeDefinitionIndex = 46348;

class Class_1_5738DDFE3F32F812 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigCameraComposer* Field_1_17; // 0x10
	::MoleMole::Config::ConfigCameraComposer* Field_1_10; // 0x18
	::UnityEngine::AnimationCurve* Field_1_6; // 0x20
	::UnityEngine::AnimationCurve* Field_1_7; // 0x28
	::UnityEngine::Canvas* Field_1_13; // 0x30
	::System::String* Field_1_1; // 0x38
	::MoleMole::Config::ConfigCameraComposer* Field_1_18; // 0x40
	::System::Single Field_1_5; // 0x48
	::System::Single Field_1_21; // 0x4C
	::System::Single Field_1_12; // 0x50
	::Enum_3_903100312A285543 Field_1_22; // 0x54
	::System::Boolean Field_1_15; // 0x55
	::System::Boolean Field_1_8; // 0x56
	::System::Boolean Field_1_9; // 0x57
	::System::Single Field_1_4; // 0x58
	::System::Single Field_1_23; // 0x5C
	::System::Single Field_1_11; // 0x60
	::System::Single Field_1_2; // 0x64
	::System::Int32 Field_1_0; // 0x68
	::System::Single Field_1_20; // 0x6C
	::System::Boolean Field_1_24; // 0x70
	::System::Boolean Field_1_16; // 0x71
	::System::Single Field_1_19; // 0x74
	::System::Single Field_1_3; // 0x78
	::System::Single Field_1_14; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_D68AA0A7C2144D57(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_D68AA0A7C2144D57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C751AE69BABECA8F(::Enum_3_903100312A285543 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_C751AE69BABECA8F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2B1D3AFDA8D2D547(::MoleMole::Cameras::CameraDataAccessor* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_2B1D3AFDA8D2D547_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_7BB5266A62E05371(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_7BB5266A62E05371_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F57A73D9ABE2F77(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_4F57A73D9ABE2F77_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5738DDFE3F32F812_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};
