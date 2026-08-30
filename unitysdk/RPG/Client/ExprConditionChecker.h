#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConditionChecker.h"

class Class_0_16E4307DCC419505_669;
namespace System { class String; }

#define RPG_CLIENT_EXPRCONDITIONCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8A0170)
#define RPG_CLIENT_EXPRCONDITIONCHECKER_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0x1B8A03C0)
#define RPG_CLIENT_EXPRCONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A0210)
#define RPG_CLIENT_EXPRCONDITIONCHECKER__PARSEEXPR_OFFSET UNITYSDK_OFFSET(0x1B8A0260)

namespace RPG::Client
{
	inline static constexpr unsigned int ExprConditionChecker_TypeDefinitionIndex = 60047;

	class ExprConditionChecker : public ::RPG::Client::ConditionChecker
	{
	public:
		::Class_0_16E4307DCC419505_669* _Expr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ExprConditionChecker* Create(::System::String* a1)
		{
			return ((::RPG::Client::ExprConditionChecker*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER_CREATE_OFFSET))(a1);
		}

		::System::Boolean DoSyncCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER_DOSYNCCHECK_OFFSET))(this);
		}

		::System::Void _ParseExpr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER__PARSEEXPR_OFFSET))(this, a1);
		}
	};
}
