#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_2_7C6FE28B8BBB4193_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CDD790)
#define CLASS_2_7C6FE28B8BBB4193_GET_MODE_OFFSET UNITYSDK_OFFSET(0x8CDD460)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_0D58E5AE76576E0A_OFFSET UNITYSDK_OFFSET(0x8CDD6A0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_1F85DC15AEF5FB48_OFFSET UNITYSDK_OFFSET(0x8CDD620)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x8CDD550)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8CDD4F0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_4EA8229CB596B3D2_OFFSET UNITYSDK_OFFSET(0x8CDD960)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_53515DED96891DBC_OFFSET UNITYSDK_OFFSET(0x8CDDA40)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_547129A2049405D7_OFFSET UNITYSDK_OFFSET(0x8CDD8D0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_56331FB0AD09D72C_OFFSET UNITYSDK_OFFSET(0x8CDD730)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_793FFA9A76FE6840_1_OFFSET UNITYSDK_OFFSET(0x8CDD860)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8CDD7F0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_8CE4FD5D505AF92C_OFFSET UNITYSDK_OFFSET(0x8CDD5B0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8CDD4B0)
#define CLASS_2_7C6FE28B8BBB4193_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CDD470)
#define CLASS_2_7C6FE28B8BBB4193__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDD420)
#define CLASS_2_7C6FE28B8BBB4193___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CDDAC0)

inline static constexpr unsigned int Class_2_7C6FE28B8BBB4193_TypeDefinitionIndex = 46133;

class Class_2_7C6FE28B8BBB4193 : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_GET_MODE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE4FD5D505AF92C(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_8CE4FD5D505AF92C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1F85DC15AEF5FB48(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_1F85DC15AEF5FB48_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D58E5AE76576E0A(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_0D58E5AE76576E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_56331FB0AD09D72C(::UnityEngine::AnimationClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_56331FB0AD09D72C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840_1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_793FFA9A76FE6840_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_547129A2049405D7(::System::Int32 P0, ::System::Single P1, ::System::Single P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_547129A2049405D7_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_4EA8229CB596B3D2(::System::UInt32 P0, ::RPG::GameCore::FreeStyleMotionInfoConfig* P1, ::System::Nullable_1<::Struct_2_648594091F1A68D6> P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_4EA8229CB596B3D2_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_53515DED96891DBC(::System::Boolean P0, ::Struct_2_D3B84DD3734B83D6 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193_METHOD_2_53515DED96891DBC_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C6FE28B8BBB4193___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
