#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoBuddyStairAnimCorrector; }

#define CLASS_1_2AC45833F3CC8C86_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0xF097B40)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_C11E3340663BA3CE_OFFSET UNITYSDK_OFFSET(0xF0979C0)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF097960)
#define CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF097900)
#define CLASS_1_2AC45833F3CC8C86__CTOR_OFFSET UNITYSDK_OFFSET(0xF0978F0)

inline static constexpr unsigned int Class_1_2AC45833F3CC8C86_TypeDefinitionIndex = 71300;

class Class_1_2AC45833F3CC8C86 : public ::System::Object
{
public:
	::MoleMole::MonoBuddyStairAnimCorrector* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Boolean Field_1_8; // 0x1C
	::System::Boolean Field_1_6; // 0x1D
	::System::Boolean Field_1_0; // 0x1E
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_1_C11E3340663BA3CE(::Class_1_2AC45833F3CC8C86* a1)
	{
		return ((::System::Void(*)(::Class_1_2AC45833F3CC8C86*))((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_C11E3340663BA3CE_OFFSET))(a1);
	}

	static ::Class_1_2AC45833F3CC8C86* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_2AC45833F3CC8C86*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC45833F3CC8C86_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}
};
