#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_001F579E19B19BAD_OFFSET UNITYSDK_OFFSET(0x1C2F9150)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_61033AF00E136848_OFFSET UNITYSDK_OFFSET(0x1C2F9330)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_6D0F58F4E66AD778_OFFSET UNITYSDK_OFFSET(0x1C2F9190)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_D14E40C2518FCB6F_OFFSET UNITYSDK_OFFSET(0x1C2F9360)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdditionalConditions_TypeDefinitionIndex = 23171;

	class ByCheckAdditionalConditions : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckForWin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_001F579E19B19BAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_001F579E19B19BAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D0F58F4E66AD778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_6D0F58F4E66AD778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_61033AF00E136848(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_61033AF00E136848_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D14E40C2518FCB6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_METHOD_4_D14E40C2518FCB6F_OFFSET))(a1, a2);
		}
	};
}
