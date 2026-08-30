#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/RegisterEventParamDefInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xB1352C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_GET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0xB1352E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_1_OFFSET UNITYSDK_OFFSET(0xB135560)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_OFFSET UNITYSDK_OFFSET(0xB135300)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xB1352D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0xB1352F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xB135680)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventParamDef_TypeDefinitionIndex = 46352;

	class RegisterEventParamDef : public ::System::Object
	{
	public:
		::System::String* _ParamName_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType _ParamType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_GET_PARAMNAME_OFFSET))(this);
		}

		::System::Void set_ParamName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_PARAMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_GET_PARAMTYPE_OFFSET))(this);
		}

		::System::Void set_ParamType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_PARAMTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEF_SET_1_OFFSET))(this, a1);
		}
	};
}
