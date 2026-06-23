#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_4A19F5F36C49E4C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140BD000)
#define CLASS_1_4A19F5F36C49E4C7_METHOD_1_F4BE962E72F8D312_OFFSET UNITYSDK_OFFSET(0x140BD1E0)
#define CLASS_1_4A19F5F36C49E4C7__CTOR_OFFSET UNITYSDK_OFFSET(0x140BCEC0)

inline static constexpr unsigned int Class_1_4A19F5F36C49E4C7_TypeDefinitionIndex = 53458;

class Class_1_4A19F5F36C49E4C7 : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_2; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A19F5F36C49E4C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A19F5F36C49E4C7_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_F4BE962E72F8D312()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A19F5F36C49E4C7_METHOD_1_F4BE962E72F8D312_OFFSET))(this);
	}
};
