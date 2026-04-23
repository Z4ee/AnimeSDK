#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_864141A7762A4045_OFFSET UNITYSDK_OFFSET(0x189FDC70)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_E5DB7C9101835450_OFFSET UNITYSDK_OFFSET(0x189FDBF0)
#define RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEffectAutoLayout_TypeDefinitionIndex = 21310;

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

		static ::System::Void Method_3_E5DB7C9101835450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectAutoLayout*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectAutoLayout*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_E5DB7C9101835450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_864141A7762A4045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectAutoLayout* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectAutoLayout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTAUTOLAYOUT_METHOD_3_864141A7762A4045_OFFSET))(a1, a2);
		}
	};
}
