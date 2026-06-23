#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEventPattern; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_BC8B3F44D806899C___C_METHOD_1_DAD682E0261D9629_OFFSET UNITYSDK_OFFSET(0xD35AAE0)
#define CLASS_1_BC8B3F44D806899C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD35AA90)
#define CLASS_1_BC8B3F44D806899C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD35AAD0)

inline static constexpr unsigned int Class_1_BC8B3F44D806899C___c_TypeDefinitionIndex = 40847;

class Class_1_BC8B3F44D806899C___c : public ::System::Object
{
public:
	static ::Class_1_BC8B3F44D806899C___c** StaticGet___9()
	{
		return (::Class_1_BC8B3F44D806899C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B3F44D806899C___c_TypeDefinitionIndex)->GetStaticField(0x38690);
	}
	static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B3F44D806899C___c_TypeDefinitionIndex)->GetStaticField(0x38698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAD682E0261D9629(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>))((::PBYTE)hIl2Cpp + CLASS_1_BC8B3F44D806899C___C_METHOD_1_DAD682E0261D9629_OFFSET))(this, a1);
	}
};
