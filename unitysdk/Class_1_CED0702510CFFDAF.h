#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CED0702510CFFDAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10957BD0)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_304E2B90FBABC1B6_OFFSET UNITYSDK_OFFSET(0x10958700)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x10957C20)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x109585B0)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x109592C0)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x10958620)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_A8576AC362D01C29_OFFSET UNITYSDK_OFFSET(0x109583F0)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_B7E91A6D14968A2D_OFFSET UNITYSDK_OFFSET(0x10957CD0)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_C096C935337EEB2A_OFFSET UNITYSDK_OFFSET(0x10957E10)
#define CLASS_1_CED0702510CFFDAF_METHOD_1_DD33D9BC7A481B21_OFFSET UNITYSDK_OFFSET(0x10959310)
#define CLASS_1_CED0702510CFFDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x10957B90)

inline static constexpr unsigned int Class_1_CED0702510CFFDAF_TypeDefinitionIndex = 56940;

class Class_1_CED0702510CFFDAF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_469A5FF005CF3F5C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_B7E91A6D14968A2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_B7E91A6D14968A2D_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::VCameraShakeV2* Method_1_C096C935337EEB2A(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
	{
		return ((::RPG::GameCore::VCameraShakeV2*(*)(::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_C096C935337EEB2A_OFFSET))(a1, a2);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_A8576AC362D01C29(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_A8576AC362D01C29_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_469A5FF005CF3F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6D1D47E588E644(::Class_1_469A5FF005CF3F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_1_304E2B90FBABC1B6(::System::Nullable_1<::System::Single>& a1, ::UnityEngine::Vector3& a2, ::System::Nullable_1<::System::Single>& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>&, ::UnityEngine::Vector3&, ::System::Nullable_1<::System::Single>&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_304E2B90FBABC1B6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_DD33D9BC7A481B21(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_CED0702510CFFDAF_METHOD_1_DD33D9BC7A481B21_OFFSET))(this, a1, a2);
	}
};
