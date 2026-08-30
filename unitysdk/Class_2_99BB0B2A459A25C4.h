#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5226E24814FA0066;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define CLASS_2_99BB0B2A459A25C4_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x17CA4750)
#define CLASS_2_99BB0B2A459A25C4_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x17CA47A0)
#define CLASS_2_99BB0B2A459A25C4_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x17CA4820)
#define CLASS_2_99BB0B2A459A25C4_GETRECT_OFFSET UNITYSDK_OFFSET(0x17CA48A0)
#define CLASS_2_99BB0B2A459A25C4_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x17CA4A20)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_5F8005963FD8C985_OFFSET UNITYSDK_OFFSET(0x17CA4900)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_72CFCD74ED0E448D_OFFSET UNITYSDK_OFFSET(0x17CA4B30)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_B168DD36E5A49BB4_OFFSET UNITYSDK_OFFSET(0x17CA4A40)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x17CA4AD0)
#define CLASS_2_99BB0B2A459A25C4_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x17CA4A30)
#define CLASS_2_99BB0B2A459A25C4__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA43C0)

inline static constexpr unsigned int Class_2_99BB0B2A459A25C4_TypeDefinitionIndex = 73692;

class Class_2_99BB0B2A459A25C4 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	// static const ::System::Boolean HJDLDHLFOOE; // 0x0
	::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0xB8
	::Class_1_5226E24814FA0066* NNEKKDLGFMA; // 0xC0
	::UnityEngine::Bounds PDCCCBKGHNL; // 0xC8
	::UnityEngine::Rect JAKMENOCECF; // 0xE0
	::System::Single KGMFNLGJOHO; // 0xF0
	::System::UInt32 LLDCHLHNADA; // 0xF4

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::Class_1_5226E24814FA0066* a3, ::System::Single a4, ::RPG::GameCore::LodTemplate* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::Class_1_5226E24814FA0066*, ::System::Single, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_GETRECT_OFFSET))(this);
	}

	::System::Boolean Method_2_5F8005963FD8C985(::UnityEngine::Rect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_METHOD_2_5F8005963FD8C985_OFFSET))(this, a1);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_GET_GROUPINFO_OFFSET))(this);
	}

	::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_SET_GROUPINFO_OFFSET))(this, a1);
	}

	::RPG::GameCore::HoyoTagContainer* Method_2_B168DD36E5A49BB4()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_METHOD_2_B168DD36E5A49BB4_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Single Method_2_72CFCD74ED0E448D(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_METHOD_2_72CFCD74ED0E448D_OFFSET))(this, a1, a2);
	}
};
