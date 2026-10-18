#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_20CD753D282DC6DE_METHOD_2_205C242D36381FFB_OFFSET UNITYSDK_OFFSET(0x12CF1060)
#define CLASS_2_20CD753D282DC6DE_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x12CF0E90)
#define CLASS_2_20CD753D282DC6DE_METHOD_2_50306739355B64EB_OFFSET UNITYSDK_OFFSET(0x12CF0E20)
#define CLASS_2_20CD753D282DC6DE_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x12CF35C0)
#define CLASS_2_20CD753D282DC6DE_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x12CF20A0)
#define CLASS_2_20CD753D282DC6DE_METHOD_2_FB0DF283AE5D325A_OFFSET UNITYSDK_OFFSET(0x12CF0980)
#define CLASS_2_20CD753D282DC6DE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF3BD0)

inline static constexpr unsigned int Class_2_20CD753D282DC6DE_TypeDefinitionIndex = 70375;

class Class_2_20CD753D282DC6DE : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* IOCGPFBNHGJ; // 0x18
	::UnityEngine::Vector3 DCPMGDCGHFK; // 0x20
	::System::Single EEPGKELFPFL; // 0x2C
	::UnityEngine::Vector3 ICNBBLAOJGH; // 0x30
	::UnityEngine::Vector3 NILAGOHELML; // 0x3C
	::UnityEngine::Vector3 JBIJNCJEFIB; // 0x48
	::UnityEngine::Vector3 OEJLOADFCGB; // 0x54
	::System::Single DEIMGIGLHLK; // 0x60
	::System::Single GHCBGHCGBBJ; // 0x64
	::System::Single HMNKOANNINJ; // 0x68
	::UnityEngine::Vector3 PDKDKJIEHPC; // 0x6C
	::System::Single LKBKDNAMNEG; // 0x78
	::UnityEngine::Vector4 HDNFNONGHCP; // 0x7C
	::System::Single GHABAAOGBNO; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FB0DF283AE5D325A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_FB0DF283AE5D325A_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_205C242D36381FFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_205C242D36381FFB_OFFSET))(this);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_6112A1276899AF0F_OFFSET))(this);
	}

	::RPG::Client::MonoPathLightControl* Method_2_50306739355B64EB()
	{
		return ((::RPG::Client::MonoPathLightControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20CD753D282DC6DE_METHOD_2_50306739355B64EB_OFFSET))(this);
	}
};
