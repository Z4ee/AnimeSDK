#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xE2500)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xB741E70)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xB7436B0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE2530)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE2510)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE2540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent_UseSkillErrorInfo_TypeDefinitionIndex = 53165;

	struct alignas(8) SkillCharacterComponent_UseSkillErrorInfo
	{
		::RPG::GameCore::UseSkillErrorCode ErrorCode; // 0x10
		::System::String* Msg; // 0x18
		::System::String* TextString; // 0x20

		::System::Void _ctor(::RPG::GameCore::UseSkillErrorCode code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UseSkillErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO__CTOR_OFFSET))(this, code, msg);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo info)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_OFFSET))(info);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo op_Implicit_1(::System::Boolean isValid)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_1_OFFSET))(isValid);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
