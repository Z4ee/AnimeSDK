#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/Struct_2_7734F33592BF49F6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9CFDF8348B5C64D8_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xBF8F360)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_33625085E5D6A31B_OFFSET UNITYSDK_OFFSET(0xBF7CF20)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_49C06B1CBEC6567D_OFFSET UNITYSDK_OFFSET(0xBF8F630)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xBF8F0A0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_1_OFFSET UNITYSDK_OFFSET(0xBF8F370)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xBF8F4D0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xBF90B70)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xBF90220)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_1_OFFSET UNITYSDK_OFFSET(0xBF905A0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_2_OFFSET UNITYSDK_OFFSET(0xBF90790)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_3_OFFSET UNITYSDK_OFFSET(0xBF90980)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_OFFSET UNITYSDK_OFFSET(0xBF903B0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_FBA4254EF4E174E5_OFFSET UNITYSDK_OFFSET(0xBF8F8F0)
#define CLASS_2_9CFDF8348B5C64D8_ONINIT_OFFSET UNITYSDK_OFFSET(0xBF8E7B0)
#define CLASS_2_9CFDF8348B5C64D8_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBF8EC80)
#define CLASS_2_9CFDF8348B5C64D8__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF90B90)
#define CLASS_2_9CFDF8348B5C64D8__CTOR_OFFSET UNITYSDK_OFFSET(0xBF90B80)

inline static constexpr unsigned int Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex = 60280;

class Class_2_9CFDF8348B5C64D8 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_GHEOGBPFPHE()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x643F0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_ICFIGLGAALH()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x643F8);
	}
	// static const ::System::UInt32 NCCGNFPJILH = 0x5C0224; // 0x0
	::Struct_2_7734F33592BF49F6 LKFNPEJCKCL; // 0x20
	::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x28
	::RPG::GameCore::GameEntity* LFCEGIBFIGG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Method_2_33625085E5D6A31B(::RPG::GameCore::GameEntity* a1, ::Struct_2_7734F33592BF49F6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_7734F33592BF49F6))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_33625085E5D6A31B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_49C06B1CBEC6567D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_49C06B1CBEC6567D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBA4254EF4E174E5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_FBA4254EF4E174E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_C6804E5BEDA102E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6804E5BEDA102E7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6804E5BEDA102E7_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6804E5BEDA102E7_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_C6804E5BEDA102E7_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};
