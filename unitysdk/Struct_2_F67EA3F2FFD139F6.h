#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_339;
namespace UnityEngine { class Camera; }

#define STRUCT_2_F67EA3F2FFD139F6_GET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define STRUCT_2_F67EA3F2FFD139F6_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x161E0)
#define STRUCT_2_F67EA3F2FFD139F6_GET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x84C7C0)
#define STRUCT_2_F67EA3F2FFD139F6_SET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0x869800)
#define STRUCT_2_F67EA3F2FFD139F6_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x16050)
#define STRUCT_2_F67EA3F2FFD139F6_SET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0xB596B0)

inline static constexpr unsigned int Struct_2_F67EA3F2FFD139F6_TypeDefinitionIndex = 42436;

struct alignas(8) Struct_2_F67EA3F2FFD139F6
{
	::Class_0_16E4307DCC419505_338* _Messenger_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_339* _DependencyResolver_k__BackingField; // 0x18
	::UnityEngine::Camera* _UI3DCamera_k__BackingField; // 0x20

	::Class_0_16E4307DCC419505_338* get_Messenger()
	{
		return ((::Class_0_16E4307DCC419505_338*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_GET_MESSENGER_OFFSET))(this);
	}

	::System::Void set_Messenger(::Class_0_16E4307DCC419505_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_SET_MESSENGER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_339* get_DependencyResolver()
	{
		return ((::Class_0_16E4307DCC419505_339*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_GET_DEPENDENCYRESOLVER_OFFSET))(this);
	}

	::System::Void set_DependencyResolver(::Class_0_16E4307DCC419505_339* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_339*))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_SET_DEPENDENCYRESOLVER_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* get_UI3DCamera()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_GET_UI3DCAMERA_OFFSET))(this);
	}

	::System::Void set_UI3DCamera(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + STRUCT_2_F67EA3F2FFD139F6_SET_UI3DCAMERA_OFFSET))(this, a1);
	}
};
