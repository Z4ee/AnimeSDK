#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_55F58FD99E7F2103;
namespace System { class String; }

#define RPG_CLIENT_PIVOTBASEDFRACTUREMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDAE4C40)
#define RPG_CLIENT_PIVOTBASEDFRACTUREMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE4C90)

namespace RPG::Client
{
	inline static constexpr unsigned int PivotBasedFractureMonoPlugin_TypeDefinitionIndex = 70660;

	class PivotBasedFractureMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_55F58FD99E7F2103*>
	{
	public:
		::System::Single Process; // 0x30
		::UnityEngine::Vector2 Center; // 0x34
		::System::Single Range; // 0x3C
		::System::Single Exponent; // 0x40
		::System::Single Rotation; // 0x44
		::System::Single Height; // 0x48
		::System::Single Spread; // 0x4C
		::System::Single Scale; // 0x50
		::System::Boolean LineMode; // 0x54
		::System::Single LineDir; // 0x58
		::System::Single DirectionalProcess; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIVOTBASEDFRACTUREMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIVOTBASEDFRACTUREMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
