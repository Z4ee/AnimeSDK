#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }

#define CLASS_2_02A2FB8CC5CF6CC0_METHOD_2_DEB57A9A5A4C2CEA_OFFSET UNITYSDK_OFFSET(0x1DA11E50)
#define CLASS_2_02A2FB8CC5CF6CC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12010)

inline static constexpr unsigned int Class_2_02A2FB8CC5CF6CC0_TypeDefinitionIndex = 16636;

class Class_2_02A2FB8CC5CF6CC0 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::MeshBound* PAMFCEDOEMO; // 0x10
	::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* OCHDMBJBIIC; // 0x18
	::Il2CppArray<::System::UInt32>* PAEPOONBKAD; // 0x20
	::RPG::MVector3 EEBDABHHABC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02A2FB8CC5CF6CC0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_DEB57A9A5A4C2CEA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_02A2FB8CC5CF6CC0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_02A2FB8CC5CF6CC0*&))((::PBYTE)hIl2Cpp + CLASS_2_02A2FB8CC5CF6CC0_METHOD_2_DEB57A9A5A4C2CEA_OFFSET))(a1, a2);
	}
};
