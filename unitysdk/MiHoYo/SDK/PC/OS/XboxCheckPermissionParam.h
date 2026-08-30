#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXCHECKPERMISSIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1160)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxCheckPermissionParam_TypeDefinitionIndex = 8629;

	class XboxCheckPermissionParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* account_id; // 0x10
		::Il2CppArray<::System::Int32>* permission; // 0x18
		::Il2CppArray<::System::Int32>* anonymous; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXCHECKPERMISSIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
