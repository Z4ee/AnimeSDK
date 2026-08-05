#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1115;
class Class_2_25A326E4E7F9FCFE;
class Class_2_8DF79805C340EF4E;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9FC30786612477D7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12726740)
#define CLASS_3_9FC30786612477D7_METHOD_3_1CA1012710A2BCD1_OFFSET UNITYSDK_OFFSET(0x12727470)
#define CLASS_3_9FC30786612477D7_METHOD_3_458E2BDED5FB0C7E_OFFSET UNITYSDK_OFFSET(0x12728950)
#define CLASS_3_9FC30786612477D7_METHOD_3_470EFEF328934608_OFFSET UNITYSDK_OFFSET(0x12728390)
#define CLASS_3_9FC30786612477D7_METHOD_3_4BFA336F3125D9F4_OFFSET UNITYSDK_OFFSET(0x12728210)
#define CLASS_3_9FC30786612477D7_METHOD_3_5CF38E61A282CF88_OFFSET UNITYSDK_OFFSET(0x12728430)
#define CLASS_3_9FC30786612477D7_METHOD_3_88F9DD86CB8DDD74_OFFSET UNITYSDK_OFFSET(0x127280B0)
#define CLASS_3_9FC30786612477D7_METHOD_3_8C58EDBE54A553FC_OFFSET UNITYSDK_OFFSET(0x12728A20)
#define CLASS_3_9FC30786612477D7_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x12728870)
#define CLASS_3_9FC30786612477D7_METHOD_3_A85D5ACCC4FE9A22_OFFSET UNITYSDK_OFFSET(0x12726D70)
#define CLASS_3_9FC30786612477D7_METHOD_3_ACB579D6CCE9CDCB_OFFSET UNITYSDK_OFFSET(0x12727710)
#define CLASS_3_9FC30786612477D7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x127288C0)
#define CLASS_3_9FC30786612477D7_METHOD_3_BCC08D7156BAF71D_OFFSET UNITYSDK_OFFSET(0x127285A0)
#define CLASS_3_9FC30786612477D7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12728C70)
#define CLASS_3_9FC30786612477D7_UPDATE_OFFSET UNITYSDK_OFFSET(0x12726B30)
#define CLASS_3_9FC30786612477D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x12726CE0)
#define CLASS_3_9FC30786612477D7__CTOR_OFFSET UNITYSDK_OFFSET(0x12726C90)

inline static constexpr unsigned int Class_3_9FC30786612477D7_TypeDefinitionIndex = 83171;

class Class_3_9FC30786612477D7 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9FC30786612477D7_TypeDefinitionIndex)->GetStaticField(0x4F350);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_A85D5ACCC4FE9A22(::Class_2_8DF79805C340EF4E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8DF79805C340EF4E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_A85D5ACCC4FE9A22_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_88F9DD86CB8DDD74(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_88F9DD86CB8DDD74_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_1CA1012710A2BCD1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_1CA1012710A2BCD1_OFFSET))(a1);
	}

	static ::System::Void Method_3_4BFA336F3125D9F4(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_4BFA336F3125D9F4_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_5CF38E61A282CF88(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_5CF38E61A282CF88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCC08D7156BAF71D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_BCC08D7156BAF71D_OFFSET))(this, a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_470EFEF328934608(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_470EFEF328934608_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_ACB579D6CCE9CDCB(::MoleMole::Battle::Entity* a1, ::Class_2_208CC9941471731A_1115* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_208CC9941471731A_1115*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_ACB579D6CCE9CDCB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_458E2BDED5FB0C7E(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_458E2BDED5FB0C7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8C58EDBE54A553FC(::System::String* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_8C58EDBE54A553FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
