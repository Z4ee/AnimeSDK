#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_1E5FD6A2431A0278_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1CF34C10)
#define CLASS_3_1E5FD6A2431A0278_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1CF34BD0)
#define CLASS_3_1E5FD6A2431A0278__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF34C00)

inline static constexpr unsigned int Class_3_1E5FD6A2431A0278_TypeDefinitionIndex = 23867;

class Class_3_1E5FD6A2431A0278 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CFINKMFANFE; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E5FD6A2431A0278__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E5FD6A2431A0278*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E5FD6A2431A0278*&))((::PBYTE)hIl2Cpp + CLASS_3_1E5FD6A2431A0278_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E5FD6A2431A0278* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E5FD6A2431A0278*))((::PBYTE)hIl2Cpp + CLASS_3_1E5FD6A2431A0278_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
