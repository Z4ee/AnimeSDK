#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsIssueHintPopupShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_95F0C983DAD31028_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1CBED480)
#define CLASS_1_95F0C983DAD31028__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBED720)

inline static constexpr unsigned int Class_1_95F0C983DAD31028_TypeDefinitionIndex = 13802;

class Class_1_95F0C983DAD31028 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* OOKJNEGICEI; // 0x10
	::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x18
	::Il2CppArray<::System::UInt32>* OMLFNLJDHKG; // 0x20
	::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x28
	::System::UInt32 IHALCLABNOJ; // 0x30
	::System::UInt32 AEONKNDCDKN; // 0x34
	::RPG::GameCore::LimaoNewsIssueHintPopupShowType CFKKNEHABHH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F0C983DAD31028__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_95F0C983DAD31028*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_95F0C983DAD31028*&))((::PBYTE)hIl2Cpp + CLASS_1_95F0C983DAD31028_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
