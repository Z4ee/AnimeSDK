#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2D5788B16E028A11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D52D4C3F14D3FD6A_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19524A10)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_464AA4A03ADE696E_OFFSET UNITYSDK_OFFSET(0x19524090)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x19524950)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_84DC5632240FF80F_OFFSET UNITYSDK_OFFSET(0x19523AD0)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19524020)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_DD4A44352957FDD8_OFFSET UNITYSDK_OFFSET(0x19524150)
#define CLASS_1_D52D4C3F14D3FD6A_METHOD_1_FF639A4CF295D530_OFFSET UNITYSDK_OFFSET(0x19524360)
#define CLASS_1_D52D4C3F14D3FD6A_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19524A20)
#define CLASS_1_D52D4C3F14D3FD6A__CTOR_OFFSET UNITYSDK_OFFSET(0x19524A30)

inline static constexpr unsigned int Class_1_D52D4C3F14D3FD6A_TypeDefinitionIndex = 57229;

class Class_1_D52D4C3F14D3FD6A : public ::System::Object
{
public:
	// static const ::System::Single ALNFBJNICCK; // 0x0
	// static const ::System::Single EOBGHFMMGCM; // 0x0
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x10
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x18
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
	::UnityEngine::Transform* OIGGFCOBKCG; // 0x28
	::System::Single ANBAHMFOPCI; // 0x30
	::System::Single LOFDNKOBKBO; // 0x34
	::System::Single CBDKIJBKBCO; // 0x38
	::System::Single DAPNPMJMPIO; // 0x3C
	::System::Single CGJOJELIIMC; // 0x40
	::System::Single DFGGPBBAAIH; // 0x44
	::System::Single JKEDDIHDHFH; // 0x48
	::System::Single DADDDKFPJGK; // 0x4C
	::System::Boolean _IsActive_k__BackingField; // 0x50
	::System::Single NAJDBLCPLBH; // 0x54
	::System::Single NBOJCABFJJH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84DC5632240FF80F(::Struct_2_2D5788B16E028A11 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D5788B16E028A11))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_84DC5632240FF80F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_FF639A4CF295D530(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_FF639A4CF295D530_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD4A44352957FDD8(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_DD4A44352957FDD8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Single Method_1_464AA4A03ADE696E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_METHOD_1_464AA4A03ADE696E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D52D4C3F14D3FD6A_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
