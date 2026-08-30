#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_CCA1EE6AEDE8A3A0_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1CAB5600)
#define CLASS_3_CCA1EE6AEDE8A3A0_METHOD_3_A6D862070568AC73_OFFSET UNITYSDK_OFFSET(0x1CAB5640)
#define CLASS_3_CCA1EE6AEDE8A3A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB5630)

inline static constexpr unsigned int Class_3_CCA1EE6AEDE8A3A0_TypeDefinitionIndex = 21190;

class Class_3_CCA1EE6AEDE8A3A0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BAGFJGCLLCK; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OBNDBPAFEOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA1EE6AEDE8A3A0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CCA1EE6AEDE8A3A0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CCA1EE6AEDE8A3A0*&))((::PBYTE)hIl2Cpp + CLASS_3_CCA1EE6AEDE8A3A0_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6D862070568AC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CCA1EE6AEDE8A3A0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CCA1EE6AEDE8A3A0*))((::PBYTE)hIl2Cpp + CLASS_3_CCA1EE6AEDE8A3A0_METHOD_3_A6D862070568AC73_OFFSET))(a1, a2);
	}
};
