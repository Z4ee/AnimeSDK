#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_2DA524FDD0853410_METHOD_3_5A30A2F2D7363E37_OFFSET UNITYSDK_OFFSET(0x1CB37670)
#define CLASS_3_2DA524FDD0853410_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1CB376F0)
#define CLASS_3_2DA524FDD0853410__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB376C0)

inline static constexpr unsigned int Class_3_2DA524FDD0853410_TypeDefinitionIndex = 21803;

class Class_3_2DA524FDD0853410 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DA524FDD0853410__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5A30A2F2D7363E37(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2DA524FDD0853410*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2DA524FDD0853410*&))((::PBYTE)hIl2Cpp + CLASS_3_2DA524FDD0853410_METHOD_3_5A30A2F2D7363E37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2DA524FDD0853410* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2DA524FDD0853410*))((::PBYTE)hIl2Cpp + CLASS_3_2DA524FDD0853410_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
