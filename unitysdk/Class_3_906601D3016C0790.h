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

#define CLASS_3_906601D3016C0790_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x111FE7E0)
#define CLASS_3_906601D3016C0790_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x111FEA40)
#define CLASS_3_906601D3016C0790_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x111FEA30)
#define CLASS_3_906601D3016C0790_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x111FE990)
#define CLASS_3_906601D3016C0790_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x111FE940)
#define CLASS_3_906601D3016C0790_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x111FEA20)
#define CLASS_3_906601D3016C0790_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x111FE8C0)
#define CLASS_3_906601D3016C0790_METHOD_3_E692759ADE987AE3_OFFSET UNITYSDK_OFFSET(0x111FEA50)
#define CLASS_3_906601D3016C0790_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x111FE770)
#define CLASS_3_906601D3016C0790__CCTOR_OFFSET UNITYSDK_OFFSET(0x111FE830)
#define CLASS_3_906601D3016C0790__CTOR_OFFSET UNITYSDK_OFFSET(0x111FE8B0)

inline static constexpr unsigned int Class_3_906601D3016C0790_TypeDefinitionIndex = 67247;

class Class_3_906601D3016C0790 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0xB6; // 0x0
	::System::String* Field_3_4; // 0x48
	::MoleMole::Battle::Entity* Field_3_7; // 0x50
	::NapRenderEntity* Field_3_12; // 0x58
	::MoleMole::Config::ConfigIndicatedLight* Field_3_1; // 0x60
	::UnityEngine::Light* Field_3_6; // 0x68
	::MoleMole::Config::ConfigIndicatedLight* Field_3_2; // 0x70
	::System::Action_2<::Class_3_906601D3016C0790*, ::System::String*>* Field_3_5; // 0x78
	::System::String* Field_3_3; // 0x80
	::System::Single Field_3_9; // 0x88
	::Struct_2_FC595D1A561D8C6F Field_3_8; // 0x8C
	::System::Single Field_3_10; // 0xA8
	::System::Boolean Field_3_0; // 0xAC
	::System::Boolean Field_3_11; // 0xAD

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

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_E692759ADE987AE3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_906601D3016C0790_METHOD_3_E692759ADE987AE3_OFFSET))(this, a1);
	}
};
