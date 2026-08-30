#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Ability/LittleGameAbilityContext_1.h"

class Class_0_16E4307DCC419505_288;
class Class_1_C93B67AB1D1BC17A;
class Class_1_E59130C10EDDE9BC;
class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace RPG::Client::LittleGame { template <typename T> class IAbilityAttributeService_1; }

#define CLASS_2_A59080F652920B7A_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x188ADA00)
#define CLASS_2_A59080F652920B7A_GET_REQUESTAUTOREMOVE_OFFSET UNITYSDK_OFFSET(0x188ADA10)
#define CLASS_2_A59080F652920B7A_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x188AD9F0)
#define CLASS_2_A59080F652920B7A_SET_REQUESTAUTOREMOVE_OFFSET UNITYSDK_OFFSET(0x188ADA20)
#define CLASS_2_A59080F652920B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x188ADA30)

inline static constexpr unsigned int Class_2_A59080F652920B7A_TypeDefinitionIndex = 75490;

class Class_2_A59080F652920B7A : public ::RPG::Client::LittleGame::Ability::LittleGameAbilityContext_1<::Class_2_230F5EDDB35DAEBA*>
{
public:
	::Class_3_CD59F26A5F0E803D* _Services_k__BackingField; // 0x60
	::Class_2_D55679E3C796A7AF* _Context_k__BackingField; // 0x68
	::System::Boolean _RequestAutoRemove_k__BackingField; // 0x70

	::System::Void _ctor(::Class_3_CD59F26A5F0E803D* a1, ::Class_2_D55679E3C796A7AF* a2, ::Class_2_230F5EDDB35DAEBA* a3, ::RPG::Client::LittleGame::IAbilityAttributeService_1<::Class_2_230F5EDDB35DAEBA*>* a4, ::Class_0_16E4307DCC419505_288* a5, ::Class_1_C93B67AB1D1BC17A* a6, ::Class_1_E59130C10EDDE9BC* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CD59F26A5F0E803D*, ::Class_2_D55679E3C796A7AF*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::IAbilityAttributeService_1<::Class_2_230F5EDDB35DAEBA*>*, ::Class_0_16E4307DCC419505_288*, ::Class_1_C93B67AB1D1BC17A*, ::Class_1_E59130C10EDDE9BC*))((::PBYTE)hIl2Cpp + CLASS_2_A59080F652920B7A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_3_CD59F26A5F0E803D* get_Services()
	{
		return ((::Class_3_CD59F26A5F0E803D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59080F652920B7A_GET_SERVICES_OFFSET))(this);
	}

	::Class_2_D55679E3C796A7AF* get_Context()
	{
		return ((::Class_2_D55679E3C796A7AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59080F652920B7A_GET_CONTEXT_OFFSET))(this);
	}

	::System::Boolean get_RequestAutoRemove()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59080F652920B7A_GET_REQUESTAUTOREMOVE_OFFSET))(this);
	}

	::System::Void set_RequestAutoRemove(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A59080F652920B7A_SET_REQUESTAUTOREMOVE_OFFSET))(this, a1);
	}
};
