#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_687762C863A35B66;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_19_METHOD_3_2C5FE5D1C13E8118_OFFSET UNITYSDK_OFFSET(0x14FC5A60)
#define CLASS_3_27518451A20BB161_19_METHOD_3_6BB7BC3CD3087475_OFFSET UNITYSDK_OFFSET(0x14FC5B20)
#define CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FC5710)
#define CLASS_3_27518451A20BB161_19__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC56E0)
#define CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x14FC5B70)
#define CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x14FC5B80)

inline static constexpr unsigned int Class_3_27518451A20BB161_19_TypeDefinitionIndex = 50405;

class Class_3_27518451A20BB161_19 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_687762C863A35B66*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_687762C863A35B66* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_687762C863A35B66*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Int32 Method_3_2C5FE5D1C13E8118(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>* a1)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19_METHOD_3_2C5FE5D1C13E8118_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6BB7BC3CD3087475(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19_METHOD_3_6BB7BC3CD3087475_OFFSET))(a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
