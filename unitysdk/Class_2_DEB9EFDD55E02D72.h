#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_2_DEB9EFDD55E02D72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A35EF0)
#define CLASS_2_DEB9EFDD55E02D72_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x10A36070)
#define CLASS_2_DEB9EFDD55E02D72_METHOD_2_802354FFB7176B54_OFFSET UNITYSDK_OFFSET(0x10A35D60)
#define CLASS_2_DEB9EFDD55E02D72_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0x10A36080)
#define CLASS_2_DEB9EFDD55E02D72__CTOR_OFFSET UNITYSDK_OFFSET(0x10A36090)

inline static constexpr unsigned int Class_2_DEB9EFDD55E02D72_TypeDefinitionIndex = 45949;

class Class_2_DEB9EFDD55E02D72 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB9EFDD55E02D72__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_802354FFB7176B54(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DEB9EFDD55E02D72_METHOD_2_802354FFB7176B54_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB9EFDD55E02D72_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB9EFDD55E02D72_GET_GROUPINFO_OFFSET))(this);
	}

	::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DEB9EFDD55E02D72_SET_GROUPINFO_OFFSET))(this, value);
	}
};
