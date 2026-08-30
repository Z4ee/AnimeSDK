#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_METHOD_3_2E8A357E0124CC3A_OFFSET UNITYSDK_OFFSET(0x1E0D14B0)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_METHOD_3_61DA450864B86EDC_OFFSET UNITYSDK_OFFSET(0x1E0D1510)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamBuffName_TypeDefinitionIndex = 16472;

	class FateTextDynamicParamBuffName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* BuffID; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E8A357E0124CC3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamBuffName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamBuffName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_METHOD_3_2E8A357E0124CC3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61DA450864B86EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamBuffName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamBuffName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_METHOD_3_61DA450864B86EDC_OFFSET))(a1, a2);
		}
	};
}
