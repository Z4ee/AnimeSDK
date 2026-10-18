#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishItemKind.h"
#include "unitysdk/RPGTools/LDWhiteBox/PolishPrimitive.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C7968F86BC6ACC74__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F9820)

inline static constexpr unsigned int Class_1_C7968F86BC6ACC74_TypeDefinitionIndex = 48926;

class Class_1_C7968F86BC6ACC74 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* AnchorRotEuler; // 0x10
	::System::String* ScriptPath; // 0x18
	::Il2CppArray<::System::Single>* AnchorPos; // 0x20
	::System::String* Note; // 0x28
	::System::String* FbxPath; // 0x30
	::Il2CppArray<::System::Single>* Pos; // 0x38
	::Il2CppArray<::System::Single>* Size; // 0x40
	::Il2CppArray<::System::Single>* RotEuler; // 0x48
	::Il2CppArray<::System::Single>* Color; // 0x50
	::RPGTools::LDWhiteBox::PolishItemKind Kind; // 0x58
	::RPGTools::LDWhiteBox::PolishPrimitive Shape; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7968F86BC6ACC74__CTOR_OFFSET))(this);
	}
};
