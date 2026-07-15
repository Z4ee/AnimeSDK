#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_3B632F7263A2ADEE_OFFSET UNITYSDK_OFFSET(0x1D0B7170)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_7E20E33FADF5E63A_OFFSET UNITYSDK_OFFSET(0x1D0B7290)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_BB613B1828A52ED9_OFFSET UNITYSDK_OFFSET(0x1D0B7130)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_E5C4A1CA6523014B_OFFSET UNITYSDK_OFFSET(0x1D0B72C0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B7160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllUnselectable_TypeDefinitionIndex = 23082;

	class TargetFetchAllUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB613B1828A52ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_BB613B1828A52ED9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B632F7263A2ADEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_3B632F7263A2ADEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E20E33FADF5E63A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_7E20E33FADF5E63A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5C4A1CA6523014B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_METHOD_4_E5C4A1CA6523014B_OFFSET))(a1, a2);
		}
	};
}
