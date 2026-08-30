#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E3CC6BC1F6AE3962_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x152778D0)
#define CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x152778E0)
#define CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x152778F0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_18FAEB7E6B66FD20_OFFSET UNITYSDK_OFFSET(0x152778B0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x15276860)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x15276F50)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_2F1BBD8275DBBFC1_OFFSET UNITYSDK_OFFSET(0x152772E0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0x15277560)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x15276DF0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_51A19CF770B7E538_OFFSET UNITYSDK_OFFSET(0x152774B0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0x15276B20)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x15276EA0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x152769B0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x15277800)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_C6CF7D9DCFC15F09_OFFSET UNITYSDK_OFFSET(0x152770C0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15277510)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_E29D671E35F6F43F_OFFSET UNITYSDK_OFFSET(0x15276F00)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x152777E0)
#define CLASS_1_E3CC6BC1F6AE3962__CTOR_OFFSET UNITYSDK_OFFSET(0x152767A0)

inline static constexpr unsigned int Class_1_E3CC6BC1F6AE3962_TypeDefinitionIndex = 60715;

class Class_1_E3CC6BC1F6AE3962 : public ::System::Object
{
public:
	::RPG::Client::MonoMapPoseSwitcher* JDBBLDPCOMP; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::UInt32 _VolumeGroupID_k__BackingField; // 0x20
	::UnityEngine::Vector3 EFDAGHOJAKN; // 0x24
	::System::UInt32 GMAOIINKPNC; // 0x30
	::UnityEngine::Vector3 NMHMGGEAHFA; // 0x34
	::UnityEngine::Vector3 AOBCMALLLJH; // 0x40
	::UnityEngine::Vector3 MGNLFBEKGPH; // 0x4C
	::System::UInt32 _RuntimeID_k__BackingField; // 0x58
	::System::UInt32 PNIPHACKBNB; // 0x5C
	::System::UInt32 _VolumeInstanceID_k__BackingField; // 0x60

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E29D671E35F6F43F(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_E29D671E35F6F43F_OFFSET))(this, a1);
	}

	::System::Single Method_1_1FDE3BA9363A99B1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_1FDE3BA9363A99B1_OFFSET))(this);
	}

	::System::Single Method_1_C6CF7D9DCFC15F09(::UnityEngine::Vector3 a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_C6CF7D9DCFC15F09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51A19CF770B7E538(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MonoMapPoseSwitcher* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_51A19CF770B7E538_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_412F2CEBDE691C81(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_412F2CEBDE691C81_OFFSET))(this, a1);
	}

	::System::Single Method_1_2F1BBD8275DBBFC1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_2F1BBD8275DBBFC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_66FF6A49D33160A6_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_576F7DA4771CFFCA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_576F7DA4771CFFCA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::RPG::Client::PoseSwitcherType Method_1_18FAEB7E6B66FD20()
	{
		return ((::RPG::Client::PoseSwitcherType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_18FAEB7E6B66FD20_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::UInt32 get_VolumeGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEGROUPID_OFFSET))(this);
	}

	::System::UInt32 get_VolumeInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEINSTANCEID_OFFSET))(this);
	}
};
