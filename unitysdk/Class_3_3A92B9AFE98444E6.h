#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define CLASS_3_3A92B9AFE98444E6_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1CB51A70)
#define CLASS_3_3A92B9AFE98444E6_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1CB51AB0)
#define CLASS_3_3A92B9AFE98444E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB51AA0)

inline static constexpr unsigned int Class_3_3A92B9AFE98444E6_TypeDefinitionIndex = 23948;

class Class_3_3A92B9AFE98444E6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ValueEvaluatorConfig* MNDFOPKBHKP; // 0x18
	::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x28
	::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x30
	::RPG::GameCore::RtSkillPropertyType ACHILGIPGKL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A92B9AFE98444E6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A92B9AFE98444E6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A92B9AFE98444E6*&))((::PBYTE)hIl2Cpp + CLASS_3_3A92B9AFE98444E6_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A92B9AFE98444E6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A92B9AFE98444E6*))((::PBYTE)hIl2Cpp + CLASS_3_3A92B9AFE98444E6_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
