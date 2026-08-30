#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_687762C863A35B66;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_3_27518451A20BB161_21_METHOD_3_2C5FE5D1C13E8118_OFFSET UNITYSDK_OFFSET(0xC7AFEA0)
#define CLASS_3_27518451A20BB161_21_METHOD_3_6BB7BC3CD3087475_OFFSET UNITYSDK_OFFSET(0xC7AFF60)
#define CLASS_3_27518451A20BB161_21_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7AFB50)
#define CLASS_3_27518451A20BB161_21__CTOR_OFFSET UNITYSDK_OFFSET(0xC7AFB20)
#define CLASS_3_27518451A20BB161_21__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xC7AFFB0)
#define CLASS_3_27518451A20BB161_21__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xC7AFFC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_21_TypeDefinitionIndex = 53070;

class Class_3_27518451A20BB161_21 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_687762C863A35B66*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_687762C863A35B66* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_687762C863A35B66*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Int32 Method_3_2C5FE5D1C13E8118(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>* a1)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21_METHOD_3_2C5FE5D1C13E8118_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6BB7BC3CD3087475(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21_METHOD_3_6BB7BC3CD3087475_OFFSET))(a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
