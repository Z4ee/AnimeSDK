#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsIssueHintPopupShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_CC5F9D5F1C16239D_METHOD_1_BCDCD4E94D23A046_OFFSET UNITYSDK_OFFSET(0x191279E0)
#define CLASS_1_CC5F9D5F1C16239D__CTOR_OFFSET UNITYSDK_OFFSET(0x19127CA0)

inline static constexpr unsigned int Class_1_CC5F9D5F1C16239D_TypeDefinitionIndex = 13183;

class Class_1_CC5F9D5F1C16239D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::RPG::GameCore::LimaoNewsIssueHintPopupShowType Field_1_6; // 0x34
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9D5F1C16239D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BCDCD4E94D23A046(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CC5F9D5F1C16239D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CC5F9D5F1C16239D*&))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9D5F1C16239D_METHOD_1_BCDCD4E94D23A046_OFFSET))(a1, a2);
	}
};
