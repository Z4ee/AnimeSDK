#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDefaultSelectorConfig; }

#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_METHOD_3_DAFBA574900F8D75_OFFSET UNITYSDK_OFFSET(0x1D3269D0)
#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_METHOD_3_E88E0A46C5D6DABA_OFFSET UNITYSDK_OFFSET(0x1D3257D0)
#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3257C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableDefaultSelectorConfigList_TypeDefinitionIndex = 15440;

	class AIVariableDefaultSelectorConfigList : public ::RPG::GameCore::AIVariable
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIDefaultSelectorConfig*>* DefaultSelectorConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAFBA574900F8D75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableDefaultSelectorConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableDefaultSelectorConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_METHOD_3_DAFBA574900F8D75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E88E0A46C5D6DABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableDefaultSelectorConfigList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableDefaultSelectorConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_METHOD_3_E88E0A46C5D6DABA_OFFSET))(a1, a2);
		}
	};
}
