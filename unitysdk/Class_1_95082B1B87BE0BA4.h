#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_3_024B137FE9F1BACE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_95082B1B87BE0BA4_METHOD_1_5D068EBFA7E92F88_OFFSET UNITYSDK_OFFSET(0x11940840)

inline static constexpr unsigned int Class_1_95082B1B87BE0BA4_TypeDefinitionIndex = 49520;

class Class_1_95082B1B87BE0BA4 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_5D068EBFA7E92F88(::Class_3_024B137FE9F1BACE* a1, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_024B137FE9F1BACE*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_95082B1B87BE0BA4_METHOD_1_5D068EBFA7E92F88_OFFSET))(a1, a2, a3);
	}
};
