#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FBAC90A8C16E995A_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x16148ED0)
#define CLASS_1_FBAC90A8C16E995A_METHOD_1_9C4E8E8F5B9187C2_OFFSET UNITYSDK_OFFSET(0x1614A140)
#define CLASS_1_FBAC90A8C16E995A_METHOD_1_AD2F56E2A6577F67_OFFSET UNITYSDK_OFFSET(0x16149E60)
#define CLASS_1_FBAC90A8C16E995A_METHOD_1_CB3F59AF494CC3E2_OFFSET UNITYSDK_OFFSET(0x16149C00)
#define CLASS_1_FBAC90A8C16E995A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16148E30)

inline static constexpr unsigned int Class_1_FBAC90A8C16E995A_TypeDefinitionIndex = 90803;

class Class_1_FBAC90A8C16E995A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_3<::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4D9CF89F354D176D, ::System::Func_3<::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBAC90A8C16E995A_TypeDefinitionIndex)->GetStaticField(0x347A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBAC90A8C16E995A__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CB3F59AF494CC3E2(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_174*& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*&))((::PBYTE)hIl2Cpp + CLASS_1_FBAC90A8C16E995A_METHOD_1_CB3F59AF494CC3E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD2F56E2A6577F67(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_FBAC90A8C16E995A_METHOD_1_AD2F56E2A6577F67_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBAC90A8C16E995A_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_9C4E8E8F5B9187C2(::Struct_2_174BD6D3EB04B2EE& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_174*& a3)
	{
		return ((::System::Void(*)(::Struct_2_174BD6D3EB04B2EE&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_174*&))((::PBYTE)hIl2Cpp + CLASS_1_FBAC90A8C16E995A_METHOD_1_9C4E8E8F5B9187C2_OFFSET))(a1, a2, a3);
	}
};
