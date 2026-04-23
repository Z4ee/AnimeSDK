#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ItemType.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_097D65E85B32E0F5.h"
#include "unitysdk/Struct_2_5E661670EA3C1EB7.h"
#include "unitysdk/Struct_2_C6E526B756DF2DD6.h"
#include "unitysdk/System/Object.h"

class Class_1_9671734BA1DFB3F8;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_38CD02622A43811A_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x17E58F70)
#define CLASS_1_38CD02622A43811A_GET_ID_OFFSET UNITYSDK_OFFSET(0x17E58E90)
#define CLASS_1_38CD02622A43811A_GET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x17E58F30)
#define CLASS_1_38CD02622A43811A_GET_MASS_OFFSET UNITYSDK_OFFSET(0x17E58F50)
#define CLASS_1_38CD02622A43811A_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x17E58E70)
#define CLASS_1_38CD02622A43811A_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x17E58F10)
#define CLASS_1_38CD02622A43811A_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x17E58EF0)
#define CLASS_1_38CD02622A43811A_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x17E58EB0)
#define CLASS_1_38CD02622A43811A_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17E58ED0)
#define CLASS_1_38CD02622A43811A_METHOD_1_22B0203582CB0ACC_OFFSET UNITYSDK_OFFSET(0x17E587A0)
#define CLASS_1_38CD02622A43811A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17E58C50)
#define CLASS_1_38CD02622A43811A_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x17E58E10)
#define CLASS_1_38CD02622A43811A_METHOD_1_5FF24E983B0495AF_OFFSET UNITYSDK_OFFSET(0x17E58C00)
#define CLASS_1_38CD02622A43811A_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x17E57FC0)
#define CLASS_1_38CD02622A43811A_METHOD_1_94C7F832314C1308_OFFSET UNITYSDK_OFFSET(0x17E58B40)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E58AE0)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x17E58CA0)
#define CLASS_1_38CD02622A43811A_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x17E58D50)
#define CLASS_1_38CD02622A43811A_METHOD_1_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x17E58DB0)
#define CLASS_1_38CD02622A43811A_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x17E58F80)
#define CLASS_1_38CD02622A43811A_SET_ID_OFFSET UNITYSDK_OFFSET(0x17E58EA0)
#define CLASS_1_38CD02622A43811A_SET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x17E58F40)
#define CLASS_1_38CD02622A43811A_SET_MASS_OFFSET UNITYSDK_OFFSET(0x17E58F60)
#define CLASS_1_38CD02622A43811A_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x17E58E80)
#define CLASS_1_38CD02622A43811A_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x17E58F20)
#define CLASS_1_38CD02622A43811A_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x17E58F00)
#define CLASS_1_38CD02622A43811A_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x17E58EC0)
#define CLASS_1_38CD02622A43811A_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17E58EE0)
#define CLASS_1_38CD02622A43811A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E58250)
#define CLASS_1_38CD02622A43811A__CTOR_OFFSET UNITYSDK_OFFSET(0x17E57F20)

inline static constexpr unsigned int Class_1_38CD02622A43811A_TypeDefinitionIndex = 38949;

class Class_1_38CD02622A43811A : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_C6E526B756DF2DD6>* Field_1_19; // 0x10
	::Class_1_9671734BA1DFB3F8* _Owner_k__BackingField; // 0x18
	::Il2CppArray<::RPG::MVector2>* _Points_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_17; // 0x28
	::System::Single _Radius_k__BackingField; // 0x30
	::System::Single Field_1_11; // 0x34
	::RPG::MVector2 Field_1_5; // 0x38
	::RPG::MVector2 Field_1_4; // 0x40
	::RPG::MVector2 Field_1_7; // 0x48
	::RPG::MVector2 Field_1_10; // 0x50
	::RPG::MVector2 Field_1_8; // 0x58
	::Struct_2_5E661670EA3C1EB7 Field_1_20; // 0x60
	::System::Boolean _Enable_k__BackingField; // 0x6C
	::System::Boolean _IsInside_k__BackingField; // 0x6D
	::System::Single _Mass_k__BackingField; // 0x70
	::RPG::MVector2 Field_1_9; // 0x74
	::RPG::MVector2 Field_1_6; // 0x7C
	::Struct_2_097D65E85B32E0F5 Field_1_18; // 0x84
	::System::UInt32 _Id_k__BackingField; // 0x94
	::RPG::Client::LittleGame::Marble::ShapeType _Shape_k__BackingField; // 0x98
	::RPG::Client::LittleGame::Marble::ItemType _Type_k__BackingField; // 0x9C

	::System::Void _ctor(::Class_1_9671734BA1DFB3F8* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::Marble::ItemType a3, ::RPG::MVector2 a4, ::RPG::MVector2 a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*, ::System::UInt32, ::RPG::Client::LittleGame::Marble::ItemType, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1(::Class_1_9671734BA1DFB3F8* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::MVector2>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*, ::System::UInt32, ::Il2CppArray<::RPG::MVector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_22B0203582CB0ACC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_22B0203582CB0ACC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_94C7F832314C1308(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_94C7F832314C1308_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FF24E983B0495AF(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_5FF24E983B0495AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_1_F693D0E62C0A7D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_F693D0E62C0A7D5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::Class_1_9671734BA1DFB3F8* get_Owner()
	{
		return ((::Class_1_9671734BA1DFB3F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_1_9671734BA1DFB3F8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_OWNER_OFFSET))(this, value);
	}

	::System::UInt32 get_Id()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ID_OFFSET))(this);
	}

	::System::Void set_Id(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ID_OFFSET))(this, value);
	}

	::RPG::Client::LittleGame::Marble::ShapeType get_Shape()
	{
		return ((::RPG::Client::LittleGame::Marble::ShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_SHAPE_OFFSET))(this);
	}

	::System::Void set_Shape(::RPG::Client::LittleGame::Marble::ShapeType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ShapeType))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_SHAPE_OFFSET))(this, value);
	}

	::RPG::Client::LittleGame::Marble::ItemType get_Type()
	{
		return ((::RPG::Client::LittleGame::Marble::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::LittleGame::Marble::ItemType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ItemType))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_TYPE_OFFSET))(this, value);
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_RADIUS_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::MVector2>* get_Points()
	{
		return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_POINTS_OFFSET))(this);
	}

	::System::Void set_Points(::Il2CppArray<::RPG::MVector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_POINTS_OFFSET))(this, value);
	}

	::System::Boolean get_IsInside()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ISINSIDE_OFFSET))(this);
	}

	::System::Void set_IsInside(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ISINSIDE_OFFSET))(this, value);
	}

	::System::Single get_Mass()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_MASS_OFFSET))(this);
	}

	::System::Void set_Mass(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_MASS_OFFSET))(this, value);
	}

	::System::Boolean get_Enable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ENABLE_OFFSET))(this);
	}

	::System::Void set_Enable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ENABLE_OFFSET))(this, value);
	}
};
