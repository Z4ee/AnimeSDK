#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_23E2C0FB375410E2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178579F0)
#define CLASS_1_23E2C0FB375410E2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17857A20)
#define CLASS_1_23E2C0FB375410E2___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x17857A30)
#define CLASS_1_23E2C0FB375410E2___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET UNITYSDK_OFFSET(0x17857A60)

inline static constexpr unsigned int Class_1_23E2C0FB375410E2___c_TypeDefinitionIndex = 63231;

class Class_1_23E2C0FB375410E2___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_2()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23E2C0FB375410E2___c_TypeDefinitionIndex)->GetStaticField(0x4AF70);
	}
	static ::Class_1_23E2C0FB375410E2___c** StaticGet___9()
	{
		return (::Class_1_23E2C0FB375410E2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23E2C0FB375410E2___c_TypeDefinitionIndex)->GetStaticField(0x4AF78);
	}
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23E2C0FB375410E2___c_TypeDefinitionIndex)->GetStaticField(0x4AF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _TryTrackingNextMission_b__0_0(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET))(this, a1);
	}

	::System::UInt32 _TryTrackingNextMission_b__0_2(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET))(this, a1);
	}
};
