#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81D34D116310A358;
class Class_2_20B22960662844CF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532_METHOD_1_3F8713A217725689_OFFSET UNITYSDK_OFFSET(0x16AE6CB0)
#define CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x16AE6C50)
#define CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE6C40)

inline static constexpr unsigned int Class_2_20B22960662844CF_Class_1_F373495974EC8532_TypeDefinitionIndex = 65765;

class Class_2_20B22960662844CF_Class_1_F373495974EC8532 : public ::System::Object
{
public:
	::Class_2_20B22960662844CF* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532_METHOD_1_8FD0952225841B46_OFFSET))(this);
	}

	::System::Void Method_1_3F8713A217725689(::Class_1_DD0DD411D84DAED3<::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD0DD411D84DAED3<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F373495974EC8532_METHOD_1_3F8713A217725689_OFFSET))(this, a1);
	}
};
