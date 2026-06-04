#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E3CC6BC1F6AE3962_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1351C790)
#define CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1351C7A0)
#define CLASS_1_E3CC6BC1F6AE3962_GET_VOLUMEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1351C7B0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_18FAEB7E6B66FD20_OFFSET UNITYSDK_OFFSET(0x1351C770)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x1351B590)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x1351BC20)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_2F1BBD8275DBBFC1_OFFSET UNITYSDK_OFFSET(0x1351BFB0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0x1351C230)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x1351BAC0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_51A19CF770B7E538_OFFSET UNITYSDK_OFFSET(0x1351C180)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_576F7DA4771CFFCA_OFFSET UNITYSDK_OFFSET(0x1351B7F0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x1351BB70)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x1351C6C0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x1351B6E0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_C6CF7D9DCFC15F09_OFFSET UNITYSDK_OFFSET(0x1351BD90)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1351C1E0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_E29D671E35F6F43F_OFFSET UNITYSDK_OFFSET(0x1351BBD0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x1351C4B0)
#define CLASS_1_E3CC6BC1F6AE3962_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1351C6A0)
#define CLASS_1_E3CC6BC1F6AE3962__CTOR_OFFSET UNITYSDK_OFFSET(0x1351B4D0)

inline static constexpr unsigned int Class_1_E3CC6BC1F6AE3962_TypeDefinitionIndex = 56648;

class Class_1_E3CC6BC1F6AE3962 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::Client::MonoMapPoseSwitcher* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::UInt32 _VolumeGroupID_k__BackingField; // 0x3C
	::System::UInt32 _VolumeInstanceID_k__BackingField; // 0x40
	::System::UInt32 _RuntimeID_k__BackingField; // 0x44
	::UnityEngine::Vector3 Field_1_8; // 0x48
	::System::UInt32 Field_1_9; // 0x54
	::UnityEngine::Vector3 Field_1_10; // 0x58

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

	::System::Single Method_1_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_FAE9C4050544FE63_OFFSET))(this);
	}

	::System::Single Method_1_2F1BBD8275DBBFC1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_2F1BBD8275DBBFC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E3CC6BC1F6AE3962_METHOD_1_A3EF4ED894EBFFC3_OFFSET))(this, a1);
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
