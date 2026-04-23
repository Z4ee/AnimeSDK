#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }

#define CLASS_2_658CB85CAB79AA8E_METHOD_2_C3DF02352F137B70_OFFSET UNITYSDK_OFFSET(0x18D9BF80)
#define CLASS_2_658CB85CAB79AA8E__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9C140)

inline static constexpr unsigned int Class_2_658CB85CAB79AA8E_TypeDefinitionIndex = 15917;

class Class_2_658CB85CAB79AA8E : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::MeshBound* Field_2_2; // 0x10
	::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* Field_2_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_2_0; // 0x20
	::RPG::MVector3 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_658CB85CAB79AA8E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C3DF02352F137B70(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_658CB85CAB79AA8E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_658CB85CAB79AA8E*&))((::PBYTE)hIl2Cpp + CLASS_2_658CB85CAB79AA8E_METHOD_2_C3DF02352F137B70_OFFSET))(a1, a2);
	}
};
