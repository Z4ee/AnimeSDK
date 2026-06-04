#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B3591E177CAF203_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144E5C90)
#define CLASS_1_9B3591E177CAF203_METHOD_1_155811A94849C252_OFFSET UNITYSDK_OFFSET(0x144E63E0)
#define CLASS_1_9B3591E177CAF203_METHOD_1_415B0E3651928757_OFFSET UNITYSDK_OFFSET(0x144E5F10)
#define CLASS_1_9B3591E177CAF203_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x144E6600)
#define CLASS_1_9B3591E177CAF203_METHOD_1_8AFD16B0FBC5329F_OFFSET UNITYSDK_OFFSET(0x144E67A0)
#define CLASS_1_9B3591E177CAF203_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x144E7370)
#define CLASS_1_9B3591E177CAF203_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x144E66B0)
#define CLASS_1_9B3591E177CAF203_METHOD_1_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x144E5CE0)
#define CLASS_1_9B3591E177CAF203_METHOD_1_D555A798DC52739B_OFFSET UNITYSDK_OFFSET(0x144E5DC0)
#define CLASS_1_9B3591E177CAF203_METHOD_1_DD33D9BC7A481B21_OFFSET UNITYSDK_OFFSET(0x144E73C0)
#define CLASS_1_9B3591E177CAF203__CTOR_OFFSET UNITYSDK_OFFSET(0x144E5C50)

inline static constexpr unsigned int Class_1_9B3591E177CAF203_TypeDefinitionIndex = 65111;

class Class_1_9B3591E177CAF203 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_469A5FF005CF3F5C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Method_1_D555A798DC52739B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_D555A798DC52739B_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::VCameraShakeV2* Method_1_415B0E3651928757(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
	{
		return ((::RPG::GameCore::VCameraShakeV2*(*)(::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_415B0E3651928757_OFFSET))(a1, a2);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_155811A94849C252(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_155811A94849C252_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_469A5FF005CF3F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7E3C3DAFBD8F4B2(::Class_1_469A5FF005CF3F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AFD16B0FBC5329F(::System::Nullable_1<::System::Single>& a1, ::UnityEngine::Vector3& a2, ::System::Nullable_1<::System::Single>& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>&, ::UnityEngine::Vector3&, ::System::Nullable_1<::System::Single>&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_8AFD16B0FBC5329F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_DD33D9BC7A481B21(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_9B3591E177CAF203_METHOD_1_DD33D9BC7A481B21_OFFSET))(this, a1, a2);
	}
};
