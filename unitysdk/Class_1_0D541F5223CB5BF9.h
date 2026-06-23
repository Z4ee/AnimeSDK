#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0D541F5223CB5BF9_METHOD_1_52822F5B1A64B023_OFFSET UNITYSDK_OFFSET(0x1E86D980)
#define CLASS_1_0D541F5223CB5BF9_METHOD_1_C479446D157141C7_OFFSET UNITYSDK_OFFSET(0x1E86DAB0)
#define CLASS_1_0D541F5223CB5BF9_METHOD_1_D6C98B7E22401CBD_OFFSET UNITYSDK_OFFSET(0x1E86DD00)
#define CLASS_1_0D541F5223CB5BF9_METHOD_1_DB53FC7743582BA9_OFFSET UNITYSDK_OFFSET(0x1E86DE90)
#define CLASS_1_0D541F5223CB5BF9_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x1E86D940)
#define CLASS_1_0D541F5223CB5BF9_METHOD_1_FCC4E96B75BF0B8B_OFFSET UNITYSDK_OFFSET(0x1E86E010)
#define CLASS_1_0D541F5223CB5BF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86D8B0)
#define CLASS_1_0D541F5223CB5BF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E86D7C0)

inline static constexpr unsigned int Class_1_0D541F5223CB5BF9_TypeDefinitionIndex = 18442;

class Class_1_0D541F5223CB5BF9 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D541F5223CB5BF9_TypeDefinitionIndex)->GetStaticField(0x4100);
	}
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Action_1<::System::EventArgs*>*, ::System::Boolean>>* Field_1_4; // 0x10
	::System::EventArgs* Field_1_7; // 0x18
	::System::Collections::Generic::LinkedList_1<::System::Action_1<::System::EventArgs*>*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Action_1<::System::EventArgs*>*>* Field_1_3; // 0x28
	::System::Int32 Field_1_1; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_5; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9__CCTOR_OFFSET))();
	}

	::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_EBCA8E5D8C47FF73_OFFSET))(this);
	}

	::System::Void Method_1_52822F5B1A64B023(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_52822F5B1A64B023_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D6C98B7E22401CBD(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_D6C98B7E22401CBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB53FC7743582BA9(::System::Action_1<::System::EventArgs*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_DB53FC7743582BA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C479446D157141C7(::System::Action_1<::System::EventArgs*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_C479446D157141C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FCC4E96B75BF0B8B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_0D541F5223CB5BF9_METHOD_1_FCC4E96B75BF0B8B_OFFSET))(this, a1);
	}
};
