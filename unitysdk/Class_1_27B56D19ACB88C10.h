#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsPointConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_27B56D19ACB88C10_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D5B5060)
#define CLASS_1_27B56D19ACB88C10__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B52C0)

inline static constexpr unsigned int Class_1_27B56D19ACB88C10_TypeDefinitionIndex = 11291;

class Class_1_27B56D19ACB88C10 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEEFBPGJJOD; // 0x10
	::RPG::GameCore::TacticsPointConditionType LOAGIPDPLFM; // 0x18
	::System::UInt32 BDGECKGNFFM; // 0x1C
	::RPG::Client::TextID KEGANNHEKHA; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27B56D19ACB88C10__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_27B56D19ACB88C10*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_27B56D19ACB88C10*&))((::PBYTE)hIl2Cpp + CLASS_1_27B56D19ACB88C10_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
