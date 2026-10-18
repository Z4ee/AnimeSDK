#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_680ABE7B0CC9E97F_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEB7B160)
#define CLASS_1_680ABE7B0CC9E97F_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEB7B1A0)
#define CLASS_1_680ABE7B0CC9E97F_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xEB7B180)
#define CLASS_1_680ABE7B0CC9E97F_SET_DESC_OFFSET UNITYSDK_OFFSET(0xEB7B170)
#define CLASS_1_680ABE7B0CC9E97F_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEB7B1B0)
#define CLASS_1_680ABE7B0CC9E97F_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xEB7B190)
#define CLASS_1_680ABE7B0CC9E97F__CTOR_OFFSET UNITYSDK_OFFSET(0xEB7B1C0)

inline static constexpr unsigned int Class_1_680ABE7B0CC9E97F_TypeDefinitionIndex = 79773;

class Class_1_680ABE7B0CC9E97F : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* _ParamList_k__BackingField; // 0x10
	::System::Boolean _IsUnlocked_k__BackingField; // 0x18
	::RPG::Client::TextID _Desc_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_SET_DESC_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Object*>* get_ParamList()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_SET_PARAMLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUnlocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_GET_ISUNLOCKED_OFFSET))(this);
	}

	::System::Void set_IsUnlocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_680ABE7B0CC9E97F_SET_ISUNLOCKED_OFFSET))(this, a1);
	}
};
