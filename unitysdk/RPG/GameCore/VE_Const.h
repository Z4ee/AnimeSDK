#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CONST_METHOD_3_3593A0A9A8F5724E_OFFSET UNITYSDK_OFFSET(0x19E3F6C0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_42D97ED309D7FDFB_OFFSET UNITYSDK_OFFSET(0x19E3F8F0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_684188DEB7311E4F_OFFSET UNITYSDK_OFFSET(0x19E3F8C0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_F4B350DA6DDB0243_OFFSET UNITYSDK_OFFSET(0x19E3F700)
#define RPG_GAMECORE_VE_CONST__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3F6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Const_TypeDefinitionIndex = 22718;

	class VE_Const : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3593A0A9A8F5724E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Const*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_3593A0A9A8F5724E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4B350DA6DDB0243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_F4B350DA6DDB0243_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_684188DEB7311E4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_684188DEB7311E4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42D97ED309D7FDFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_42D97ED309D7FDFB_OFFSET))(a1, a2);
		}
	};
}
