#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/System/Object.h"

class Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE;
class Class_1_585FC61876C1A1D5_Class_1_F76914C704498E50;
class Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C;
class Class_1_96C82B73FFE758FB;
class Class_1_E4CB20B056222958;
class Class_2_8B82B82888342DD7;
class Class_3_301DB96170A54A53;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class BlockEnvExportData; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_463D937AB9C3D339;

#define CLASS_1_585FC61876C1A1D5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x8F4B070)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_0E759D22D4D053A1_OFFSET UNITYSDK_OFFSET(0x8F4C810)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_0E9527FD3E765427_OFFSET UNITYSDK_OFFSET(0x8F4F9E0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_1CD4961C0977FC92_OFFSET UNITYSDK_OFFSET(0x8F4E000)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_21AF420B8FDAB6E9_OFFSET UNITYSDK_OFFSET(0x8F4DEB0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_231A86DB4738C48B_1_OFFSET UNITYSDK_OFFSET(0x8F4B020)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x8F4AFD0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_2780ED2682C2C877_OFFSET UNITYSDK_OFFSET(0x8F4AC70)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x8F4BDC0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_2BA09DE039A6C9E7_OFFSET UNITYSDK_OFFSET(0x8F4A3C0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_306C0EB702EF66EC_OFFSET UNITYSDK_OFFSET(0x8F4B530)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_3254CFD8FF5F661A_OFFSET UNITYSDK_OFFSET(0x8F50630)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_336E64A79B43A60E_OFFSET UNITYSDK_OFFSET(0x8F4F530)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_33F68CBA78A78894_OFFSET UNITYSDK_OFFSET(0x8F4BF60)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_3760DB1A2C54E7CE_OFFSET UNITYSDK_OFFSET(0x8F4B0B0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_3D94EF5442615D94_OFFSET UNITYSDK_OFFSET(0x8F4F690)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_48513AA63EE9831A_OFFSET UNITYSDK_OFFSET(0x8F4B2E0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x8F4F3E0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x8F4F160)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x8F4AF60)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_8493CE1241F7D2DF_OFFSET UNITYSDK_OFFSET(0x8F50240)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_8A737C1BEDBC65F2_OFFSET UNITYSDK_OFFSET(0x8F4BD30)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_8C228A118C1331B1_OFFSET UNITYSDK_OFFSET(0x8F4E910)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_8E39ECAE8E676139_OFFSET UNITYSDK_OFFSET(0x8F4C3F0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_90353859A9A64108_OFFSET UNITYSDK_OFFSET(0x8F4E660)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8F4AF70)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8F4ADC0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_9C22EA032B17E399_OFFSET UNITYSDK_OFFSET(0x8F502F0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x8F4F350)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_ADDB59C50AF3252C_OFFSET UNITYSDK_OFFSET(0x8F4AE60)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_BDFF58F3A39E8AA0_OFFSET UNITYSDK_OFFSET(0x8F50570)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_C2895C5ED5B5257C_OFFSET UNITYSDK_OFFSET(0x8F4DD00)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8F4AFC0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_C97692BA4CC0F1AD_OFFSET UNITYSDK_OFFSET(0x8F4D8A0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8F4E8C0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8F508E0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x8F50920)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F4E880)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_CEDD6FDE467DCEB6_OFFSET UNITYSDK_OFFSET(0x8F4C540)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_D593447C1E20858D_OFFSET UNITYSDK_OFFSET(0x8F4E2B0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_DB84B525E4283E39_OFFSET UNITYSDK_OFFSET(0x8F50890)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_DD317BA5D93AE412_OFFSET UNITYSDK_OFFSET(0x8F4E440)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_E098429685F551E5_OFFSET UNITYSDK_OFFSET(0x8F4BFD0)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_E46AF69FAB59AFD2_OFFSET UNITYSDK_OFFSET(0x8F4FB40)
#define CLASS_1_585FC61876C1A1D5_METHOD_1_ED7C575FDCC24095_OFFSET UNITYSDK_OFFSET(0x8F50960)
#define CLASS_1_585FC61876C1A1D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F509B0)
#define CLASS_1_585FC61876C1A1D5__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4A890)

inline static constexpr unsigned int Class_1_585FC61876C1A1D5_TypeDefinitionIndex = 45777;

class Class_1_585FC61876C1A1D5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Queue_1<::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_585FC61876C1A1D5_TypeDefinitionIndex)->GetStaticField(0x5BFC0);
	}
	::System::String* Field_1_11; // 0x10
	::RPG::Client::LRUCache_2<::System::Int32, ::Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE*>* Field_1_3; // 0x18
	::Class_3_301DB96170A54A53* Field_1_12; // 0x20
	::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE*>* Field_1_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_585FC61876C1A1D5_Class_1_F76914C704498E50*>* Field_1_9; // 0x40
	::Class_1_96C82B73FFE758FB* Field_1_0; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x50
	::Class_2_8B82B82888342DD7* Field_1_1; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* Field_1_5; // 0x60
	::System::Int64 Field_1_4; // 0x68

	::System::Void _ctor(::Class_1_96C82B73FFE758FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96C82B73FFE758FB*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5__CCTOR_OFFSET))();
	}

	::System::Double Method_1_2BA09DE039A6C9E7()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_2BA09DE039A6C9E7_OFFSET))(this);
	}

	static ::System::Void Method_1_ADDB59C50AF3252C(::Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE* a1)
	{
		return ((::System::Void(*)(::Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_ADDB59C50AF3252C_OFFSET))(a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>* Method_1_2780ED2682C2C877()
	{
		return ((::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightInstanceID, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_2780ED2682C2C877_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_1_231A86DB4738C48B(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_231A86DB4738C48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_231A86DB4738C48B_1(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_231A86DB4738C48B_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	::System::Void Method_1_3760DB1A2C54E7CE(::System::Int32 a1, ::RPG::Client::IAssetOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_3760DB1A2C54E7CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48513AA63EE9831A(::System::Int32 a1, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_48513AA63EE9831A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_306C0EB702EF66EC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_306C0EB702EF66EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8A737C1BEDBC65F2(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_8A737C1BEDBC65F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_1_33F68CBA78A78894(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_33F68CBA78A78894_OFFSET))(this, a1);
	}

	::System::Void Method_1_E098429685F551E5(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_E098429685F551E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E39ECAE8E676139(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_8E39ECAE8E676139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEDD6FDE467DCEB6(::ScenenLightManager::BlockEnvExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_CEDD6FDE467DCEB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E759D22D4D053A1(::System::Int32 a1, ::System::Int32 a2, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_0E759D22D4D053A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C97692BA4CC0F1AD(::System::Int32 a1, ::System::Int32 a2, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_C97692BA4CC0F1AD_OFFSET))(this, a1, a2, a3);
	}

	::ScenenLightManager::BaseSceneLightExportData* Method_1_C2895C5ED5B5257C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::ScenenLightManager::BaseSceneLightExportData*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_C2895C5ED5B5257C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21AF420B8FDAB6E9(::System::Int32 a1, ::System::Int32 a2, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_21AF420B8FDAB6E9_OFFSET))(this, a1, a2, a3, a4);
	}

	::ScenenLightManager::LightInstanceID Method_1_1CD4961C0977FC92(::System::Int32 a1)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_1CD4961C0977FC92_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledList_1<::System::Int32>* Method_1_D593447C1E20858D(::ScenenLightManager::LightInstanceID a1)
	{
		return ((::Collections::Pooled::PooledList_1<::System::Int32>*(*)(::PVOID, ::ScenenLightManager::LightInstanceID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_D593447C1E20858D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD317BA5D93AE412(::System::Int64 a1, ::Collections::Pooled::PooledList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_DD317BA5D93AE412_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90353859A9A64108(::ScenenLightManager::LightInstanceID a1, ::Collections::Pooled::PooledList_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::LightInstanceID, ::Collections::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_90353859A9A64108_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::ScenenLightManager::BlockEnvExportDataHeader* Method_1_8C228A118C1331B1(::System::String* a1)
	{
		return ((::ScenenLightManager::BlockEnvExportDataHeader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_8C228A118C1331B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_1_336E64A79B43A60E(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_336E64A79B43A60E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3D94EF5442615D94(::Class_1_463D937AB9C3D339<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_463D937AB9C3D339<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_3D94EF5442615D94_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_0E9527FD3E765427(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_0E9527FD3E765427_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E46AF69FAB59AFD2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_E46AF69FAB59AFD2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_8493CE1241F7D2DF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_8493CE1241F7D2DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_BDFF58F3A39E8AA0(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_BDFF58F3A39E8AA0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_3254CFD8FF5F661A(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_3254CFD8FF5F661A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>* Method_1_9C22EA032B17E399(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E4CB20B056222958*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_9C22EA032B17E399_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB84B525E4283E39(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_DB84B525E4283E39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Single Method_1_ED7C575FDCC24095(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_METHOD_1_ED7C575FDCC24095_OFFSET))(this, a1);
	}
};
