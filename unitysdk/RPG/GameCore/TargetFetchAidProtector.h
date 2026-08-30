#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_3928B57501EE2350_OFFSET UNITYSDK_OFFSET(0x1E16B660)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_9AC57A6F55AE0F5D_OFFSET UNITYSDK_OFFSET(0x1E16B640)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_B0F89AA3BF27A84D_OFFSET UNITYSDK_OFFSET(0x1E16B560)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_F2E2EE31F3B1AFE8_OFFSET UNITYSDK_OFFSET(0x1E16B5E0)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16B5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidProtector_TypeDefinitionIndex = 23734;

	class TargetFetchAidProtector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B0F89AA3BF27A84D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_B0F89AA3BF27A84D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F2E2EE31F3B1AFE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_F2E2EE31F3B1AFE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AC57A6F55AE0F5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_9AC57A6F55AE0F5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3928B57501EE2350(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_3928B57501EE2350_OFFSET))(a1, a2);
		}
	};
}
