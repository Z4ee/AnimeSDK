#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_627C41AFD64353E1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1C877580)
#define CLASS_3_627C41AFD64353E1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1C877640)
#define CLASS_3_627C41AFD64353E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C877600)

inline static constexpr unsigned int Class_3_627C41AFD64353E1_TypeDefinitionIndex = 22662;

class Class_3_627C41AFD64353E1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean MOKNCFJICIC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_627C41AFD64353E1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_627C41AFD64353E1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_627C41AFD64353E1*&))((::PBYTE)hIl2Cpp + CLASS_3_627C41AFD64353E1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_627C41AFD64353E1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_627C41AFD64353E1*))((::PBYTE)hIl2Cpp + CLASS_3_627C41AFD64353E1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
