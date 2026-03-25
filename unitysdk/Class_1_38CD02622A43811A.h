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

#define CLASS_1_38CD02622A43811A_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x167F99F0)
#define CLASS_1_38CD02622A43811A_GET_ID_OFFSET UNITYSDK_OFFSET(0x167F9910)
#define CLASS_1_38CD02622A43811A_GET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x167F99B0)
#define CLASS_1_38CD02622A43811A_GET_MASS_OFFSET UNITYSDK_OFFSET(0x167F99D0)
#define CLASS_1_38CD02622A43811A_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x167F98F0)
#define CLASS_1_38CD02622A43811A_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x167F9990)
#define CLASS_1_38CD02622A43811A_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x167F9970)
#define CLASS_1_38CD02622A43811A_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x167F9930)
#define CLASS_1_38CD02622A43811A_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x167F9950)
#define CLASS_1_38CD02622A43811A_METHOD_1_22B0203582CB0ACC_OFFSET UNITYSDK_OFFSET(0x167F9220)
#define CLASS_1_38CD02622A43811A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x167F96D0)
#define CLASS_1_38CD02622A43811A_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x167F9890)
#define CLASS_1_38CD02622A43811A_METHOD_1_5FF24E983B0495AF_OFFSET UNITYSDK_OFFSET(0x167F9680)
#define CLASS_1_38CD02622A43811A_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x167F8A40)
#define CLASS_1_38CD02622A43811A_METHOD_1_94C7F832314C1308_OFFSET UNITYSDK_OFFSET(0x167F95C0)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167F9560)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x167F9720)
#define CLASS_1_38CD02622A43811A_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x167F97D0)
#define CLASS_1_38CD02622A43811A_METHOD_1_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x167F9830)
#define CLASS_1_38CD02622A43811A_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x167F9A00)
#define CLASS_1_38CD02622A43811A_SET_ID_OFFSET UNITYSDK_OFFSET(0x167F9920)
#define CLASS_1_38CD02622A43811A_SET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x167F99C0)
#define CLASS_1_38CD02622A43811A_SET_MASS_OFFSET UNITYSDK_OFFSET(0x167F99E0)
#define CLASS_1_38CD02622A43811A_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x167F9900)
#define CLASS_1_38CD02622A43811A_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x167F99A0)
#define CLASS_1_38CD02622A43811A_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x167F9980)
#define CLASS_1_38CD02622A43811A_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x167F9940)
#define CLASS_1_38CD02622A43811A_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x167F9960)
#define CLASS_1_38CD02622A43811A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167F8CC0)
#define CLASS_1_38CD02622A43811A__CTOR_OFFSET UNITYSDK_OFFSET(0x167F89A0)

inline static constexpr unsigned int Class_1_38CD02622A43811A_TypeDefinitionIndex = 33159;

class Class_1_38CD02622A43811A : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_C6E526B756DF2DD6>* Field_1_19; // 0x10
	::Class_1_9671734BA1DFB3F8* _Owner_k__BackingField; // 0x18
	::Il2CppArray<::RPG::MVector2>* _Points_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_17; // 0x28
	::RPG::MVector2 Field_1_9; // 0x30
	::System::Boolean _Enable_k__BackingField; // 0x38
	::System::Boolean _IsInside_k__BackingField; // 0x39
	::Struct_2_097D65E85B32E0F5 Field_1_18; // 0x3C
	::RPG::MVector2 Field_1_4; // 0x4C
	::Struct_2_5E661670EA3C1EB7 Field_1_20; // 0x54
	::RPG::MVector2 Field_1_6; // 0x60
	::RPG::Client::LittleGame::Marble::ItemType _Type_k__BackingField; // 0x68
	::RPG::MVector2 Field_1_8; // 0x6C
	::System::Single _Mass_k__BackingField; // 0x74
	::System::Single Field_1_11; // 0x78
	::RPG::MVector2 Field_1_5; // 0x7C
	::RPG::Client::LittleGame::Marble::ShapeType _Shape_k__BackingField; // 0x84
	::RPG::MVector2 Field_1_7; // 0x88
	::System::Single _Radius_k__BackingField; // 0x90
	::System::UInt32 _Id_k__BackingField; // 0x94
	::RPG::MVector2 Field_1_10; // 0x98

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
