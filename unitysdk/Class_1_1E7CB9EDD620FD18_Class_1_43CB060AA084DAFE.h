#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1E7CB9EDD620FD18;
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }

#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_43CB060AA084DAFE_METHOD_1_225BAF300827F6DE_OFFSET UNITYSDK_OFFSET(0x18A4C1D0)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_43CB060AA084DAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4C1C0)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Class_1_43CB060AA084DAFE_TypeDefinitionIndex = 87384;

class Class_1_1E7CB9EDD620FD18_Class_1_43CB060AA084DAFE : public ::System::Object
{
public:
	::Class_1_1E7CB9EDD620FD18* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_43CB060AA084DAFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_225BAF300827F6DE(::System::UInt32 a1, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_43CB060AA084DAFE_METHOD_1_225BAF300827F6DE_OFFSET))(this, a1, a2);
	}
};
