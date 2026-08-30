#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define CLASS_3_CDE976C9BD175E30_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1CF291D0)
#define CLASS_3_CDE976C9BD175E30_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1CF29190)
#define CLASS_3_CDE976C9BD175E30__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF291C0)

inline static constexpr unsigned int Class_3_CDE976C9BD175E30_TypeDefinitionIndex = 19694;

class Class_3_CDE976C9BD175E30 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* LDCJONHGDAN; // 0x18
	::System::Boolean GNDCCBNILML; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDE976C9BD175E30__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CDE976C9BD175E30*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CDE976C9BD175E30*&))((::PBYTE)hIl2Cpp + CLASS_3_CDE976C9BD175E30_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CDE976C9BD175E30* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CDE976C9BD175E30*))((::PBYTE)hIl2Cpp + CLASS_3_CDE976C9BD175E30_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
