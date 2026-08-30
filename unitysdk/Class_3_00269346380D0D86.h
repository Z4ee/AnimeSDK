#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_00269346380D0D86_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x1C8FD780)
#define CLASS_3_00269346380D0D86_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1C8FD740)
#define CLASS_3_00269346380D0D86__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FD770)

inline static constexpr unsigned int Class_3_00269346380D0D86_TypeDefinitionIndex = 21871;

class Class_3_00269346380D0D86 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* OFOLKIGEAOE; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00269346380D0D86__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_00269346380D0D86*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_00269346380D0D86*&))((::PBYTE)hIl2Cpp + CLASS_3_00269346380D0D86_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_00269346380D0D86* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_00269346380D0D86*))((::PBYTE)hIl2Cpp + CLASS_3_00269346380D0D86_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
