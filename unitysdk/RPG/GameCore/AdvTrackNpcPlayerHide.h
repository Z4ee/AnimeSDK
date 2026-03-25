#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_METHOD_3_342A7EC9D3299658_OFFSET UNITYSDK_OFFSET(0x16F45350)
#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_METHOD_3_34D232189AB271CE_OFFSET UNITYSDK_OFFSET(0x16F452D0)
#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F45320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcPlayerHide_TypeDefinitionIndex = 20376;

	class AdvTrackNpcPlayerHide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* RelateProp; // 0x18
		::System::Boolean Hide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34D232189AB271CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcPlayerHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_METHOD_3_34D232189AB271CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_342A7EC9D3299658(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_METHOD_3_342A7EC9D3299658_OFFSET))(a1, a2);
		}
	};
}
