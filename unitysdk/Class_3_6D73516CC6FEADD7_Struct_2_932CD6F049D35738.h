#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x41FF70)
#define CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738__CCTOR_OFFSET UNITYSDK_OFFSET(0x94E6060)
#define CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738__CTOR_OFFSET UNITYSDK_OFFSET(0x41FED0)

inline static constexpr unsigned int Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738_TypeDefinitionIndex = 40311;

struct alignas(8) Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738
{
	static ::System::UInt32* StaticGet_Field_2_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D73516CC6FEADD7_Struct_2_932CD6F049D35738_TypeDefinitionIndex)->GetStaticField(0xFDB0);
	}
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::UInt32 Field_2_4; // 0x1C
	::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle Field_2_5; // 0x20
	::System::String* Field_2_6; // 0x28
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_2_7; // 0x30

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::System::UInt32, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D73516CC6FEADD7_STRUCT_2_932CD6F049D35738_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
