#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ItemType.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_097D65E85B32E0F5.h"
#include "unitysdk/Struct_2_5E661670EA3C1EB7.h"
#include "unitysdk/Struct_2_C6E526B756DF2DD6.h"
#include "unitysdk/System/Object.h"

class Class_1_3DEF26C653AFADFD;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_38CD02622A43811A_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1C519D50)
#define CLASS_1_38CD02622A43811A_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C519C70)
#define CLASS_1_38CD02622A43811A_GET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x1C519D10)
#define CLASS_1_38CD02622A43811A_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1C519D30)
#define CLASS_1_38CD02622A43811A_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C519C50)
#define CLASS_1_38CD02622A43811A_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1C519CF0)
#define CLASS_1_38CD02622A43811A_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C519CD0)
#define CLASS_1_38CD02622A43811A_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C519C90)
#define CLASS_1_38CD02622A43811A_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C519CB0)
#define CLASS_1_38CD02622A43811A_METHOD_1_22B0203582CB0ACC_OFFSET UNITYSDK_OFFSET(0x1C519580)
#define CLASS_1_38CD02622A43811A_METHOD_1_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x1C519BF0)
#define CLASS_1_38CD02622A43811A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1C519A30)
#define CLASS_1_38CD02622A43811A_METHOD_1_5FF24E983B0495AF_OFFSET UNITYSDK_OFFSET(0x1C5199E0)
#define CLASS_1_38CD02622A43811A_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1C518E00)
#define CLASS_1_38CD02622A43811A_METHOD_1_94C7F832314C1308_OFFSET UNITYSDK_OFFSET(0x1C519920)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C5198C0)
#define CLASS_1_38CD02622A43811A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1C519A80)
#define CLASS_1_38CD02622A43811A_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x1C519B30)
#define CLASS_1_38CD02622A43811A_METHOD_1_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x1C519B90)
#define CLASS_1_38CD02622A43811A_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1C519D60)
#define CLASS_1_38CD02622A43811A_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C519C80)
#define CLASS_1_38CD02622A43811A_SET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x1C519D20)
#define CLASS_1_38CD02622A43811A_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1C519D40)
#define CLASS_1_38CD02622A43811A_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C519C60)
#define CLASS_1_38CD02622A43811A_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1C519D00)
#define CLASS_1_38CD02622A43811A_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C519CE0)
#define CLASS_1_38CD02622A43811A_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C519CA0)
#define CLASS_1_38CD02622A43811A_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C519CC0)
#define CLASS_1_38CD02622A43811A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C519050)
#define CLASS_1_38CD02622A43811A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C518D60)

inline static constexpr unsigned int Class_1_38CD02622A43811A_TypeDefinitionIndex = 41464;

class Class_1_38CD02622A43811A : public ::System::Object
{
public:
	::Il2CppArray<::RPG::MVector2>* _Points_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DJNNPKLFBGF; // 0x18
	::Class_1_3DEF26C653AFADFD* _Owner_k__BackingField; // 0x20
	::Il2CppArray<::Struct_2_C6E526B756DF2DD6>* HIMDGIKDMHP; // 0x28
	::RPG::Client::LittleGame::Marble::ShapeType _Shape_k__BackingField; // 0x30
	::RPG::MVector2 LDDBFJDDNJO; // 0x34
	::System::UInt32 _Id_k__BackingField; // 0x3C
	::RPG::MVector2 BJFPDFGHJIG; // 0x40
	::RPG::MVector2 HFOMPEEAPCG; // 0x48
	::RPG::MVector2 BBFOLEOPPPL; // 0x50
	::System::Single _Mass_k__BackingField; // 0x58
	::RPG::MVector2 BJFOFLLEPAI; // 0x5C
	::RPG::MVector2 BKKKJLAGMEI; // 0x64
	::RPG::Client::LittleGame::Marble::ItemType _Type_k__BackingField; // 0x6C
	::RPG::MVector2 NIBGNGICDOO; // 0x70
	::Struct_2_097D65E85B32E0F5 PPKHNNBEOEL; // 0x78
	::System::Single CAOIALIDCNN; // 0x88
	::System::Boolean _IsInside_k__BackingField; // 0x8C
	::System::Boolean _Enable_k__BackingField; // 0x8D
	::Struct_2_5E661670EA3C1EB7 EFLBKPGNNPM; // 0x90
	::System::Single _Radius_k__BackingField; // 0x9C

	::System::Void _ctor(::Class_1_3DEF26C653AFADFD* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::Marble::ItemType a3, ::RPG::MVector2 a4, ::RPG::MVector2 a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*, ::System::UInt32, ::RPG::Client::LittleGame::Marble::ItemType, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1(::Class_1_3DEF26C653AFADFD* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::MVector2>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*, ::System::UInt32, ::Il2CppArray<::RPG::MVector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_F693D0E62C0A7D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_F693D0E62C0A7D5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_3783F0665AED1E64_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::Class_1_3DEF26C653AFADFD* get_Owner()
	{
		return ((::Class_1_3DEF26C653AFADFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_OWNER_OFFSET))(this, a1);
	}

	::System::UInt32 get_Id()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ID_OFFSET))(this);
	}

	::System::Void set_Id(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Marble::ShapeType get_Shape()
	{
		return ((::RPG::Client::LittleGame::Marble::ShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_SHAPE_OFFSET))(this);
	}

	::System::Void set_Shape(::RPG::Client::LittleGame::Marble::ShapeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ShapeType))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_SHAPE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Marble::ItemType get_Type()
	{
		return ((::RPG::Client::LittleGame::Marble::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::LittleGame::Marble::ItemType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ItemType))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_RADIUS_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::MVector2>* get_Points()
	{
		return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_POINTS_OFFSET))(this);
	}

	::System::Void set_Points(::Il2CppArray<::RPG::MVector2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_POINTS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInside()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ISINSIDE_OFFSET))(this);
	}

	::System::Void set_IsInside(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ISINSIDE_OFFSET))(this, a1);
	}

	::System::Single get_Mass()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_MASS_OFFSET))(this);
	}

	::System::Void set_Mass(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_MASS_OFFSET))(this, a1);
	}

	::System::Boolean get_Enable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_GET_ENABLE_OFFSET))(this);
	}

	::System::Void set_Enable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38CD02622A43811A_SET_ENABLE_OFFSET))(this, a1);
	}
};
