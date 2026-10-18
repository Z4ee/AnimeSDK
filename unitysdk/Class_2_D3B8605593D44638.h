#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_2_D3B8605593D44638_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE94B0)
#define CLASS_2_D3B8605593D44638_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBE9730)
#define CLASS_2_D3B8605593D44638_METHOD_2_1916ABB74DB9AE8D_OFFSET UNITYSDK_OFFSET(0xEBE9360)
#define CLASS_2_D3B8605593D44638_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xEBE9750)
#define CLASS_2_D3B8605593D44638_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBE9740)
#define CLASS_2_D3B8605593D44638__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE97A0)

inline static constexpr unsigned int Class_2_D3B8605593D44638_TypeDefinitionIndex = 57079;

class Class_2_D3B8605593D44638 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1916ABB74DB9AE8D(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638_METHOD_2_1916ABB74DB9AE8D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638_GET_GROUPINFO_OFFSET))(this);
	}

	::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638_SET_GROUPINFO_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8605593D44638_RESETTODEFAULT_OFFSET))(this);
	}
};
