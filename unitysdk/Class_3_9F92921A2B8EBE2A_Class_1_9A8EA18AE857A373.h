#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F92921A2B8EBE2A;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373_METHOD_1_6BF38EC0D5DE5DB7_OFFSET UNITYSDK_OFFSET(0x14CEB460)
#define CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373_METHOD_1_F7F80C1DB6B12DA7_OFFSET UNITYSDK_OFFSET(0x14CEB5F0)
#define CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEB450)

inline static constexpr unsigned int Class_3_9F92921A2B8EBE2A_Class_1_9A8EA18AE857A373_TypeDefinitionIndex = 73775;

class Class_3_9F92921A2B8EBE2A_Class_1_9A8EA18AE857A373 : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::System::String*>* Field_1_1; // 0x10
	::Class_3_9F92921A2B8EBE2A* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BF38EC0D5DE5DB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373_METHOD_1_6BF38EC0D5DE5DB7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7F80C1DB6B12DA7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_CLASS_1_9A8EA18AE857A373_METHOD_1_F7F80C1DB6B12DA7_OFFSET))(this, a1);
	}
};
