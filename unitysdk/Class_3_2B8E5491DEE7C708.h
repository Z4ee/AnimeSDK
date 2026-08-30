#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_2F326B57B6445F8D_1;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_2B8E5491DEE7C708_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1D1EA320)
#define CLASS_3_2B8E5491DEE7C708_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1D1EA3C0)
#define CLASS_3_2B8E5491DEE7C708__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA380)

inline static constexpr unsigned int Class_3_2B8E5491DEE7C708_TypeDefinitionIndex = 22944;

class Class_3_2B8E5491DEE7C708 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_2F326B57B6445F8D_1*>* CHDAMDEOOBG; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B8E5491DEE7C708__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B8E5491DEE7C708*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B8E5491DEE7C708*&))((::PBYTE)hIl2Cpp + CLASS_3_2B8E5491DEE7C708_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B8E5491DEE7C708* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B8E5491DEE7C708*))((::PBYTE)hIl2Cpp + CLASS_3_2B8E5491DEE7C708_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
