#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_FC97B6D504A5D3AF_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0xBAF30A0)
#define CLASS_3_FC97B6D504A5D3AF_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0xBAF30E0)
#define CLASS_3_FC97B6D504A5D3AF__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF30D0)

inline static constexpr unsigned int Class_3_FC97B6D504A5D3AF_TypeDefinitionIndex = 19735;

class Class_3_FC97B6D504A5D3AF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::CharacterMotionFlag Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC97B6D504A5D3AF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC97B6D504A5D3AF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC97B6D504A5D3AF*&))((::PBYTE)hIl2Cpp + CLASS_3_FC97B6D504A5D3AF_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC97B6D504A5D3AF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC97B6D504A5D3AF*))((::PBYTE)hIl2Cpp + CLASS_3_FC97B6D504A5D3AF_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
