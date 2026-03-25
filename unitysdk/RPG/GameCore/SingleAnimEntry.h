#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMENTRY_METHOD_2_D23336DAB9108F16_OFFSET UNITYSDK_OFFSET(0x1770A500)
#define RPG_GAMECORE_SINGLEANIMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1770A610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleAnimEntry_TypeDefinitionIndex = 14907;

	class SingleAnimEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D23336DAB9108F16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleAnimEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleAnimEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMENTRY_METHOD_2_D23336DAB9108F16_OFFSET))(a1, a2);
		}
	};
}
