#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define CLASS_1_76E1242397074B5B_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x18F50B50)
#define CLASS_1_76E1242397074B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x18F50ED0)

inline static constexpr unsigned int Class_1_76E1242397074B5B_TypeDefinitionIndex = 14630;

class Class_1_76E1242397074B5B : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::RPG::Client::TextID Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x44
	::RPG::GameCore::TutorialGuideShowType Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E1242397074B5B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_76E1242397074B5B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_76E1242397074B5B*&))((::PBYTE)hIl2Cpp + CLASS_1_76E1242397074B5B_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
