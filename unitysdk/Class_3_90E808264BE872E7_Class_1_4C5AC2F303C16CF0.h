#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_90E808264BE872E7_Class_1_379DA7F42CE93234_5;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0_METHOD_1_415A75B2E7C4EA38_OFFSET UNITYSDK_OFFSET(0xF29A920)
#define CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0_METHOD_1_DF174C56D697C3C9_OFFSET UNITYSDK_OFFSET(0xF29AA70)
#define CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0__CTOR_OFFSET UNITYSDK_OFFSET(0xF29A910)

inline static constexpr unsigned int Class_3_90E808264BE872E7_Class_1_4C5AC2F303C16CF0_TypeDefinitionIndex = 65159;

class Class_3_90E808264BE872E7_Class_1_4C5AC2F303C16CF0 : public ::System::Object
{
public:
	::Class_3_90E808264BE872E7_Class_1_379DA7F42CE93234_5* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_415A75B2E7C4EA38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0_METHOD_1_415A75B2E7C4EA38_OFFSET))(this);
	}

	::System::Void Method_1_DF174C56D697C3C9(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_3_90E808264BE872E7_CLASS_1_4C5AC2F303C16CF0_METHOD_1_DF174C56D697C3C9_OFFSET))(this, a1);
	}
};
