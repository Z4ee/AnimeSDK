#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_70741C2C9711CBE5_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x1D05F290)
#define CLASS_1_70741C2C9711CBE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05F5F0)

inline static constexpr unsigned int Class_1_70741C2C9711CBE5_TypeDefinitionIndex = 15234;

class Class_1_70741C2C9711CBE5 : public ::System::Object
{
public:
	::System::String* EEBNMNAJJHF; // 0x10
	::System::UInt32 BAFNGNPHHEC; // 0x18
	::System::UInt32 HMKPKMILCAE; // 0x1C
	::System::UInt32 JDGHCBCNMBI; // 0x20
	::System::UInt32 OPJDGJNAKFF; // 0x24
	::System::UInt32 HLLMOIBCKNO; // 0x28
	::System::UInt32 JPJLIFNHPAA; // 0x2C
	::System::UInt32 LEPEPJIHEFL; // 0x30
	::RPG::GameCore::CombatPowerRelicRarityType ILHDODKFKOI; // 0x34
	::RPG::GameCore::CombatPowerRelicRarityType NHAFDDACLLA; // 0x38
	::System::UInt32 OCMAKGJLFBJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70741C2C9711CBE5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_70741C2C9711CBE5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_70741C2C9711CBE5*&))((::PBYTE)hIl2Cpp + CLASS_1_70741C2C9711CBE5_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
