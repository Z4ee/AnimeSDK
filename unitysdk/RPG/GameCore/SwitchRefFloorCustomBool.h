#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_METHOD_3_C652A11D521619F9_OFFSET UNITYSDK_OFFSET(0x1E152AD0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_METHOD_3_C89A59339867D4FC_OFFSET UNITYSDK_OFFSET(0x1E1532E0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E152AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorCustomBool_TypeDefinitionIndex = 17328;

	class SwitchRefFloorCustomBool : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C89A59339867D4FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_METHOD_3_C89A59339867D4FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C652A11D521619F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_METHOD_3_C652A11D521619F9_OFFSET))(a1, a2);
		}
	};
}
