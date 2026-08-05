#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_5E8CBAB081D19E17;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Camera; }

#define CLASS_3_E5B0004F05E5E9C9_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1616A680)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_5A7FAC6AD4A6D872_OFFSET UNITYSDK_OFFSET(0x1616B180)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_B208A88F8FDB11D5_OFFSET UNITYSDK_OFFSET(0x1616B9D0)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1616B940)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_C67A19EBEB5A6B53_OFFSET UNITYSDK_OFFSET(0x1616AA40)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1616B8B0)
#define CLASS_3_E5B0004F05E5E9C9_METHOD_3_D81C75E0A96839D0_OFFSET UNITYSDK_OFFSET(0x1616BD40)
#define CLASS_3_E5B0004F05E5E9C9_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1616A890)
#define CLASS_3_E5B0004F05E5E9C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1616A9F0)

inline static constexpr unsigned int Class_3_E5B0004F05E5E9C9_TypeDefinitionIndex = 46158;

class Class_3_E5B0004F05E5E9C9 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_C67A19EBEB5A6B53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_C67A19EBEB5A6B53_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_B208A88F8FDB11D5(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_B208A88F8FDB11D5_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5A7FAC6AD4A6D872(::Class_3_5E8CBAB081D19E17* a1)
	{
		return ((::System::Void(*)(::Class_3_5E8CBAB081D19E17*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_5A7FAC6AD4A6D872_OFFSET))(a1);
	}

	static ::System::Single Method_3_D81C75E0A96839D0(::UnityEngine::Camera* a1, ::Class_3_5E8CBAB081D19E17* a2)
	{
		return ((::System::Single(*)(::UnityEngine::Camera*, ::Class_3_5E8CBAB081D19E17*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9_METHOD_3_D81C75E0A96839D0_OFFSET))(a1, a2);
	}
};
