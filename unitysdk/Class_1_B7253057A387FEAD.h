#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class ReaderWriterLock; }
template <typename T> class Class_1_B7253057A387FEAD;
template <typename T> class Class_1_F4A7883B6C19BA94;

inline static constexpr unsigned int Class_1_B7253057A387FEAD_TypeDefinitionIndex = 72056;

template <typename T>
class Class_1_B7253057A387FEAD : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	static ::System::Object** StaticGet_Field_1_3()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7253057A387FEAD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_B7253057A387FEAD<T>** StaticGet_Field_1_4()
	{
		return (::Class_1_B7253057A387FEAD<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7253057A387FEAD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F4A7883B6C19BA94<T>*>* Field_1_5; // 0x0
	::System::Threading::ReaderWriterLock* Field_1_6; // 0x0
};
