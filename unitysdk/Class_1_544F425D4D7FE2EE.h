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

#define CLASS_1_544F425D4D7FE2EE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xAAD09F0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_0EA2A240B517F003_OFFSET UNITYSDK_OFFSET(0xAAD1230)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAAD0A70)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_1921C22937F59355_OFFSET UNITYSDK_OFFSET(0xAAD0A90)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_22A235ECBF4F15B4_OFFSET UNITYSDK_OFFSET(0xAAD0F80)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_783358CF25AA8D86_OFFSET UNITYSDK_OFFSET(0xAAD0770)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_9CB392992E2BEBF8_OFFSET UNITYSDK_OFFSET(0xAAD0860)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_9DB7E36C5EB09444_OFFSET UNITYSDK_OFFSET(0xAAD0BD0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_A6CE7D7CE3BBCF3F_OFFSET UNITYSDK_OFFSET(0xAAD1540)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_DB96A5C59B9D48AE_OFFSET UNITYSDK_OFFSET(0xAAD0BE0)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_E7910D89F461781D_OFFSET UNITYSDK_OFFSET(0xAAD0F70)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0xAAD0A30)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xAAD0A10)
#define CLASS_1_544F425D4D7FE2EE_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xAAD0A50)
#define CLASS_1_544F425D4D7FE2EE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xAAD0A00)
#define CLASS_1_544F425D4D7FE2EE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD1720)

inline static constexpr unsigned int Class_1_544F425D4D7FE2EE_TypeDefinitionIndex = 58333;

class Class_1_544F425D4D7FE2EE : public ::System::Object
{
public:
	::RPG::GameCore::AlleyMapGridConfig* Field_1_0; // 0x10
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

	::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>* Method_1_1921C22937F59355()
	{
		return ((::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_1921C22937F59355_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* Method_1_9DB7E36C5EB09444()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_9DB7E36C5EB09444_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* Method_1_DB96A5C59B9D48AE()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_DB96A5C59B9D48AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* Method_1_E7910D89F461781D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544F425D4D7FE2EE_METHOD_1_E7910D89F461781D_OFFSET))(this);
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
