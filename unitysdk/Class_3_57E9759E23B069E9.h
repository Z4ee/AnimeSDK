#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleBulletCommentItem; }

#define CLASS_3_57E9759E23B069E9_METHOD_3_7AC9BC507737276A_OFFSET UNITYSDK_OFFSET(0x19D444F0)
#define CLASS_3_57E9759E23B069E9_METHOD_3_7E50D4B5026D97C3_OFFSET UNITYSDK_OFFSET(0x19D44470)
#define CLASS_3_57E9759E23B069E9__CTOR_OFFSET UNITYSDK_OFFSET(0x19D444C0)

inline static constexpr unsigned int Class_3_57E9759E23B069E9_TypeDefinitionIndex = 21984;

class Class_3_57E9759E23B069E9 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::BattleBulletCommentItem*>* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57E9759E23B069E9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_7E50D4B5026D97C3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_57E9759E23B069E9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_57E9759E23B069E9*&))((::PBYTE)hIl2Cpp + CLASS_3_57E9759E23B069E9_METHOD_3_7E50D4B5026D97C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7AC9BC507737276A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_57E9759E23B069E9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_57E9759E23B069E9*))((::PBYTE)hIl2Cpp + CLASS_3_57E9759E23B069E9_METHOD_3_7AC9BC507737276A_OFFSET))(a1, a2);
	}
};
