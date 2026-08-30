#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG_METHOD_3_1FCD3A050384B36D_OFFSET UNITYSDK_OFFSET(0x1CFCE400)
#define RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG_METHOD_3_409D0E93EF1AFDF9_OFFSET UNITYSDK_OFFSET(0x1CFCE320)
#define RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCE3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSavedEntitiesSelectorConfig_TypeDefinitionIndex = 15729;

	class ChimeraDuelSavedEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::String* SaveName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_409D0E93EF1AFDF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG_METHOD_3_409D0E93EF1AFDF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FCD3A050384B36D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDENTITIESSELECTORCONFIG_METHOD_3_1FCD3A050384B36D_OFFSET))(a1, a2);
		}
	};
}
