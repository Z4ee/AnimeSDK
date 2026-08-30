#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_BE9C3D1A704A0AC9;
class Class_3_912CC478F2B21832;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define CLASS_1_4B60FC7D14C678F6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19FC82B0)
#define CLASS_1_4B60FC7D14C678F6_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19FC6890)
#define CLASS_1_4B60FC7D14C678F6_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x19FC8A00)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x19FC6830)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x19FC7660)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x19FC6FE0)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x19FC81F0)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x19FC7410)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_8B6BD7A403B64345_OFFSET UNITYSDK_OFFSET(0x19FC7D20)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x19FC8EF0)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19FC8170)
#define CLASS_1_4B60FC7D14C678F6_METHOD_1_BFF1BCD72C87F49E_OFFSET UNITYSDK_OFFSET(0x19FC8AE0)
#define CLASS_1_4B60FC7D14C678F6_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x19FC7E50)
#define CLASS_1_4B60FC7D14C678F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FC9210)
#define CLASS_1_4B60FC7D14C678F6__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC6820)
#define CLASS_1_4B60FC7D14C678F6___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0x19FC9250)

inline static constexpr unsigned int Class_1_4B60FC7D14C678F6_TypeDefinitionIndex = 76304;

class Class_1_4B60FC7D14C678F6 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JLCGJKBAJHO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B60FC7D14C678F6_TypeDefinitionIndex)->GetStaticField(0x1ABD0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CPDIIIHICON()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B60FC7D14C678F6_TypeDefinitionIndex)->GetStaticField(0x1ABD8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_BBOOFCKLJOK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B60FC7D14C678F6_TypeDefinitionIndex)->GetStaticField(0x1ABE0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JPKLLJIAEAI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B60FC7D14C678F6_TypeDefinitionIndex)->GetStaticField(0x1ABE8);
	}
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x18
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x20
	::Class_2_BE9C3D1A704A0AC9* EABEGANEMOP; // 0x28
	::System::Single LLEBIHLMPHK; // 0x30
	::System::Boolean EBHJLEAFMFE; // 0x34

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_8B6BD7A403B64345()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_8B6BD7A403B64345_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_BFF1BCD72C87F49E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_BFF1BCD72C87F49E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_9133398E73B9D974_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __PlayerTeleportFadeInEffect_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B60FC7D14C678F6___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET))(this);
	}
};
