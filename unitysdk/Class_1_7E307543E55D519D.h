#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7E307543E55D519D_FileLoadMode.h"
#include "unitysdk/Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_41.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_3;
class Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17;
namespace RPG::GameCore { template <typename T> class ConfigDataPool_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::Threading::Tasks { class Task; }

#define CLASS_1_7E307543E55D519D_METHOD_1_02DFF0ECD51976CD_OFFSET UNITYSDK_OFFSET(0x121E9ED0)
#define CLASS_1_7E307543E55D519D_METHOD_1_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x121EADE0)
#define CLASS_1_7E307543E55D519D_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x121EACB0)
#define CLASS_1_7E307543E55D519D_METHOD_1_1902F14B0C116508_OFFSET UNITYSDK_OFFSET(0x121E6BA0)
#define CLASS_1_7E307543E55D519D_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x121E5D10)
#define CLASS_1_7E307543E55D519D_METHOD_1_29167EC1A7BD7332_OFFSET UNITYSDK_OFFSET(0x121E3880)
#define CLASS_1_7E307543E55D519D_METHOD_1_2A9D2E09A3334CBE_OFFSET UNITYSDK_OFFSET(0x121E9460)
#define CLASS_1_7E307543E55D519D_METHOD_1_372A6DDF933E5548_OFFSET UNITYSDK_OFFSET(0x121E8B80)
#define CLASS_1_7E307543E55D519D_METHOD_1_38ECBF1793925F70_OFFSET UNITYSDK_OFFSET(0x121E82B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_3D9A014E7563D2F4_OFFSET UNITYSDK_OFFSET(0x121E6730)
#define CLASS_1_7E307543E55D519D_METHOD_1_3F1D41A3E0FC993D_OFFSET UNITYSDK_OFFSET(0x121E49B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_4EE0B4448938F0E3_OFFSET UNITYSDK_OFFSET(0x121E9A30)
#define CLASS_1_7E307543E55D519D_METHOD_1_5AD0E9E26907DC8D_OFFSET UNITYSDK_OFFSET(0x121E8690)
#define CLASS_1_7E307543E55D519D_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x121E9130)
#define CLASS_1_7E307543E55D519D_METHOD_1_677BA2C873990013_OFFSET UNITYSDK_OFFSET(0x121E4DC0)
#define CLASS_1_7E307543E55D519D_METHOD_1_6A71647A1183E3A9_OFFSET UNITYSDK_OFFSET(0x121E5540)
#define CLASS_1_7E307543E55D519D_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x121E71E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x121E9730)
#define CLASS_1_7E307543E55D519D_METHOD_1_7BEFA04B080EE4F4_OFFSET UNITYSDK_OFFSET(0x121E9CC0)
#define CLASS_1_7E307543E55D519D_METHOD_1_7D30347BE84CCB21_OFFSET UNITYSDK_OFFSET(0x121E18A0)
#define CLASS_1_7E307543E55D519D_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x121E1CA0)
#define CLASS_1_7E307543E55D519D_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x121E5A30)
#define CLASS_1_7E307543E55D519D_METHOD_1_887A28BC44E48877_OFFSET UNITYSDK_OFFSET(0x121E50D0)
#define CLASS_1_7E307543E55D519D_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x121EA020)
#define CLASS_1_7E307543E55D519D_METHOD_1_92E87767079E84BB_OFFSET UNITYSDK_OFFSET(0x121E6680)
#define CLASS_1_7E307543E55D519D_METHOD_1_948F74B294198236_OFFSET UNITYSDK_OFFSET(0x121E5FD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x121EA4F0)
#define CLASS_1_7E307543E55D519D_METHOD_1_9D7AB73CF286FD7F_OFFSET UNITYSDK_OFFSET(0x121E6E80)
#define CLASS_1_7E307543E55D519D_METHOD_1_A9DA84788279FA7B_OFFSET UNITYSDK_OFFSET(0x121E8D90)
#define CLASS_1_7E307543E55D519D_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x121EAF10)
#define CLASS_1_7E307543E55D519D_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x121E9850)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5706CF725B977D_OFFSET UNITYSDK_OFFSET(0x121E6320)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x121EAD80)
#define CLASS_1_7E307543E55D519D_METHOD_1_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x121E70A0)
#define CLASS_1_7E307543E55D519D_METHOD_1_CAD1BFB7BC627EAA_OFFSET UNITYSDK_OFFSET(0x121E9330)
#define CLASS_1_7E307543E55D519D_METHOD_1_CEC21AA00737347E_OFFSET UNITYSDK_OFFSET(0x121EAEA0)
#define CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_1_OFFSET UNITYSDK_OFFSET(0x121E4BF0)
#define CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_OFFSET UNITYSDK_OFFSET(0x121E4F00)
#define CLASS_1_7E307543E55D519D_METHOD_1_DEA0C445C67849ED_OFFSET UNITYSDK_OFFSET(0x121E8FA0)
#define CLASS_1_7E307543E55D519D_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x121EAB30)
#define CLASS_1_7E307543E55D519D_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x121E5580)
#define CLASS_1_7E307543E55D519D_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x121E55C0)
#define CLASS_1_7E307543E55D519D_METHOD_1_E7356AE72C3650D3_OFFSET UNITYSDK_OFFSET(0x121E4E70)
#define CLASS_1_7E307543E55D519D_METHOD_1_E8ACDE0B6A8AD4F9_OFFSET UNITYSDK_OFFSET(0x121E3A50)
#define CLASS_1_7E307543E55D519D_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x121E52A0)
#define CLASS_1_7E307543E55D519D_METHOD_1_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x121E1DD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x121E54B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x121E6E10)
#define CLASS_1_7E307543E55D519D__CCTOR_OFFSET UNITYSDK_OFFSET(0x121EAF70)

inline static constexpr unsigned int Class_1_7E307543E55D519D_TypeDefinitionIndex = 60160;

class Class_1_7E307543E55D519D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*>** StaticGet_NNEMHOPJHEB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49170);
	}
	static ::System::Object** StaticGet_JNACIPNELFK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49178);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>** StaticGet_AAMPBOOKPAJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49180);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_PMGFLPJJBJD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49188);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_HGNOCANBHBM()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49190);
	}
	static ::System::Object** StaticGet_MODPPBEAFBH()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49198);
	}
	static ::System::String** StaticGet_PFFEFDIPJIJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491A0);
	}
	static ::System::String** StaticGet_CJLFACFNDMI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_AKAONHHKHMA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491B0);
	}
	static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>** StaticGet_OFHCCHPEGIB()
	{
		return (::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491B8);
	}
	static ::System::String** StaticGet_DMKMFMBHJDF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_HOHCNNKDPJM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>** StaticGet_GBOMKPLKBGE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491D0);
	}
	static ::System::Object** StaticGet_DBIJKJIMJGK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491D8);
	}
	static ::System::Object** StaticGet_JKGNOHNLAKA()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491E0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_FBAFMKDJDOM()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>** StaticGet_IADMHNLIKPO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491F0);
	}
	static ::System::String** StaticGet_LBKKLOPFNMJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x491F8);
	}
	static ::Struct_2_CC45B4503679E14E_41* StaticGet_IAIBKAJJEEO()
	{
		return (::Struct_2_CC45B4503679E14E_41*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x49200);
	}
	static ::System::Int32* StaticGet_LDBJPPPELJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10CB0);
	}
	static ::System::Boolean* StaticGet_KHPDJOKEHIL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10CB4);
	}
	static ::System::Single* StaticGet_ODOELMLPMMO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10CB8);
	}
	// static const ::System::String* IFIEGKLPLLB; // 0x0
	// static const ::System::Int32 BOBEEFPNEKE = 0x258; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D__CCTOR_OFFSET))();
	}

	static ::System::Int64 Method_1_7D30347BE84CCB21()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_7D30347BE84CCB21_OFFSET))();
	}

	static ::System::Int32 Method_1_814B2B0F621DA493()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_814B2B0F621DA493_OFFSET))();
	}

	static ::System::String* Method_1_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_EFB6D6A58777DAF3_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_3F1D41A3E0FC993D()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_3F1D41A3E0FC993D_OFFSET))();
	}

	static ::System::String* Method_1_E8ACDE0B6A8AD4F9(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_E8ACDE0B6A8AD4F9_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_29167EC1A7BD7332(::System::Int64 a1)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_29167EC1A7BD7332_OFFSET))(a1);
	}

	static ::System::String* Method_1_E7356AE72C3650D3(::Class_1_7E307543E55D519D_FileLoadMode a1)
	{
		return ((::System::String*(*)(::Class_1_7E307543E55D519D_FileLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_E7356AE72C3650D3_OFFSET))(a1);
	}

	static ::System::String* Method_1_677BA2C873990013(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_677BA2C873990013_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D27C207431848052(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_1_887A28BC44E48877()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_887A28BC44E48877_OFFSET))();
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::RPG::GameCore::ConfigDataPoolLoadMode Method_1_6A71647A1183E3A9()
	{
		return ((::RPG::GameCore::ConfigDataPoolLoadMode(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_6A71647A1183E3A9_OFFSET))();
	}

	static ::System::String* Method_1_E33D8B19C5DC642D(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_E33D8B19C5DC642D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_E69AA2E64A20143D_OFFSET))();
	}

	static ::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_87318FF00D6BC7EB_OFFSET))();
	}

	static ::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_24B05D2E15A5C3C8_OFFSET))();
	}

	static ::System::String* Method_1_BF5706CF725B977D(::System::UInt64 a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::UInt64, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_BF5706CF725B977D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_92E87767079E84BB(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_92E87767079E84BB_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_3D9A014E7563D2F4(::System::String* a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_3D9A014E7563D2F4_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1902F14B0C116508(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_1902F14B0C116508_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_9D7AB73CF286FD7F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_9D7AB73CF286FD7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_CA20A96113B135EC_OFFSET))(a1);
	}

	static ::System::Void Method_1_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_6EECE8924BBFC43C_OFFSET))();
	}

	static ::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_38ECBF1793925F70(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_38ECBF1793925F70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AD0E9E26907DC8D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_5AD0E9E26907DC8D_OFFSET))(a1);
	}

	static ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17* Method_1_372A6DDF933E5548(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_7E307543E55D519D_FileLoadMode a4)
	{
		return ((::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::Class_1_7E307543E55D519D_FileLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_372A6DDF933E5548_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A9DA84788279FA7B(::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17* a1)
	{
		return ((::System::Void(*)(::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_A9DA84788279FA7B_OFFSET))(a1);
	}

	static ::System::Void Method_1_DEA0C445C67849ED(::System::String* a1, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_DEA0C445C67849ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_6632BA9E17A7643A_OFFSET))(a1);
	}

	static ::System::Void Method_1_CAD1BFB7BC627EAA(::System::String* a1, ::Class_1_43BD383C98B4C0C5_3* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_43BD383C98B4C0C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_CAD1BFB7BC627EAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A9D2E09A3334CBE(::System::String* a1, ::Class_1_43BD383C98B4C0C5_3* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_43BD383C98B4C0C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_2A9D2E09A3334CBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_73FB9DE4849AF1B5_OFFSET))(a1);
	}

	static ::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_B892007B9247C983_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_948F74B294198236(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_948F74B294198236_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D27C207431848052_1(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_1_OFFSET))(a1);
	}

	static ::Class_1_43BD383C98B4C0C5_3* Method_1_7BEFA04B080EE4F4(::System::String* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_7BEFA04B080EE4F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_02DFF0ECD51976CD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_02DFF0ECD51976CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EE0B4448938F0E3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_4EE0B4448938F0E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_907E24F785836BA0_OFFSET))();
	}

	static ::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_96A53A17AC5D0E93_OFFSET))();
	}

	static ::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_DF2A78D8DB25ED05_OFFSET))();
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::System::Void Method_1_0A9532FAEAAC0B12(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_0A9532FAEAAC0B12_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CEC21AA00737347E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_CEC21AA00737347E_OFFSET))(a1);
	}

	static ::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_B06F516E4459C742_OFFSET))();
	}
};
