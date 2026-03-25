#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TutorialGuideConfigWrapper; }

#define CLASS_1_27A9C40764B8EBF7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xEA644B0)
#define CLASS_1_27A9C40764B8EBF7_METHOD_1_92F7A2E9AB67A36B_OFFSET UNITYSDK_OFFSET(0xEA64400)
#define CLASS_1_27A9C40764B8EBF7__CTOR_OFFSET UNITYSDK_OFFSET(0xEA644A0)

inline static constexpr unsigned int Class_1_27A9C40764B8EBF7_TypeDefinitionIndex = 55708;

class Class_1_27A9C40764B8EBF7 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27A9C40764B8EBF7__CTOR_OFFSET))(this);
	}

	static ::Class_1_27A9C40764B8EBF7* Method_1_92F7A2E9AB67A36B(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::Class_1_27A9C40764B8EBF7*(*)(::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_1_27A9C40764B8EBF7_METHOD_1_92F7A2E9AB67A36B_OFFSET))(a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27A9C40764B8EBF7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
