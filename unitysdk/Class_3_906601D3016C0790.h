#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"

class NapRenderEntity;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Light; }

#define CLASS_3_906601D3016C0790_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1AAB8E10)
#define CLASS_3_906601D3016C0790_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AAB9000)
#define CLASS_3_906601D3016C0790_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x1AAB9020)
#define CLASS_3_906601D3016C0790_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1AAB8F70)
#define CLASS_3_906601D3016C0790_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x1AAB9030)
#define CLASS_3_906601D3016C0790_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x1AAB9010)
#define CLASS_3_906601D3016C0790_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1AAB8EF0)
#define CLASS_3_906601D3016C0790_METHOD_3_E692759ADE987AE3_OFFSET UNITYSDK_OFFSET(0x1AAB9080)
#define CLASS_3_906601D3016C0790_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1AAB8DA0)
#define CLASS_3_906601D3016C0790__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAB8E60)
#define CLASS_3_906601D3016C0790__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB8EE0)

inline static constexpr unsigned int Class_3_906601D3016C0790_TypeDefinitionIndex = 71695;

class Class_3_906601D3016C0790 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0xC1; // 0x0
	::System::String* Field_3_3; // 0x48
	::System::String* Field_3_4; // 0x50
	::MoleMole::Config::ConfigIndicatedLight* Field_3_2; // 0x58
	::System::Action_2<::Class_3_906601D3016C0790*, ::System::String*>* Field_3_5; // 0x60
	::MoleMole::Config::ConfigIndicatedLight* Field_3_1; // 0x68
	::UnityEngine::Light* Field_3_6; // 0x70
	::MoleMole::Battle::Entity* Field_3_7; // 0x78
	::NapRenderEntity* Field_3_12; // 0x80
	::System::Boolean Field_3_11; // 0x88
	::System::Boolean Field_3_0; // 0x89
	::Struct_2_FC595D1A561D8C6F Field_3_8; // 0x8C
	::System::Single Field_3_10; // 0xA8
	::System::Single Field_3_9; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_906601D3016C0790* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_906601D3016C0790*(*)())((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_E692759ADE987AE3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_E692759ADE987AE3_OFFSET))(this, a1);
	}
};
