#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionItemStatus.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_7FD18BCD0499974E.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
class Class_1_6CE70F4211D79CD5_8;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_DDDB57AA67C3A9EA_GET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x123BE730)
#define CLASS_1_DDDB57AA67C3A9EA_GET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x123BE650)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x123BE5C0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x123BE850)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x123BE670)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_483ECA2AADCA9775_OFFSET UNITYSDK_OFFSET(0x123BE750)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x123BEBF0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_7F99DD204643D534_OFFSET UNITYSDK_OFFSET(0x123BF140)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x123BE6D0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x123BEF40)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x123BEC80)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_984AC483B8A24BF2_OFFSET UNITYSDK_OFFSET(0x123BF0F0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x123BF0A0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_BFC42181680DB9D3_OFFSET UNITYSDK_OFFSET(0x123BEFB0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123BE7F0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_1_OFFSET UNITYSDK_OFFSET(0x123BE9F0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x123BE920)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123BE840)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_F6723BD610861926_OFFSET UNITYSDK_OFFSET(0x123BECF0)
#define CLASS_1_DDDB57AA67C3A9EA_SET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x123BE740)
#define CLASS_1_DDDB57AA67C3A9EA_SET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x123BE660)
#define CLASS_1_DDDB57AA67C3A9EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x123BF260)
#define CLASS_1_DDDB57AA67C3A9EA__CTOR_OFFSET UNITYSDK_OFFSET(0x123BEA80)

inline static constexpr unsigned int Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex = 65644;

class Class_1_DDDB57AA67C3A9EA : public ::System::Object
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_11()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0x11C00);
	}
	static ::System::UInt32* StaticGet_Field_1_9()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0x11C04);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0x11C08);
	}
	// static const ::System::String* Field_1_14; // 0x0
	::Class_1_6CE70F4211D79CD5_8* _DelayChangeData_k__BackingField; // 0x10
	::Class_1_DDDB57AA67C3A9EA* Field_1_12; // 0x18
	::Class_1_152140BAFD2DB102* Field_1_6; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::RPG::GameCore::ActionBarUIConfig* Field_1_13; // 0x30
	::Struct_2_7FD18BCD0499974E Field_1_4; // 0x38
	::System::Int32 Field_1_5; // 0xC8
	::RPG::Client::ActionItemType Field_1_2; // 0xCC
	::RPG::Client::ActionItemStatus Field_1_1; // 0xD0
	::System::UInt32 Field_1_0; // 0xD4
	::System::Int32 _PendingInsertAbilityPriority_k__BackingField; // 0xD8

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionItemStatus a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionItemStatus))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_115AC51E73D999C8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_115AC51E73D999C8_OFFSET))(this);
	}

	::System::Int32 get_PendingInsertAbilityPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_GET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this);
	}

	::System::Void set_PendingInsertAbilityPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_SET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::Class_1_6CE70F4211D79CD5_8* get_DelayChangeData()
	{
		return ((::Class_1_6CE70F4211D79CD5_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_GET_DELAYCHANGEDATA_OFFSET))(this);
	}

	::System::Void set_DelayChangeData(::Class_1_6CE70F4211D79CD5_8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_8*))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_SET_DELAYCHANGEDATA_OFFSET))(this, value);
	}

	::System::Void Method_1_483ECA2AADCA9775(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_483ECA2AADCA9775_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_1_OFFSET))(this);
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F6723BD610861926(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_F6723BD610861926_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_BFC42181680DB9D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_BFC42181680DB9D3_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_984AC483B8A24BF2(::RPG::GameCore::ActionBarUIConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionBarUIConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_984AC483B8A24BF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F99DD204643D534(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_7F99DD204643D534_OFFSET))(this, a1, a2);
	}
};
