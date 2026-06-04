#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTER_METHOD_3_149127BE48FEFA41_OFFSET UNITYSDK_OFFSET(0x19D0FCD0)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_286016954AC6746C_OFFSET UNITYSDK_OFFSET(0x19D0FB30)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_B9ECCC6BB3AA9BF8_OFFSET UNITYSDK_OFFSET(0x19D0FC30)
#define RPG_GAMECORE_TARGETFILTER_METHOD_3_DEB9F6F01D8EB8BE_OFFSET UNITYSDK_OFFSET(0x19D0FD20)
#define RPG_GAMECORE_TARGETFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0FC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilter_TypeDefinitionIndex = 22582;

	class TargetFilter : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_286016954AC6746C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_286016954AC6746C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9ECCC6BB3AA9BF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_B9ECCC6BB3AA9BF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_149127BE48FEFA41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_149127BE48FEFA41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEB9F6F01D8EB8BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTER_METHOD_3_DEB9F6F01D8EB8BE_OFFSET))(a1, a2);
		}
	};
}
