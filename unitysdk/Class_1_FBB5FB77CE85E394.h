#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_291;
namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FBB5FB77CE85E394_METHOD_1_2F68648057D19EB6_OFFSET UNITYSDK_OFFSET(0x14986EB0)
#define CLASS_1_FBB5FB77CE85E394_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x14986180)
#define CLASS_1_FBB5FB77CE85E394_METHOD_1_8A21DC8FC2A15E32_OFFSET UNITYSDK_OFFSET(0x14987790)
#define CLASS_1_FBB5FB77CE85E394_METHOD_1_CB3F59AF494CC3E2_OFFSET UNITYSDK_OFFSET(0x14987510)
#define CLASS_1_FBB5FB77CE85E394__CCTOR_OFFSET UNITYSDK_OFFSET(0x149860E0)

inline static constexpr unsigned int Class_1_FBB5FB77CE85E394_TypeDefinitionIndex = 53916;

class Class_1_FBB5FB77CE85E394 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_3<::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_3<::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBB5FB77CE85E394_TypeDefinitionIndex)->GetStaticField(0x4D0A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBB5FB77CE85E394__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBB5FB77CE85E394_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_2F68648057D19EB6(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_291*& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*&))((::PBYTE)hIl2Cpp + CLASS_1_FBB5FB77CE85E394_METHOD_1_2F68648057D19EB6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CB3F59AF494CC3E2(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_291*& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_291*&))((::PBYTE)hIl2Cpp + CLASS_1_FBB5FB77CE85E394_METHOD_1_CB3F59AF494CC3E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8A21DC8FC2A15E32(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_FBB5FB77CE85E394_METHOD_1_8A21DC8FC2A15E32_OFFSET))(a1, a2, a3);
	}
};
