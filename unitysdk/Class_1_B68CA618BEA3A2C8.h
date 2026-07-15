#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B68CA618BEA3A2C8_GET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x17A7C1D0)
#define CLASS_1_B68CA618BEA3A2C8_GET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x17A7C1B0)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x17A7C710)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x17A7C240)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_461D639BFE49CBBC_OFFSET UNITYSDK_OFFSET(0x17A7BDC0)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x17A7C9C0)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17A7AF80)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x17A7B310)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_862892C9E9B0CA20_OFFSET UNITYSDK_OFFSET(0x17A7BB70)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x17A7B520)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0x17A7AF20)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x17A7B0E0)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A7BB10)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x17A7C3A0)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0x17A7C870)
#define CLASS_1_B68CA618BEA3A2C8_METHOD_1_F2B1D94CC79A43C5_OFFSET UNITYSDK_OFFSET(0x17A7C1F0)
#define CLASS_1_B68CA618BEA3A2C8_SET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x17A7C1E0)
#define CLASS_1_B68CA618BEA3A2C8_SET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x17A7C1C0)
#define CLASS_1_B68CA618BEA3A2C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7CA10)
#define CLASS_1_B68CA618BEA3A2C8__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7AF10)

inline static constexpr unsigned int Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex = 54759;

class Class_1_B68CA618BEA3A2C8 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex)->GetStaticField(0x7450);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex)->GetStaticField(0x7454);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex)->GetStaticField(0x7458);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex)->GetStaticField(0x745C);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B68CA618BEA3A2C8_TypeDefinitionIndex)->GetStaticField(0x7460);
	}
	::Class_1_1342B57709FD7AC5* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_6; // 0x18
	::System::Int32 _StencilEye_k__BackingField; // 0x20
	::System::Int32 _MiniEmoStecilIndex_k__BackingField; // 0x24
	::System::Boolean Field_1_9; // 0x28
	::System::Boolean Field_1_10; // 0x29
	::System::Int32 Field_1_11; // 0x2C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A07C2061B55C1547()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_A07C2061B55C1547_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 get_StencilEye()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_GET_STENCILEYE_OFFSET))(this);
	}

	::System::Void set_StencilEye(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_SET_STENCILEYE_OFFSET))(this, a1);
	}

	::System::Int32 get_MiniEmoStecilIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_GET_MINIEMOSTECILINDEX_OFFSET))(this);
	}

	::System::Void set_MiniEmoStecilIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_SET_MINIEMOSTECILINDEX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F2B1D94CC79A43C5(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_F2B1D94CC79A43C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_862892C9E9B0CA20(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_862892C9E9B0CA20_OFFSET))(this, a1);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_1_461D639BFE49CBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B68CA618BEA3A2C8_METHOD_1_461D639BFE49CBBC_OFFSET))(this);
	}
};
