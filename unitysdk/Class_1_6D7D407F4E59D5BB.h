#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4393199F378B6118;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D7D407F4E59D5BB_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x13B9C3E0)
#define CLASS_1_6D7D407F4E59D5BB_METHOD_1_4E627385F34F9D95_OFFSET UNITYSDK_OFFSET(0x13B9A380)
#define CLASS_1_6D7D407F4E59D5BB_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13B9C440)
#define CLASS_1_6D7D407F4E59D5BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B9C4B0)
#define CLASS_1_6D7D407F4E59D5BB__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9C3D0)

inline static constexpr unsigned int Class_1_6D7D407F4E59D5BB_TypeDefinitionIndex = 60018;

class Class_1_6D7D407F4E59D5BB : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D7D407F4E59D5BB_TypeDefinitionIndex)->GetStaticField(0x13670);
	}
	::System::Collections::Generic::List_1<::Class_1_4393199F378B6118*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D7D407F4E59D5BB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D7D407F4E59D5BB__CCTOR_OFFSET))();
	}

	static ::Class_1_6D7D407F4E59D5BB* Method_1_4E627385F34F9D95(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* a1)
	{
		return ((::Class_1_6D7D407F4E59D5BB*(*)(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D7D407F4E59D5BB_METHOD_1_4E627385F34F9D95_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D7D407F4E59D5BB_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D7D407F4E59D5BB_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
