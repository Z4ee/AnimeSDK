#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionItemStatus.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_157CBCDCB45BE900.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
class Class_1_6CE70F4211D79CD5_9;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_DDDB57AA67C3A9EA_GET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x172B7200)
#define CLASS_1_DDDB57AA67C3A9EA_GET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x172B7120)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0x172B70C0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x172B7360)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x172B7140)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x172B7460)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x172B7310)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_483ECA2AADCA9775_OFFSET UNITYSDK_OFFSET(0x172B7220)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x172B76B0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_7F99DD204643D534_OFFSET UNITYSDK_OFFSET(0x172B7CD0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x172B71A0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x172B7AD0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x172B7740)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_97F6923D7612A0EB_OFFSET UNITYSDK_OFFSET(0x172B77B0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_984AC483B8A24BF2_OFFSET UNITYSDK_OFFSET(0x172B7C80)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x172B7C30)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_BFC42181680DB9D3_OFFSET UNITYSDK_OFFSET(0x172B7B40)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x172B72C0)
#define CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x172B7520)
#define CLASS_1_DDDB57AA67C3A9EA_SET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x172B7210)
#define CLASS_1_DDDB57AA67C3A9EA_SET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x172B7130)
#define CLASS_1_DDDB57AA67C3A9EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x172B7DF0)
#define CLASS_1_DDDB57AA67C3A9EA__CTOR_OFFSET UNITYSDK_OFFSET(0x172B75B0)

inline static constexpr unsigned int Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex = 71187;

class Class_1_DDDB57AA67C3A9EA : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_BPGAHELKDDC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0xB3A0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_CPHFKNEPFMM()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0xB3A4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_JIPDDDFGJJN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDDB57AA67C3A9EA_TypeDefinitionIndex)->GetStaticField(0xB3A8);
	}
	// static const ::System::String* PLCIENDOJFJ; // 0x0
	::Class_1_6CE70F4211D79CD5_9* _DelayChangeData_k__BackingField; // 0x10
	::Class_1_DDDB57AA67C3A9EA* OFCLNGHDFEG; // 0x18
	::Class_1_152140BAFD2DB102* JHLCIJPFLGG; // 0x20
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
	::RPG::GameCore::ActionBarUIConfig* JBKNKBCCNPA; // 0x30
	::Struct_2_157CBCDCB45BE900 HCMHENAMLCD; // 0x38
	::System::Int32 _PendingInsertAbilityPriority_k__BackingField; // 0xC8
	::System::Boolean EJOCCPGEIPI; // 0xCC
	::System::Boolean DFHHKFNDECI; // 0xCD
	::RPG::Client::ActionItemStatus FFEPLIHOFLA; // 0xD0
	::System::Int32 GGEIJACCPCK; // 0xD4
	::System::UInt32 LCHLDHNIILN; // 0xD8
	::System::Int32 APJPPDLHEBO; // 0xDC
	::RPG::Client::ActionItemType LINLNNHIBAK; // 0xE0
	::RPG::Client::ActionBarItemAction MOEAIFDPOPI; // 0xE4

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionItemStatus a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionItemStatus))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_107247B6331E64C6_OFFSET))(this);
	}

	::System::Int32 get_PendingInsertAbilityPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_GET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this);
	}

	::System::Void set_PendingInsertAbilityPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_SET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::Class_1_6CE70F4211D79CD5_9* get_DelayChangeData()
	{
		return ((::Class_1_6CE70F4211D79CD5_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_GET_DELAYCHANGEDATA_OFFSET))(this);
	}

	::System::Void set_DelayChangeData(::Class_1_6CE70F4211D79CD5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_9*))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_SET_DELAYCHANGEDATA_OFFSET))(this, a1);
	}

	::System::Void Method_1_483ECA2AADCA9775(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_483ECA2AADCA9775_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
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

	::System::Int32 Method_1_97F6923D7612A0EB(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_DDDB57AA67C3A9EA_METHOD_1_97F6923D7612A0EB_OFFSET))(this, a1);
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
