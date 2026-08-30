#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_6495939846B2930D_OFFSET UNITYSDK_OFFSET(0x1D5AB7B0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_9D4ADBB16D7F6594_OFFSET UNITYSDK_OFFSET(0x1D5AB8B0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET UNITYSDK_OFFSET(0x1D5AB850)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_FD0CA588EEE12690_OFFSET UNITYSDK_OFFSET(0x1D5AB8F0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchInstigator_TypeDefinitionIndex = 23652;

	class TargetFetchInstigator : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6495939846B2930D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_6495939846B2930D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1214B9F5310D3A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D4ADBB16D7F6594(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_9D4ADBB16D7F6594_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD0CA588EEE12690(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_FD0CA588EEE12690_OFFSET))(a1, a2);
		}
	};
}
