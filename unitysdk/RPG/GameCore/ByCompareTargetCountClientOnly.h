#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByCompareTargetCount.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_3E71A23B7E399F4B_OFFSET UNITYSDK_OFFSET(0x1BBC5580)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_A8BCA8849A42B154_OFFSET UNITYSDK_OFFSET(0x1BBC5550)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_AE7CC6B995045D72_OFFSET UNITYSDK_OFFSET(0x1BBC55B0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET UNITYSDK_OFFSET(0x1BBC4870)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC4860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCountClientOnly_TypeDefinitionIndex = 23264;

	class ByCompareTargetCountClientOnly : public ::RPG::GameCore::ByCompareTargetCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3E71A23B7E399F4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_3E71A23B7E399F4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBD46184320FD67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A8BCA8849A42B154(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_A8BCA8849A42B154_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AE7CC6B995045D72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_AE7CC6B995045D72_OFFSET))(a1, a2);
		}
	};
}
