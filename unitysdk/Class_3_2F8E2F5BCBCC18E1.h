#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_11AD7A2D72029F1E;
namespace RPG::GameCore { class SO_KeepDistanceMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F8E2F5BCBCC18E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177D7E80)
#define CLASS_3_2F8E2F5BCBCC18E1_METHOD_3_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x177D8220)
#define CLASS_3_2F8E2F5BCBCC18E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177D7F00)
#define CLASS_3_2F8E2F5BCBCC18E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x177D8420)
#define CLASS_3_2F8E2F5BCBCC18E1_TICK_OFFSET UNITYSDK_OFFSET(0x177D8350)
#define CLASS_3_2F8E2F5BCBCC18E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x177D84D0)
#define CLASS_3_2F8E2F5BCBCC18E1__CTOR_OFFSET UNITYSDK_OFFSET(0x177D7D60)

inline static constexpr unsigned int Class_3_2F8E2F5BCBCC18E1_TypeDefinitionIndex = 52406;

class Class_3_2F8E2F5BCBCC18E1 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_KeepDistanceMoveTo*>
{
public:
	static ::System::Single* StaticGet_KJPPFFLLMAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2F8E2F5BCBCC18E1_TypeDefinitionIndex)->GetStaticField(0x112D0);
	}
	::Class_2_11AD7A2D72029F1E* FNLONNEABNB; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2F8E2F5BCBCC18E1_METHOD_3_66FF6A49D33160A6_OFFSET))(this, a1);
	}
};
