#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6945A1468A989492;
namespace RPG::GameCore { class AlleyBuffGridItemData; }
namespace RPG::GameCore { class AlleyDockGridItemData; }
namespace RPG::GameCore { class AlleyMapGridConfig; }
namespace RPG::GameCore { class AlleyShopGridItemData; }
namespace RPG::GameCore { class AlleyWalkableGridItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_544F425D4D7FE2EE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x19862970)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_0EA2A240B517F003_OFFSET UNITYSDK_OFFSET(0x19862C60)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_1921C22937F59355_OFFSET UNITYSDK_OFFSET(0x19862AD0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_22A235ECBF4F15B4_OFFSET UNITYSDK_OFFSET(0x198631F0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_25E27D1FDEEC1AB0_OFFSET UNITYSDK_OFFSET(0x19862F70)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_783358CF25AA8D86_OFFSET UNITYSDK_OFFSET(0x198626D0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x19862A80)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x198629E0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x19862990)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_9CB392992E2BEBF8_OFFSET UNITYSDK_OFFSET(0x198627D0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_A6CE7D7CE3BBCF3F_OFFSET UNITYSDK_OFFSET(0x19862FC0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_C9A65FE510B66233_OFFSET UNITYSDK_OFFSET(0x198631A0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_E12B0E3DBB318426_OFFSET UNITYSDK_OFFSET(0x19862C10)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x19862A30)
#define CLASS_1_544F425D4D7FE2EE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x19862980)
#define CLASS_1_544F425D4D7FE2EE__CTOR_OFFSET UNITYSDK_OFFSET(0x198627C0)

inline static constexpr unsigned int Class_1_544F425D4D7FE2EE_TypeDefinitionIndex = 62434;

class Class_1_544F425D4D7FE2EE : public ::System::Object
{
public:
	::RPG::GameCore::AlleyMapGridConfig* MLFPEINBJOI; // 0x10
	::System::UInt32 _MapID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE__CTOR_OFFSET))(this);
	}

	static ::Class_1_544F425D4D7FE2EE* Method_1_783358CF25AA8D86(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::Class_1_544F425D4D7FE2EE*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_783358CF25AA8D86_OFFSET))(a1, a2);
	}

	::Class_1_6945A1468A989492* Method_1_9CB392992E2BEBF8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_6945A1468A989492*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_9CB392992E2BEBF8_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_GET_MAPID_OFFSET))(this);
	}

	::System::Void set_MapID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_SET_MAPID_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>* Method_1_1921C22937F59355()
	{
		return ((::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_1921C22937F59355_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* Method_1_E12B0E3DBB318426()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_E12B0E3DBB318426_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* Method_1_25E27D1FDEEC1AB0()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_25E27D1FDEEC1AB0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* Method_1_C9A65FE510B66233()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_C9A65FE510B66233_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* Method_1_0EA2A240B517F003()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_0EA2A240B517F003_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* Method_1_A6CE7D7CE3BBCF3F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_A6CE7D7CE3BBCF3F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* Method_1_22A235ECBF4F15B4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_22A235ECBF4F15B4_OFFSET))(this);
	}
};
