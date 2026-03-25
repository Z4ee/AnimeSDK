#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_06E3452A211FC6E5.h"
#include "unitysdk/Class_4_2C998C47FAC7F5C7_BossDotStyle.h"

class Class_1_70697F531F566942_1;
class Class_2_7AF239689ABF28DD;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x109EF1D0)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_21FA0052FD9E480B_OFFSET UNITYSDK_OFFSET(0x109EF350)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x109EF090)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x109EEEA0)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x109EEFE0)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x109EF230)
#define CLASS_4_2C998C47FAC7F5C7_METHOD_4_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x109EEF90)
#define CLASS_4_2C998C47FAC7F5C7__CTOR_OFFSET UNITYSDK_OFFSET(0x109EF2D0)
#define CLASS_4_2C998C47FAC7F5C7__ONBIND_OFFSET UNITYSDK_OFFSET(0x109EEC30)
#define CLASS_4_2C998C47FAC7F5C7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x109EF340)

inline static constexpr unsigned int Class_4_2C998C47FAC7F5C7_TypeDefinitionIndex = 58673;

class Class_4_2C998C47FAC7F5C7 : public ::Class_3_06E3452A211FC6E5
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_6; // 0x0
	// static const ::System::String* Field_4_7; // 0x0
	// static const ::System::String* Field_4_8; // 0x0
	::Class_2_7AF239689ABF28DD* Field_4_1; // 0x158
	::UnityEngine::Transform* Field_4_4; // 0x160
	::UnityEngine::Transform* Field_4_5; // 0x168
	::UnityEngine::Transform* Field_4_3; // 0x170
	::Class_4_2C998C47FAC7F5C7_BossDotStyle Field_4_2; // 0x178
	::System::Int32 Field_4_10; // 0x17C
	::System::Int32 Field_4_11; // 0x180
	::System::Int32 Field_4_9; // 0x184

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_368884BBCA3D2697(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Method_4_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_4_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_078D85152011B919_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_21FA0052FD9E480B(::Class_1_70697F531F566942_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_4_2C998C47FAC7F5C7_METHOD_4_21FA0052FD9E480B_OFFSET))(this, P0);
	}
};
