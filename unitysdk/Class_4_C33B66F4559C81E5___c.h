#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28F0414D4F296993;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_C33B66F4559C81E5___C_METHOD_1_DEBF89A351F6D86F_OFFSET UNITYSDK_OFFSET(0x155A5740)
#define CLASS_4_C33B66F4559C81E5___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x155A5750)
#define CLASS_4_C33B66F4559C81E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155A56F0)
#define CLASS_4_C33B66F4559C81E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155A5730)

inline static constexpr unsigned int Class_4_C33B66F4559C81E5___c_TypeDefinitionIndex = 48725;

class Class_4_C33B66F4559C81E5___c : public ::System::Object
{
public:
	static ::Class_4_C33B66F4559C81E5___c** StaticGet___9()
	{
		return (::Class_4_C33B66F4559C81E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C33B66F4559C81E5___c_TypeDefinitionIndex)->GetStaticField(0x4A2E0);
	}
	static ::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C33B66F4559C81E5___c_TypeDefinitionIndex)->GetStaticField(0x4A2E8);
	}
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C33B66F4559C81E5___c_TypeDefinitionIndex)->GetStaticField(0x4A2F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C33B66F4559C81E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C33B66F4559C81E5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DEBF89A351F6D86F(::Class_1_28F0414D4F296993* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28F0414D4F296993*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_C33B66F4559C81E5___C_METHOD_1_DEBF89A351F6D86F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_C33B66F4559C81E5___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}
};
