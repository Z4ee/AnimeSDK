#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_289874D3BE88EC40_OFFSET UNITYSDK_OFFSET(0x1B682EF0)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_864141A7762A4045_OFFSET UNITYSDK_OFFSET(0x1B682F40)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B682F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEffectAutoLayout_TypeDefinitionIndex = 21621;

	class HideEffectAutoLayout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Boolean IsFade; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_289874D3BE88EC40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectAutoLayout*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectAutoLayout*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_289874D3BE88EC40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_864141A7762A4045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_864141A7762A4045_OFFSET))(a1, a2);
		}
	};
}
