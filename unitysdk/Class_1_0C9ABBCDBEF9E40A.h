#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace System { class String; }

#define CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_5DC175524E3439FD_OFFSET UNITYSDK_OFFSET(0x1014B8E0)
#define CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_D5EC7CCC5D31E1ED_OFFSET UNITYSDK_OFFSET(0x1014B7A0)
#define CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_DB66A8394B46A1C5_OFFSET UNITYSDK_OFFSET(0x1014BB50)

inline static constexpr unsigned int Class_1_0C9ABBCDBEF9E40A_TypeDefinitionIndex = 62896;

class Class_1_0C9ABBCDBEF9E40A : public ::System::Object
{
public:
	static ::System::Void Method_1_D5EC7CCC5D31E1ED(::MoleMole::Config::ConfigAnimatorEventPattern* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigAnimatorEventPattern*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_D5EC7CCC5D31E1ED_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::AnimatorEvent* Method_1_DB66A8394B46A1C5(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::MoleMole::Config::AnimatorEvent*(*)(::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_DB66A8394B46A1C5_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::MoleMole::Config::AnimatorEvent*>* Method_1_5DC175524E3439FD(::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::MoleMole::Config::AnimatorEvent*>*(*)(::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C9ABBCDBEF9E40A_METHOD_1_5DC175524E3439FD_OFFSET))(a1, a2, a3);
	}
};
