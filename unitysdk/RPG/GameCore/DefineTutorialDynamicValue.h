#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace System { class String; }

#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_METHOD_3_2AB18711B8063E72_OFFSET UNITYSDK_OFFSET(0x1C102040)
#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_METHOD_3_F830846EFD84CC25_OFFSET UNITYSDK_OFFSET(0x1C102080)
#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C102070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineTutorialDynamicValue_TypeDefinitionIndex = 23521;

	class DefineTutorialDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::TutorialDynamicParamBase* Param; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AB18711B8063E72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineTutorialDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineTutorialDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_METHOD_3_2AB18711B8063E72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F830846EFD84CC25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineTutorialDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineTutorialDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_METHOD_3_F830846EFD84CC25_OFFSET))(a1, a2);
		}
	};
}
