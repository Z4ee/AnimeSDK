#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_30B223380C9818C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12504AD0)
#define CLASS_1_30B223380C9818C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12504B00)
#define CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x12504B10)
#define CLASS_1_30B223380C9818C3___C__TRYTRACKINGNEXTMISSION_B__0_2_OFFSET UNITYSDK_OFFSET(0x12504B40)

inline static constexpr unsigned int Class_1_30B223380C9818C3___c_TypeDefinitionIndex = 60934;

class Class_1_30B223380C9818C3___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x11B20);
	}
	static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__0_2()
	{
		return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x11B28);
	}
	static ::Class_1_30B223380C9818C3___c** StaticGet___9()
	{
		return (::Class_1_30B223380C9818C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30B223380C9818C3___c_TypeDefinitionIndex)->GetStaticField(0x11B30);
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
