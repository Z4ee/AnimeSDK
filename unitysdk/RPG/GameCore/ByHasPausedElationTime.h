#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_2384F83176FEF420_OFFSET UNITYSDK_OFFSET(0x1CF21180)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_34763F50B546CCB3_OFFSET UNITYSDK_OFFSET(0x1CF211C0)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_AA15705AC597AD60_OFFSET UNITYSDK_OFFSET(0x1CF21330)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_CC272375F59FEDE9_OFFSET UNITYSDK_OFFSET(0x1CF21300)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF211B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPausedElationTime_TypeDefinitionIndex = 22365;

	class ByHasPausedElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2384F83176FEF420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_2384F83176FEF420_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34763F50B546CCB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_34763F50B546CCB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC272375F59FEDE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_CC272375F59FEDE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA15705AC597AD60(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_AA15705AC597AD60_OFFSET))(a1, a2);
		}
	};
}
