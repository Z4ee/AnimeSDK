#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_DC72D69AE0D0B635_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1D636060)
#define CLASS_3_DC72D69AE0D0B635_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D6360A0)
#define CLASS_3_DC72D69AE0D0B635__CTOR_OFFSET UNITYSDK_OFFSET(0x1D636090)

inline static constexpr unsigned int Class_3_DC72D69AE0D0B635_TypeDefinitionIndex = 22228;

class Class_3_DC72D69AE0D0B635 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* GHOBEHHNMEC; // 0x20
	::System::Boolean JHLNDMMBMJP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC72D69AE0D0B635__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DC72D69AE0D0B635*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DC72D69AE0D0B635*&))((::PBYTE)hIl2Cpp + CLASS_3_DC72D69AE0D0B635_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DC72D69AE0D0B635* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DC72D69AE0D0B635*))((::PBYTE)hIl2Cpp + CLASS_3_DC72D69AE0D0B635_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
