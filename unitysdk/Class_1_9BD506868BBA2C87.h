#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_3_BB8B7764D3497776;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9BD506868BBA2C87_METHOD_1_EA24936B3725219D_OFFSET UNITYSDK_OFFSET(0x16173390)

inline static constexpr unsigned int Class_1_9BD506868BBA2C87_TypeDefinitionIndex = 53953;

class Class_1_9BD506868BBA2C87 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_EA24936B3725219D(::Class_3_BB8B7764D3497776* a1, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_BB8B7764D3497776*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_9BD506868BBA2C87_METHOD_1_EA24936B3725219D_OFFSET))(a1, a2, a3);
	}
};
