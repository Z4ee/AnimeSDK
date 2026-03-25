#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_B39165A94502B74A_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x16E79BE0)
#define CLASS_3_B39165A94502B74A_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x16E79B60)
#define CLASS_3_B39165A94502B74A__CTOR_OFFSET UNITYSDK_OFFSET(0x16E79BB0)

inline static constexpr unsigned int Class_3_B39165A94502B74A_TypeDefinitionIndex = 20286;

class Class_3_B39165A94502B74A : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_6; // 0x18
	::System::String* Field_3_5; // 0x20
	::System::String* Field_3_4; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x40
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x48
	::RPG::GameCore::TargetEvaluator* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B39165A94502B74A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B39165A94502B74A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B39165A94502B74A*&))((::PBYTE)hIl2Cpp + CLASS_3_B39165A94502B74A_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B39165A94502B74A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B39165A94502B74A*))((::PBYTE)hIl2Cpp + CLASS_3_B39165A94502B74A_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
