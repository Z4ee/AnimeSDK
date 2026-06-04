#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_74E3EDA2F5708BD0_OFFSET UNITYSDK_OFFSET(0x19D0CBC0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_8CFD2E091BF9E868_OFFSET UNITYSDK_OFFSET(0x19CF9320)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_BD3B874BCD522DFA_OFFSET UNITYSDK_OFFSET(0x19D0CAE0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_DEEAFF2C2D58FE79_OFFSET UNITYSDK_OFFSET(0x19D05790)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF92D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeSource_TypeDefinitionIndex = 22624;

	class TargetFetchElationTimeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BD3B874BCD522DFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_BD3B874BCD522DFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CFD2E091BF9E868(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_8CFD2E091BF9E868_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEEAFF2C2D58FE79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_DEEAFF2C2D58FE79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74E3EDA2F5708BD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_74E3EDA2F5708BD0_OFFSET))(a1, a2);
		}
	};
}
