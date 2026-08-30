#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_343859AB814CB7DE_AnimatedItem;
namespace RPG::Client { class GPUParticleTransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }

#define CLASS_3_343859AB814CB7DE_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x16FC6930)
#define CLASS_3_343859AB814CB7DE_METHOD_3_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x16FCA450)
#define CLASS_3_343859AB814CB7DE_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16FCA5D0)
#define CLASS_3_343859AB814CB7DE_METHOD_3_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x16FC8660)
#define CLASS_3_343859AB814CB7DE_METHOD_3_76CF2EC46A541E5E_OFFSET UNITYSDK_OFFSET(0x16FC6770)
#define CLASS_3_343859AB814CB7DE_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16FC65A0)
#define CLASS_3_343859AB814CB7DE_METHOD_3_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0x16FC67F0)
#define CLASS_3_343859AB814CB7DE_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x16FC6630)
#define CLASS_3_343859AB814CB7DE_METHOD_3_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x16FC8050)
#define CLASS_3_343859AB814CB7DE_METHOD_3_B20BEFA3114DC074_OFFSET UNITYSDK_OFFSET(0x16FC9520)
#define CLASS_3_343859AB814CB7DE_METHOD_3_BDB45B97E87CFE1D_OFFSET UNITYSDK_OFFSET(0x16FC8880)
#define CLASS_3_343859AB814CB7DE_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x16FCA710)
#define CLASS_3_343859AB814CB7DE_TICK_OFFSET UNITYSDK_OFFSET(0x16FC6DB0)
#define CLASS_3_343859AB814CB7DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FCA800)
#define CLASS_3_343859AB814CB7DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCA7D0)

inline static constexpr unsigned int Class_3_343859AB814CB7DE_TypeDefinitionIndex = 70281;

class Class_3_343859AB814CB7DE : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_EDNMPHPDKDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_343859AB814CB7DE_TypeDefinitionIndex)->GetStaticField(0x14F70);
	}
	static ::System::Int32* StaticGet_OAIDAOIMMBG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_343859AB814CB7DE_TypeDefinitionIndex)->GetStaticField(0x14F74);
	}
	::UnityEngine::ComputeBuffer* DBHNOCDGANH; // 0x38
	::System::Boolean GFGGJHIEPMN; // 0x40
	::System::Single DADEEMLDLNC; // 0x44
	::UnityEngine::Vector3 BCJIIOELICG; // 0x48
	::System::Single JBJNJAIMFGD; // 0x54
	::UnityEngine::Quaternion AIIALNAMCLJ; // 0x58
	::System::Single HDHPNOOMAGE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_A1ADC999CFACEB89_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_3_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_3_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_3_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_BDB45B97E87CFE1D(::Class_3_343859AB814CB7DE_AnimatedItem* a1, ::System::Int32 a2, ::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_343859AB814CB7DE_AnimatedItem*, ::System::Int32, ::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71&))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_BDB45B97E87CFE1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_B20BEFA3114DC074(::Class_3_343859AB814CB7DE_AnimatedItem* a1, ::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_343859AB814CB7DE_AnimatedItem*, ::System::Collections::Generic::List_1<::Class_3_343859AB814CB7DE_Struct_2_D062B8B527D09B71>*))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_B20BEFA3114DC074_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::Client::GPUParticleTransformLoopAnim* Method_3_76CF2EC46A541E5E()
	{
		return ((::RPG::Client::GPUParticleTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_343859AB814CB7DE_METHOD_3_76CF2EC46A541E5E_OFFSET))(this);
	}
};
