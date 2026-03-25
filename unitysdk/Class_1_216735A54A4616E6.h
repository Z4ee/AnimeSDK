#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_216735A54A4616E6_GET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x8E04220)
#define CLASS_1_216735A54A4616E6_GET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x8E04200)
#define CLASS_1_216735A54A4616E6_METHOD_1_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x8E04290)
#define CLASS_1_216735A54A4616E6_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x8E04A10)
#define CLASS_1_216735A54A4616E6_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8E02FB0)
#define CLASS_1_216735A54A4616E6_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x8E03340)
#define CLASS_1_216735A54A4616E6_METHOD_1_862892C9E9B0CA20_OFFSET UNITYSDK_OFFSET(0x8E03BB0)
#define CLASS_1_216735A54A4616E6_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x8E04760)
#define CLASS_1_216735A54A4616E6_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x8E03550)
#define CLASS_1_216735A54A4616E6_METHOD_1_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0x8E02F50)
#define CLASS_1_216735A54A4616E6_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x8E03110)
#define CLASS_1_216735A54A4616E6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E03B50)
#define CLASS_1_216735A54A4616E6_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x8E043F0)
#define CLASS_1_216735A54A4616E6_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x8E03E00)
#define CLASS_1_216735A54A4616E6_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0x8E048C0)
#define CLASS_1_216735A54A4616E6_METHOD_1_F2B1D94CC79A43C5_OFFSET UNITYSDK_OFFSET(0x8E04240)
#define CLASS_1_216735A54A4616E6_SET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x8E04230)
#define CLASS_1_216735A54A4616E6_SET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x8E04210)
#define CLASS_1_216735A54A4616E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E04A60)
#define CLASS_1_216735A54A4616E6__CTOR_OFFSET UNITYSDK_OFFSET(0x8E02F40)

inline static constexpr unsigned int Class_1_216735A54A4616E6_TypeDefinitionIndex = 46173;

class Class_1_216735A54A4616E6 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_216735A54A4616E6_TypeDefinitionIndex)->GetStaticField(0x75D0);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_216735A54A4616E6_TypeDefinitionIndex)->GetStaticField(0x75D4);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_216735A54A4616E6_TypeDefinitionIndex)->GetStaticField(0x75D8);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_216735A54A4616E6_TypeDefinitionIndex)->GetStaticField(0x75DC);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_216735A54A4616E6_TypeDefinitionIndex)->GetStaticField(0x75E0);
	}
	::Class_1_9CBC71DC5240DC00* Field_1_6; // 0x10
	::RPG::GameCore::GameEntity* Field_1_5; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Int32 _StencilEye_k__BackingField; // 0x24
	::System::Int32 _MiniEmoStecilIndex_k__BackingField; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A07C2061B55C1547()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_A07C2061B55C1547_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 get_StencilEye()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_GET_STENCILEYE_OFFSET))(this);
	}

	::System::Void set_StencilEye(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_SET_STENCILEYE_OFFSET))(this, value);
	}

	::System::Int32 get_MiniEmoStecilIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_GET_MINIEMOSTECILINDEX_OFFSET))(this);
	}

	::System::Void set_MiniEmoStecilIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_SET_MINIEMOSTECILINDEX_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F2B1D94CC79A43C5(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_F2B1D94CC79A43C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_862892C9E9B0CA20(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_862892C9E9B0CA20_OFFSET))(this, a1);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_216735A54A4616E6_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}
};
