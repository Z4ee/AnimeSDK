#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x148250)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xCEE6550)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xCEE64F0)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x148280)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x148260)
#define RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x148290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent_UseSkillErrorInfo_TypeDefinitionIndex = 53875;

	struct alignas(8) SkillCharacterComponent_UseSkillErrorInfo
	{
		::RPG::GameCore::UseSkillErrorCode ErrorCode; // 0x10
		::System::String* Msg; // 0x18
		::System::String* TextString; // 0x20

		::System::Void _ctor(::RPG::GameCore::UseSkillErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UseSkillErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo op_Implicit_1(::System::Boolean a1)
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO_OP_IMPLICIT_1_OFFSET))(a1);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCHARACTERCOMPONENT_USESKILLERRORINFO___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
