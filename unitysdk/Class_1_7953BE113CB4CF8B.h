#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7953BE113CB4CF8B_GET_AVATARDECONAME_OFFSET UNITYSDK_OFFSET(0x1C5184C0)
#define CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5185A0)
#define CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1C518560)
#define CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C518580)
#define CLASS_1_7953BE113CB4CF8B_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C518480)
#define CLASS_1_7953BE113CB4CF8B_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1C5184A0)
#define CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERCOND_OFFSET UNITYSDK_OFFSET(0x1C5184E0)
#define CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C518540)
#define CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1C518500)
#define CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C518520)
#define CLASS_1_7953BE113CB4CF8B_SET_AVATARDECONAME_OFFSET UNITYSDK_OFFSET(0x1C5184D0)
#define CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5185B0)
#define CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1C518570)
#define CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C518590)
#define CLASS_1_7953BE113CB4CF8B_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C518490)
#define CLASS_1_7953BE113CB4CF8B_SET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1C5184B0)
#define CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERCOND_OFFSET UNITYSDK_OFFSET(0x1C5184F0)
#define CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERDESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1C518550)
#define CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1C518510)
#define CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1C518530)
#define CLASS_1_7953BE113CB4CF8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5185C0)

inline static constexpr unsigned int Class_1_7953BE113CB4CF8B_TypeDefinitionIndex = 41913;

class Class_1_7953BE113CB4CF8B : public ::System::Object
{
public:
	::System::String* _AvatarDecoName_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _StageFeverDescParams_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _AvatarFeverDescParams_k__BackingField; // 0x20
	::RPG::Client::TextID _StageFeverDesc_k__BackingField; // 0x28
	::RPG::Client::TextID _AvatarFeverDesc_k__BackingField; // 0x38
	::RPG::Client::TextID _StageFeverSimpleDesc_k__BackingField; // 0x48
	::System::UInt32 _SpecialAvatarID_k__BackingField; // 0x58
	::System::UInt32 _ID_k__BackingField; // 0x5C
	::RPG::Client::TextID _AvatarFeverSimpleDesc_k__BackingField; // 0x60
	::RPG::Client::TextID _StageFeverCond_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpecialAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_SPECIALAVATARID_OFFSET))(this);
	}

	::System::Void set_SpecialAvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_SPECIALAVATARID_OFFSET))(this, a1);
	}

	::System::String* get_AvatarDecoName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_AVATARDECONAME_OFFSET))(this);
	}

	::System::Void set_AvatarDecoName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_AVATARDECONAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_StageFeverCond()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERCOND_OFFSET))(this);
	}

	::System::Void set_StageFeverCond(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERCOND_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_StageFeverDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERDESC_OFFSET))(this);
	}

	::System::Void set_StageFeverDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERDESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_StageFeverSimpleDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERSIMPLEDESC_OFFSET))(this);
	}

	::System::Void set_StageFeverSimpleDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERSIMPLEDESC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_StageFeverDescParams()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_STAGEFEVERDESCPARAMS_OFFSET))(this);
	}

	::System::Void set_StageFeverDescParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_STAGEFEVERDESCPARAMS_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_AvatarFeverDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERDESC_OFFSET))(this);
	}

	::System::Void set_AvatarFeverDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERDESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_AvatarFeverSimpleDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERSIMPLEDESC_OFFSET))(this);
	}

	::System::Void set_AvatarFeverSimpleDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERSIMPLEDESC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* get_AvatarFeverDescParams()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_GET_AVATARFEVERDESCPARAMS_OFFSET))(this);
	}

	::System::Void set_AvatarFeverDescParams(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_7953BE113CB4CF8B_SET_AVATARFEVERDESCPARAMS_OFFSET))(this, a1);
	}
};
