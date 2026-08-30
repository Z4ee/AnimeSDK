#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_A5536A8EDCDEB606.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B777A9D3691B1C2E_METHOD_2_4B8BB754EBD146AC_OFFSET UNITYSDK_OFFSET(0x19BDC9F0)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x19BDC280)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x19BDCA60)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x19BDC120)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19BDC9A0)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_D6CE3400C5B8C061_OFFSET UNITYSDK_OFFSET(0x19BDCAF0)
#define CLASS_2_B777A9D3691B1C2E__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDCB60)

inline static constexpr unsigned int Class_2_B777A9D3691B1C2E_TypeDefinitionIndex = 54168;

class Class_2_B777A9D3691B1C2E : public ::Class_1_57578741329DF018
{
public:
	::RPG::GameCore::CharacterModelComponent* INNCJMLIHLJ; // 0x18
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
	::System::String* FEBOPDHIGEJ; // 0x28
	::RPG::MVector3 KHFGKIIBILM; // 0x30
	::RPG::MVector3 HLPGPMDKJED; // 0x3C
	::System::Single BELFKDLGPHC; // 0x48
	::System::Single HOHDELAMEBK; // 0x4C
	::System::Single JDPLJJAPGIJ; // 0x50
	::Struct_2_A5536A8EDCDEB606 AECKOFKMHLE; // 0x54
	::System::Int32 HBDJPEFNPNM; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4B8BB754EBD146AC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_4B8BB754EBD146AC_OFFSET))(this);
	}

	::Struct_2_A5536A8EDCDEB606 Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_A5536A8EDCDEB606(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_895E6BF2EDCD95D0_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_D6CE3400C5B8C061()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_D6CE3400C5B8C061_OFFSET))(this);
	}
};
