#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_F5805CBBD0353DD6;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_712DA4FA9C6B2896_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13528AF0)
#define CLASS_2_712DA4FA9C6B2896_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13528C20)
#define CLASS_2_712DA4FA9C6B2896_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x13528A20)
#define CLASS_2_712DA4FA9C6B2896_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13528A70)
#define CLASS_2_712DA4FA9C6B2896_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x135289C0)
#define CLASS_2_712DA4FA9C6B2896__CTOR_OFFSET UNITYSDK_OFFSET(0x13528B90)
#define CLASS_2_712DA4FA9C6B2896__ONBIND_OFFSET UNITYSDK_OFFSET(0x13528940)
#define CLASS_2_712DA4FA9C6B2896___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13528BC0)

inline static constexpr unsigned int Class_2_712DA4FA9C6B2896_TypeDefinitionIndex = 67454;

class Class_2_712DA4FA9C6B2896 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::LocalizedText* Field_2_1; // 0x60
	::Class_1_F5805CBBD0353DD6* Field_2_2; // 0x68
	::UnityEngine::Animation* Field_2_3; // 0x70
	::System::Int32 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_712DA4FA9C6B2896_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
