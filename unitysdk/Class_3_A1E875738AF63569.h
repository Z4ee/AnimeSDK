#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_A1E875738AF63569_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1C8B00A0)
#define CLASS_3_A1E875738AF63569_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1C8B00E0)
#define CLASS_3_A1E875738AF63569__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B00D0)

inline static constexpr unsigned int Class_3_A1E875738AF63569_TypeDefinitionIndex = 22583;

class Class_3_A1E875738AF63569 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* JOPHFALPMEH; // 0x20
	::System::String* CIDCEJCGOGB; // 0x28
	::System::Boolean NMMJBGFDNAI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1E875738AF63569__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A1E875738AF63569*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A1E875738AF63569*&))((::PBYTE)hIl2Cpp + CLASS_3_A1E875738AF63569_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A1E875738AF63569* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A1E875738AF63569*))((::PBYTE)hIl2Cpp + CLASS_3_A1E875738AF63569_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
