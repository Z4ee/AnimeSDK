#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0DC54D6E576BF484;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define CLASS_2_99BB0B2A459A25C4_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x9A340B0)
#define CLASS_2_99BB0B2A459A25C4_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x9A34100)
#define CLASS_2_99BB0B2A459A25C4_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x9A34180)
#define CLASS_2_99BB0B2A459A25C4_GETRECT_OFFSET UNITYSDK_OFFSET(0x9A34200)
#define CLASS_2_99BB0B2A459A25C4_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x9A34380)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_5F8005963FD8C985_OFFSET UNITYSDK_OFFSET(0x9A34260)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_6BFD1AD809E415D7_OFFSET UNITYSDK_OFFSET(0x9A343A0)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_72CFCD74ED0E448D_OFFSET UNITYSDK_OFFSET(0x9A34470)
#define CLASS_2_99BB0B2A459A25C4_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x9A34410)
#define CLASS_2_99BB0B2A459A25C4_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x9A34390)
#define CLASS_2_99BB0B2A459A25C4__CTOR_OFFSET UNITYSDK_OFFSET(0x9A33D30)

inline static constexpr unsigned int Class_2_99BB0B2A459A25C4_TypeDefinitionIndex = 67930;

class Class_2_99BB0B2A459A25C4 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	// static const ::System::Boolean Field_2_0; // 0x0
	::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0xA8
	::Class_1_0DC54D6E576BF484* Field_2_4; // 0xB0
	::System::UInt32 Field_2_5; // 0xB8
	::UnityEngine::Rect Field_2_3; // 0xBC
	::UnityEngine::Bounds Field_2_2; // 0xCC
	::System::Single Field_2_1; // 0xE4

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::Class_1_0DC54D6E576BF484* a3, ::System::Single a4, ::RPG::GameCore::LodTemplate* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::Class_1_0DC54D6E576BF484*, ::System::Single, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_SET_GROUPINFO_OFFSET))(this, value);
	}

	::RPG::GameCore::HoyoTagContainer* Method_2_6BFD1AD809E415D7()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99BB0B2A459A25C4_METHOD_2_6BFD1AD809E415D7_OFFSET))(this);
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
