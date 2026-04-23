#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITGETMUSEUMEXHIBIT_METHOD_3_0C056349F876838B_OFFSET UNITYSDK_OFFSET(0x190FEE80)
#define RPG_GAMECORE_WAITGETMUSEUMEXHIBIT_METHOD_3_ED66DD5196F6BE27_OFFSET UNITYSDK_OFFSET(0x190FEFD0)
#define RPG_GAMECORE_WAITGETMUSEUMEXHIBIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190FEF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGetMuseumExhibit_TypeDefinitionIndex = 21067;

	class WaitGetMuseumExhibit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ExhibitID; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETMUSEUMEXHIBIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C056349F876838B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGetMuseumExhibit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGetMuseumExhibit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETMUSEUMEXHIBIT_METHOD_3_0C056349F876838B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED66DD5196F6BE27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGetMuseumExhibit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGetMuseumExhibit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETMUSEUMEXHIBIT_METHOD_3_ED66DD5196F6BE27_OFFSET))(a1, a2);
		}
	};
}
