#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21F18165E166027C_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D8B96E0)
#define CLASS_1_21F18165E166027C_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x1D8B9700)
#define CLASS_1_21F18165E166027C_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D8B9740)
#define CLASS_1_21F18165E166027C_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D8B96C0)
#define CLASS_1_21F18165E166027C_GET_STATID_OFFSET UNITYSDK_OFFSET(0x1D8B96A0)
#define CLASS_1_21F18165E166027C_GET_TIERREQUIREVALUELIST_OFFSET UNITYSDK_OFFSET(0x1D8B9720)
#define CLASS_1_21F18165E166027C_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1D8B96F0)
#define CLASS_1_21F18165E166027C_SET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0x1D8B9710)
#define CLASS_1_21F18165E166027C_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D8B9750)
#define CLASS_1_21F18165E166027C_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D8B96D0)
#define CLASS_1_21F18165E166027C_SET_STATID_OFFSET UNITYSDK_OFFSET(0x1D8B96B0)
#define CLASS_1_21F18165E166027C_SET_TIERREQUIREVALUELIST_OFFSET UNITYSDK_OFFSET(0x1D8B9730)
#define CLASS_1_21F18165E166027C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B9760)

inline static constexpr unsigned int Class_1_21F18165E166027C_TypeDefinitionIndex = 80368;

class Class_1_21F18165E166027C : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* _TierRequireValueList_k__BackingField; // 0x18
	::RPG::GameCore::B51RacingStatType _StatID_k__BackingField; // 0x20
	::System::Single _ExtraRatio_k__BackingField; // 0x24
	::RPG::Client::TextID _Desc_k__BackingField; // 0x28
	::RPG::Client::TextID _Name_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::B51RacingStatType get_StatID()
	{
		return ((::RPG::GameCore::B51RacingStatType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_STATID_OFFSET))(this);
	}

	::System::Void set_StatID(::RPG::GameCore::B51RacingStatType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_STATID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_DESC_OFFSET))(this, a1);
	}

	::System::Single get_ExtraRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_EXTRARATIO_OFFSET))(this);
	}

	::System::Void set_ExtraRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_EXTRARATIO_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_TierRequireValueList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_TIERREQUIREVALUELIST_OFFSET))(this);
	}

	::System::Void set_TierRequireValueList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_TIERREQUIREVALUELIST_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21F18165E166027C_SET_ICONPATH_OFFSET))(this, a1);
	}
};
