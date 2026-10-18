#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class String; }

#define CLASS_2_395FBB71E7EB3A64_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x1267A3D0)
#define CLASS_2_395FBB71E7EB3A64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1267A460)
#define CLASS_2_395FBB71E7EB3A64__CTOR_OFFSET UNITYSDK_OFFSET(0x1267A4D0)
#define CLASS_2_395FBB71E7EB3A64__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1267A3E0)

inline static constexpr unsigned int Class_2_395FBB71E7EB3A64_TypeDefinitionIndex = 59874;

class Class_2_395FBB71E7EB3A64 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395FBB71E7EB3A64__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsTickable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395FBB71E7EB3A64_GET_ISTICKABLE_OFFSET))(this);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395FBB71E7EB3A64__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_395FBB71E7EB3A64_TOSTRING_OFFSET))(this);
	}
};
