#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_3.h"
#include "unitysdk/System/Object.h"

class Class_1_4C1C750FFB177DCC_1;
class Class_1_71EAE0D13B3DF503;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41D140539C030FAC_1_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA6CA7E0)
#define CLASS_1_41D140539C030FAC_1_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0xA6CA800)
#define CLASS_1_41D140539C030FAC_1_METHOD_1_5C25EE12C949E40F_OFFSET UNITYSDK_OFFSET(0xA6CA9E0)
#define CLASS_1_41D140539C030FAC_1_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA6CA7F0)
#define CLASS_1_41D140539C030FAC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CA950)

inline static constexpr unsigned int Class_1_41D140539C030FAC_1_TypeDefinitionIndex = 58698;

class Class_1_41D140539C030FAC_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_3, ::Class_1_71EAE0D13B3DF503*>* Field_1_0; // 0x10
	::Class_1_4C1C750FFB177DCC_1* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_1__CTOR_OFFSET))(this);
	}

	::Class_1_4C1C750FFB177DCC_1* get_Factory()
	{
		return ((::Class_1_4C1C750FFB177DCC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_1_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_4C1C750FFB177DCC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C1C750FFB177DCC_1*))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_1_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_71EAE0D13B3DF503* Method_1_1627AE6BCDE89B9B(::Struct_2_019938BC9C50B169_3& a1)
	{
		return ((::Class_1_71EAE0D13B3DF503*(*)(::PVOID, ::Struct_2_019938BC9C50B169_3&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_1_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}

	::Class_1_71EAE0D13B3DF503* Method_1_5C25EE12C949E40F(::Struct_2_019938BC9C50B169_3& a1)
	{
		return ((::Class_1_71EAE0D13B3DF503*(*)(::PVOID, ::Struct_2_019938BC9C50B169_3&))((::PBYTE)hIl2Cpp + CLASS_1_41D140539C030FAC_1_METHOD_1_5C25EE12C949E40F_OFFSET))(this, a1);
	}
};
