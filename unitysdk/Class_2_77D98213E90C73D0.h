#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8595EBB95116F4B2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_77D98213E90C73D0_Class_1_C020DF7F7FCFC56F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }
namespace UnityEngine { class Transform; }

#define CLASS_2_77D98213E90C73D0_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xCA7F330)
#define CLASS_2_77D98213E90C73D0_METHOD_2_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0xCA7F7C0)
#define CLASS_2_77D98213E90C73D0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCA7FCF0)
#define CLASS_2_77D98213E90C73D0_METHOD_2_BB5C538354FD3393_OFFSET UNITYSDK_OFFSET(0xCA7F010)
#define CLASS_2_77D98213E90C73D0_METHOD_2_C666DF637AFB8D0B_OFFSET UNITYSDK_OFFSET(0xCA7FB50)
#define CLASS_2_77D98213E90C73D0_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xCA7FAA0)
#define CLASS_2_77D98213E90C73D0_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xCA7F1D0)
#define CLASS_2_77D98213E90C73D0_METHOD_2_F22A16BD8325FC35_OFFSET UNITYSDK_OFFSET(0xCA7F460)
#define CLASS_2_77D98213E90C73D0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA7EB80)

inline static constexpr unsigned int Class_2_77D98213E90C73D0_TypeDefinitionIndex = 48215;

class Class_2_77D98213E90C73D0 : public ::Class_1_8595EBB95116F4B2
{
public:
	::UnityEngine::GameObject* CDBMKOJNEHB; // 0x30
	::UnityEngine::RPGInstancedItemClusterVolumeManager* BDBLGJGGNDH; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CMNLKKBBIMO; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_77D98213E90C73D0_Class_1_C020DF7F7FCFC56F*>* EEFNDEPABJC; // 0x48
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GDFDJKEDLJO; // 0x50
	::System::Boolean OJJHEHBPJBC; // 0x60
	::System::UInt64 HAKOPJDCGBA; // 0x68

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::IRIClusterVolumeInfo a3, ::UnityEngine::RPGInstancedItemClusterVolumeManager* a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::IRIClusterVolumeInfo, ::UnityEngine::RPGInstancedItemClusterVolumeManager*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_2_F22A16BD8325FC35(::Class_2_77D98213E90C73D0_Class_1_C020DF7F7FCFC56F* a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::Class_2_77D98213E90C73D0_Class_1_C020DF7F7FCFC56F*))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_F22A16BD8325FC35_OFFSET))(this, a1);
	}

	::System::Void Method_2_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_BB5C538354FD3393(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_BB5C538354FD3393_OFFSET))(this, a1);
	}

	::System::Void Method_2_C666DF637AFB8D0B(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_C666DF637AFB8D0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D98213E90C73D0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
