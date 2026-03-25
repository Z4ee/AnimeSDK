#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define CLASS_1_5CC058B5560FCA8B_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x17942BF0)
#define CLASS_1_5CC058B5560FCA8B__CTOR_OFFSET UNITYSDK_OFFSET(0x17942F90)

inline static constexpr unsigned int Class_1_5CC058B5560FCA8B_TypeDefinitionIndex = 14137;

class Class_1_5CC058B5560FCA8B : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* Field_1_6; // 0x10
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* Field_1_5; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::RPG::Client::TextID Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x40
	::RPG::GameCore::TutorialGuideShowType Field_1_3; // 0x44
	::System::Boolean Field_1_1; // 0x48
	::System::UInt32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC058B5560FCA8B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5CC058B5560FCA8B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5CC058B5560FCA8B*&))((::PBYTE)hIl2Cpp + CLASS_1_5CC058B5560FCA8B_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
