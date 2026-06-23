#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C65CD064CE09212F_METHOD_1_45F54447EC2CFD66_OFFSET UNITYSDK_OFFSET(0xD37A050)
#define CLASS_1_C65CD064CE09212F_METHOD_1_F06C9C651749FA12_OFFSET UNITYSDK_OFFSET(0xD379FB0)
#define CLASS_1_C65CD064CE09212F__CTOR_OFFSET UNITYSDK_OFFSET(0xD379F30)

inline static constexpr unsigned int Class_1_C65CD064CE09212F_TypeDefinitionIndex = 54790;

class Class_1_C65CD064CE09212F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action_1<::System::Single>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65CD064CE09212F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F06C9C651749FA12(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_C65CD064CE09212F_METHOD_1_F06C9C651749FA12_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_45F54447EC2CFD66(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C65CD064CE09212F_METHOD_1_45F54447EC2CFD66_OFFSET))(this, a1, a2);
	}
};
