#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }

#define CLASS_3_FB5A83386423B008_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1BD52650)
#define CLASS_3_FB5A83386423B008_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1BD526C0)
#define CLASS_3_FB5A83386423B008__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD526A0)

inline static constexpr unsigned int Class_3_FB5A83386423B008_TypeDefinitionIndex = 19158;

class Class_3_FB5A83386423B008 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28
	::System::Single Field_3_3; // 0x2C
	::System::Single Field_3_4; // 0x30
	::System::Boolean Field_3_5; // 0x34
	::System::Boolean Field_3_6; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB5A83386423B008__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FB5A83386423B008*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FB5A83386423B008*&))((::PBYTE)hIl2Cpp + CLASS_3_FB5A83386423B008_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FB5A83386423B008* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FB5A83386423B008*))((::PBYTE)hIl2Cpp + CLASS_3_FB5A83386423B008_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
