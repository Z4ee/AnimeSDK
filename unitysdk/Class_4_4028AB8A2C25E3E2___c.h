#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3BC6FFBFA6077E08;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_4028AB8A2C25E3E2___C_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x1080E780)
#define CLASS_4_4028AB8A2C25E3E2___C_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x1080E850)
#define CLASS_4_4028AB8A2C25E3E2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1080E730)
#define CLASS_4_4028AB8A2C25E3E2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1080E770)

inline static constexpr unsigned int Class_4_4028AB8A2C25E3E2___c_TypeDefinitionIndex = 62565;

class Class_4_4028AB8A2C25E3E2___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4028AB8A2C25E3E2___c_TypeDefinitionIndex)->GetStaticField(0x31B70);
	}
	static ::System::Action_1<::Class_1_9465CC52E1CFB15A*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_9465CC52E1CFB15A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4028AB8A2C25E3E2___c_TypeDefinitionIndex)->GetStaticField(0x31B78);
	}
	static ::Class_4_4028AB8A2C25E3E2___c** StaticGet___9()
	{
		return (::Class_4_4028AB8A2C25E3E2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4028AB8A2C25E3E2___c_TypeDefinitionIndex)->GetStaticField(0x31B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_4028AB8A2C25E3E2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4028AB8A2C25E3E2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_09DA5ED950396F79(::Class_1_3BC6FFBFA6077E08* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_4028AB8A2C25E3E2___C_METHOD_1_09DA5ED950396F79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9D938B6A30770AD(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_4_4028AB8A2C25E3E2___C_METHOD_1_E9D938B6A30770AD_OFFSET))(this, a1);
	}
};
