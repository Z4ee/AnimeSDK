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

#define CLASS_1_544F425D4D7FE2EE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xB2392F0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB239370)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_277ECA0A8CD65E18_OFFSET UNITYSDK_OFFSET(0xB2396F0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_32D47ECDAB5A3A28_OFFSET UNITYSDK_OFFSET(0xB239440)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_55A1E5389DCDEAA7_OFFSET UNITYSDK_OFFSET(0xB239430)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_599753D24F060FF5_OFFSET UNITYSDK_OFFSET(0xB2398B0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_783358CF25AA8D86_OFFSET UNITYSDK_OFFSET(0xB239060)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_9CB392992E2BEBF8_OFFSET UNITYSDK_OFFSET(0xB239160)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_AB0E8F21576CD00F_OFFSET UNITYSDK_OFFSET(0xB2398C0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_C9F76EE1141E651C_OFFSET UNITYSDK_OFFSET(0xB239390)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_DB96A5C59B9D48AE_OFFSET UNITYSDK_OFFSET(0xB239700)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0xB239330)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB239310)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xB239350)
#define CLASS_1_544F425D4D7FE2EE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xB239300)
#define CLASS_1_544F425D4D7FE2EE__CTOR_OFFSET UNITYSDK_OFFSET(0xB239150)

inline static constexpr unsigned int Class_1_544F425D4D7FE2EE_TypeDefinitionIndex = 57521;

class Class_1_544F425D4D7FE2EE : public ::System::Object
{
public:
	::RPG::GameCore::AlleyMapGridConfig* Field_1_1; // 0x10
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

	::System::Void set_MapID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_SET_MAPID_OFFSET))(this, value);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>* Method_1_C9F76EE1141E651C()
	{
		return ((::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_C9F76EE1141E651C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* Method_1_55A1E5389DCDEAA7()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_55A1E5389DCDEAA7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* Method_1_277ECA0A8CD65E18()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_277ECA0A8CD65E18_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* Method_1_599753D24F060FF5()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_599753D24F060FF5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* Method_1_32D47ECDAB5A3A28()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_32D47ECDAB5A3A28_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* Method_1_DB96A5C59B9D48AE()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_DB96A5C59B9D48AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* Method_1_AB0E8F21576CD00F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_AB0E8F21576CD00F_OFFSET))(this);
	}
};
