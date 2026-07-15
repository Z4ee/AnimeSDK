#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91A4E66FC5A57602;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_17636E624781371D__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9AD10)

inline static constexpr unsigned int Class_1_17636E624781371D_TypeDefinitionIndex = 45286;

class Class_1_17636E624781371D : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_1_91A4E66FC5A57602*>* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17636E624781371D__CTOR_OFFSET))(this);
	}
};
