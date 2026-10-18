#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_26F7DD8BFCC364B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBA9370)
#define CLASS_1_26F7DD8BFCC364B9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBBA9530)
#define CLASS_1_26F7DD8BFCC364B9_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xBBA9490)
#define CLASS_1_26F7DD8BFCC364B9_METHOD_1_53F655430903955E_OFFSET UNITYSDK_OFFSET(0xBBA95C0)
#define CLASS_1_26F7DD8BFCC364B9_METHOD_1_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0xBBA96D0)
#define CLASS_1_26F7DD8BFCC364B9__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA9850)

inline static constexpr unsigned int Class_1_26F7DD8BFCC364B9_TypeDefinitionIndex = 71463;

class Class_1_26F7DD8BFCC364B9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_0A3761FE34514D6C_5>* OHJMBHDAJCA; // 0x10
	::System::Boolean EMJHNHGEFKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_5 Method_1_53F655430903955E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_5(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9_METHOD_1_53F655430903955E_OFFSET))(this, a1);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_26F7DD8BFCC364B9_METHOD_1_80B76CA3BC860A58_OFFSET))(this, a1);
	}
};
