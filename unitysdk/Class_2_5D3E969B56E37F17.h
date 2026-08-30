#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_2_5D3E969B56E37F17_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DCB410)
#define CLASS_2_5D3E969B56E37F17_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x17DCB690)
#define CLASS_2_5D3E969B56E37F17_METHOD_2_FE0C6471BE220D5D_OFFSET UNITYSDK_OFFSET(0x17DCB250)
#define CLASS_2_5D3E969B56E37F17_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x17DCB6B0)
#define CLASS_2_5D3E969B56E37F17_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x17DCB6A0)
#define CLASS_2_5D3E969B56E37F17__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCB700)

inline static constexpr unsigned int Class_2_5D3E969B56E37F17_TypeDefinitionIndex = 57246;

class Class_2_5D3E969B56E37F17 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FE0C6471BE220D5D(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17_METHOD_2_FE0C6471BE220D5D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17_GET_GROUPINFO_OFFSET))(this);
	}

	::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17_SET_GROUPINFO_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D3E969B56E37F17_RESETTODEFAULT_OFFSET))(this);
	}
};
