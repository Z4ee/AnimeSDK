#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_4973DD6361DBF5FF_OFFSET UNITYSDK_OFFSET(0x1BE15060)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_C78233E445EC5DCF_OFFSET UNITYSDK_OFFSET(0x1BE15210)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D218A8688DA7467A_OFFSET UNITYSDK_OFFSET(0x1BE151E0)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D84731B050BC72A4_OFFSET UNITYSDK_OFFSET(0x1BE150A0)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE15090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPerceiveValueReachMax_TypeDefinitionIndex = 19245;

	class AdvByPerceiveValueReachMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4973DD6361DBF5FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_4973DD6361DBF5FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D84731B050BC72A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D84731B050BC72A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D218A8688DA7467A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D218A8688DA7467A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C78233E445EC5DCF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_C78233E445EC5DCF_OFFSET))(a1, a2);
		}
	};
}
