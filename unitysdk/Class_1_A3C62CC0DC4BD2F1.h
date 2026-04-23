#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB880A8D2C9B0D4;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3C62CC0DC4BD2F1_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xE004DB0)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0xE004D50)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xE004D30)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE004D40)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xE004D70)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xE004D90)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xE005700)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE0054D0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_1F9015108CCAC51A_OFFSET UNITYSDK_OFFSET(0xE004DC0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_2A6D3E34BA2EF920_OFFSET UNITYSDK_OFFSET(0xE005640)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_34D880A89D112F3D_OFFSET UNITYSDK_OFFSET(0xE004EC0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_53988DA44D39D8E9_OFFSET UNITYSDK_OFFSET(0xE005560)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xE005180)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xE005260)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_9858A6920592D166_OFFSET UNITYSDK_OFFSET(0xE004DD0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xE005130)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xE004E60)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0xE004D60)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xE004D80)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xE004DA0)
#define CLASS_1_A3C62CC0DC4BD2F1__CTOR_OFFSET UNITYSDK_OFFSET(0xE0050D0)

inline static constexpr unsigned int Class_1_A3C62CC0DC4BD2F1_TypeDefinitionIndex = 68902;

class Class_1_A3C62CC0DC4BD2F1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>* Field_1_6; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* _Cartography_k__BackingField; // 0x18
	::Class_1_EBB880A8D2C9B0D4* _CheatSheet_k__BackingField; // 0x20
	::System::Single _UnitLength_k__BackingField; // 0x28
	::System::Int16 _UnitPixelCount_k__BackingField; // 0x2C
	::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x30
	::System::UInt32 _ContainerGroupID_k__BackingField; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_EBB880A8D2C9B0D4* a3, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_EBB880A8D2C9B0D4*, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_ContainerGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERGROUPID_OFFSET))(this);
	}

	::System::UInt32 get_ContainerInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERINSTANCEID_OFFSET))(this);
	}

	::Class_1_EBB880A8D2C9B0D4* get_CheatSheet()
	{
		return ((::Class_1_EBB880A8D2C9B0D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_CHEATSHEET_OFFSET))(this);
	}

	::System::Void set_CheatSheet(::Class_1_EBB880A8D2C9B0D4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB880A8D2C9B0D4*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_CHEATSHEET_OFFSET))(this, value);
	}

	::System::Single get_UnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_UNITLENGTH_OFFSET))(this);
	}

	::System::Void set_UnitLength(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_UNITLENGTH_OFFSET))(this, value);
	}

	::System::Int16 get_UnitPixelCount()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_UNITPIXELCOUNT_OFFSET))(this);
	}

	::System::Void set_UnitPixelCount(::System::Int16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_UNITPIXELCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
	{
		return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_CARTOGRAPHY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>* Method_1_1F9015108CCAC51A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_1F9015108CCAC51A_OFFSET))(this);
	}

	::RPG::Client::NavMap::MapData* Method_1_9858A6920592D166()
	{
		return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_9858A6920592D166_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	static ::Class_1_A3C62CC0DC4BD2F1* Method_1_34D880A89D112F3D(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a3)
	{
		return ((::Class_1_A3C62CC0DC4BD2F1*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_34D880A89D112F3D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_53988DA44D39D8E9(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_53988DA44D39D8E9_OFFSET))(this, a1);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_2A6D3E34BA2EF920(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_2A6D3E34BA2EF920_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
