#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_30B223380C9818C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8825E20)
#define CLASS_1_30B223380C9818C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8825E50)
#define CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x8825E60)
#define CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET UNITYSDK_OFFSET(0x8825E90)

inline static constexpr unsigned int Class_1_30B223380C9818C3___c_TypeDefinitionIndex = 53790;

class Class_1_30B223380C9818C3___c : public ::System::Object
{
public:
	static ::Class_1_30B223380C9818C3___c** StaticGet___9()
	{
		return (::Class_1_30B223380C9818C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x48C50);
	}
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x48C58);
	}
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_2()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x48C60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _TryTrackingNextMission_b__0_0(::RPG::Client::MainMissionData* item)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET))(this, item);
	}

	::System::UInt32 _TryTrackingNextMission_b__0_2(::RPG::Client::MainMissionData* item)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET))(this, item);
	}
};
