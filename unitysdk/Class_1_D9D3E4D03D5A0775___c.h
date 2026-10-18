#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D9D3E4D03D5A0775___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB106160)
#define CLASS_1_D9D3E4D03D5A0775___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1061A0)
#define CLASS_1_D9D3E4D03D5A0775___C__SETTRACKINGSUBMISSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xB1061B0)

inline static constexpr unsigned int Class_1_D9D3E4D03D5A0775___c_TypeDefinitionIndex = 80176;

class Class_1_D9D3E4D03D5A0775___c : public ::System::Object
{
public:
	static ::System::Action_1<::RPG::Client::SubMissionData*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9D3E4D03D5A0775___c_TypeDefinitionIndex)->GetStaticField(0x40C20);
	}
	static ::Class_1_D9D3E4D03D5A0775___c** StaticGet___9()
	{
		return (::Class_1_D9D3E4D03D5A0775___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9D3E4D03D5A0775___c_TypeDefinitionIndex)->GetStaticField(0x40C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9D3E4D03D5A0775___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9D3E4D03D5A0775___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetTrackingSubMission_b__4_0(::RPG::Client::SubMissionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_D9D3E4D03D5A0775___C__SETTRACKINGSUBMISSION_B__4_0_OFFSET))(this, a1);
	}
};
