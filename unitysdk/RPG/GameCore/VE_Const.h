#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CONST_METHOD_3_3593A0A9A8F5724E_OFFSET UNITYSDK_OFFSET(0x1B88C6A0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_997BB0901E626151_OFFSET UNITYSDK_OFFSET(0x1B88C8D0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_F4B350DA6DDB0243_OFFSET UNITYSDK_OFFSET(0x1B88C6E0)
#define RPG_GAMECORE_VE_CONST_METHOD_3_F97083C04A426BD7_OFFSET UNITYSDK_OFFSET(0x1B88C8A0)
#define RPG_GAMECORE_VE_CONST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88C6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Const_TypeDefinitionIndex = 23185;

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

		static ::System::Void Method_3_F97083C04A426BD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_F97083C04A426BD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_997BB0901E626151(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_997BB0901E626151_OFFSET))(a1, a2);
		}
	};
}
