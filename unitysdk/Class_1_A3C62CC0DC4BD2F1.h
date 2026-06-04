#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB880A8D2C9B0D4;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3C62CC0DC4BD2F1_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1394DEF0)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0x1394DE90)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0x1394DE70)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1394DE80)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1394DEB0)
#define CLASS_1_A3C62CC0DC4BD2F1_GET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x1394DED0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x1394E710)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_1F9015108CCAC51A_OFFSET UNITYSDK_OFFSET(0x1394DF00)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x1394E180)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_2FFD2B2BB27FCE0E_OFFSET UNITYSDK_OFFSET(0x1394E540)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1394E490)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_499CBEE058D2EFD1_OFFSET UNITYSDK_OFFSET(0x1394DF10)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_6AC5E93F815FAFFC_OFFSET UNITYSDK_OFFSET(0x1394DF90)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1394E1D0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1394E2B0)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_DE8EF3E06C3333BA_OFFSET UNITYSDK_OFFSET(0x1394E640)
#define CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1394DF30)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0x1394DEA0)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1394DEC0)
#define CLASS_1_A3C62CC0DC4BD2F1_SET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x1394DEE0)
#define CLASS_1_A3C62CC0DC4BD2F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1394E120)

inline static constexpr unsigned int Class_1_A3C62CC0DC4BD2F1_TypeDefinitionIndex = 69714;

class Class_1_A3C62CC0DC4BD2F1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>* Field_1_0; // 0x10
	::Class_1_EBB880A8D2C9B0D4* _CheatSheet_k__BackingField; // 0x18
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* _Cartography_k__BackingField; // 0x20
	::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x28
	::System::Int16 _UnitPixelCount_k__BackingField; // 0x2C
	::System::Single _UnitLength_k__BackingField; // 0x30
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

	::System::Void set_CheatSheet(::Class_1_EBB880A8D2C9B0D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB880A8D2C9B0D4*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_CHEATSHEET_OFFSET))(this, a1);
	}

	::System::Single get_UnitLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_UNITLENGTH_OFFSET))(this);
	}

	::System::Void set_UnitLength(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_UNITLENGTH_OFFSET))(this, a1);
	}

	::System::Int16 get_UnitPixelCount()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_UNITPIXELCOUNT_OFFSET))(this);
	}

	::System::Void set_UnitPixelCount(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_SET_UNITPIXELCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
	{
		return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_GET_CARTOGRAPHY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>* Method_1_1F9015108CCAC51A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_1F9015108CCAC51A_OFFSET))(this);
	}

	::RPG::Client::NavMap::MapData* Method_1_499CBEE058D2EFD1()
	{
		return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_499CBEE058D2EFD1_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	static ::Class_1_A3C62CC0DC4BD2F1* Method_1_6AC5E93F815FAFFC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a3)
	{
		return ((::Class_1_A3C62CC0DC4BD2F1*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_6AC5E93F815FAFFC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_2FFD2B2BB27FCE0E(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_2FFD2B2BB27FCE0E_OFFSET))(this, a1);
	}

	::RPG::Client::NavMap::FiveDim::Face* Method_1_DE8EF3E06C3333BA(::System::UInt32 a1)
	{
		return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_DE8EF3E06C3333BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C62CC0DC4BD2F1_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
