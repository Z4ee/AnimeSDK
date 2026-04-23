#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"

class Class_0_16E4307DCC419505_938;
class Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_6DC10F954E6771A2_METHOD_2_707D9EE04D8035D4_OFFSET UNITYSDK_OFFSET(0x97B8000)
#define CLASS_2_6DC10F954E6771A2_METHOD_2_B299544B4A5F1F3F_OFFSET UNITYSDK_OFFSET(0x97B7F40)
#define CLASS_2_6DC10F954E6771A2_METHOD_2_DFE645734C951E27_OFFSET UNITYSDK_OFFSET(0x97B7DF0)
#define CLASS_2_6DC10F954E6771A2__CTOR_OFFSET UNITYSDK_OFFSET(0x97B8070)

inline static constexpr unsigned int Class_2_6DC10F954E6771A2_TypeDefinitionIndex = 65836;

class Class_2_6DC10F954E6771A2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DC10F954E6771A2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_938* Method_2_DFE645734C951E27(::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE* a1)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE*))((::PBYTE)hIl2Cpp + CLASS_2_6DC10F954E6771A2_METHOD_2_DFE645734C951E27_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_B299544B4A5F1F3F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6DC10F954E6771A2_METHOD_2_B299544B4A5F1F3F_OFFSET))(a1);
	}

	static ::System::String* Method_2_707D9EE04D8035D4(::RPG::GameCore::CharacterHUDType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + CLASS_2_6DC10F954E6771A2_METHOD_2_707D9EE04D8035D4_OFFSET))(a1);
	}
};
