#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoBuddyStairAnimCorrector; }

#define CLASS_1_2AC45833F3CC8C86_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x17850F00)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_C11E3340663BA3CE_OFFSET UNITYSDK_OFFSET(0x17850D20)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17850EA0)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17850CD0)
#define CLASS_1_2AC45833F3CC8C86__CTOR_OFFSET UNITYSDK_OFFSET(0x17850CC0)

inline static constexpr unsigned int Class_1_2AC45833F3CC8C86_TypeDefinitionIndex = 83676;

class Class_1_2AC45833F3CC8C86 : public ::System::Object
{
public:
	::MoleMole::MonoBuddyStairAnimCorrector* Field_1_0; // 0x10
	::System::Boolean Field_1_9; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Boolean Field_1_4; // 0x1A
	::System::Int32 Field_1_11; // 0x1C
	::System::Int32 Field_1_7; // 0x20
	::UnityEngine::Vector3 Field_1_10; // 0x24
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_C11E3340663BA3CE(::Class_1_2AC45833F3CC8C86* a1)
	{
		return ((::System::Void(*)(::Class_1_2AC45833F3CC8C86*))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_C11E3340663BA3CE_OFFSET))(a1);
	}

	static ::Class_1_2AC45833F3CC8C86* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_2AC45833F3CC8C86*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
