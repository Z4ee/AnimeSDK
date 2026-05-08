#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_3522289DFBB97479_Enum_3_6D49C81ACA2BFF90.h"
#include "unitysdk/Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1.h"

class Class_1_5DA2E7556103D5A3_19;
namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradeParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3522289DFBB97479_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1286E3F0)
#define CLASS_3_3522289DFBB97479_METHOD_3_0565989F8FB37195_OFFSET UNITYSDK_OFFSET(0x1286F2E0)
#define CLASS_3_3522289DFBB97479_METHOD_3_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1286EE60)
#define CLASS_3_3522289DFBB97479_METHOD_3_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x1286E820)
#define CLASS_3_3522289DFBB97479_METHOD_3_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1286EF80)
#define CLASS_3_3522289DFBB97479_METHOD_3_4AB2B25263ADAC0F_OFFSET UNITYSDK_OFFSET(0x1286F250)
#define CLASS_3_3522289DFBB97479_METHOD_3_609D801665B82CA8_OFFSET UNITYSDK_OFFSET(0x1286ED10)
#define CLASS_3_3522289DFBB97479_METHOD_3_6557229A92F793C2_OFFSET UNITYSDK_OFFSET(0x1286EF90)
#define CLASS_3_3522289DFBB97479_METHOD_3_7125A4A2055A7F0D_OFFSET UNITYSDK_OFFSET(0x1286E7A0)
#define CLASS_3_3522289DFBB97479_METHOD_3_94B85104EDEA4FFB_OFFSET UNITYSDK_OFFSET(0x1286EE70)
#define CLASS_3_3522289DFBB97479_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1286EAD0)
#define CLASS_3_3522289DFBB97479_METHOD_3_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1286EF20)
#define CLASS_3_3522289DFBB97479_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1286E790)
#define CLASS_3_3522289DFBB97479_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1286EF70)
#define CLASS_3_3522289DFBB97479_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1286EB70)
#define CLASS_3_3522289DFBB97479_METHOD_3_D4375C75C902FEB6_OFFSET UNITYSDK_OFFSET(0x1286EBF0)
#define CLASS_3_3522289DFBB97479_METHOD_3_E112957D00EDE7F0_OFFSET UNITYSDK_OFFSET(0x1286EB60)
#define CLASS_3_3522289DFBB97479_METHOD_3_EA4D59B5C89FEE94_OFFSET UNITYSDK_OFFSET(0x1286EC00)
#define CLASS_3_3522289DFBB97479_METHOD_3_F1872B84FDE15C95_OFFSET UNITYSDK_OFFSET(0x1286E810)
#define CLASS_3_3522289DFBB97479_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1286E1F0)
#define CLASS_3_3522289DFBB97479__CCTOR_OFFSET UNITYSDK_OFFSET(0x1286E440)
#define CLASS_3_3522289DFBB97479__CTOR_OFFSET UNITYSDK_OFFSET(0x1286E4C0)

inline static constexpr unsigned int Class_3_3522289DFBB97479_TypeDefinitionIndex = 77307;

class Class_3_3522289DFBB97479 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0xB9; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_3522289DFBB97479_Enum_3_6D49C81ACA2BFF90>* Field_3_1; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_2; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* Field_3_5; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_3; // 0x68
	::System::Collections::Generic::List_1<::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1>* Field_3_7; // 0x70
	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_19*>* Field_3_0; // 0x78
	::System::Int32 Field_3_6; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_7125A4A2055A7F0D(::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_7125A4A2055A7F0D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* Method_3_F1872B84FDE15C95()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_F1872B84FDE15C95_OFFSET))(this);
	}

	::System::Void Method_3_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1>* Method_3_E112957D00EDE7F0()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_E112957D00EDE7F0_OFFSET))(this);
	}

	static ::Class_3_3522289DFBB97479* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3522289DFBB97479*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_D4375C75C902FEB6(::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>*))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_D4375C75C902FEB6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_EA4D59B5C89FEE94(::System::String* a1, ::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_EA4D59B5C89FEE94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_609D801665B82CA8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_609D801665B82CA8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_3_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_3_94B85104EDEA4FFB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_94B85104EDEA4FFB_OFFSET))(this, a1);
	}

	::System::Void Method_3_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_19*>* Method_3_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_19*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_4993EDAE54425105_OFFSET))(this);
	}

	::System::Boolean Method_3_6557229A92F793C2(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_6557229A92F793C2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4AB2B25263ADAC0F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_4AB2B25263ADAC0F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0565989F8FB37195(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_METHOD_3_0565989F8FB37195_OFFSET))(this, a1, a2);
	}
};
