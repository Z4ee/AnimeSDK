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

#define CLASS_1_7E307543E55D519D_METHOD_1_02DFF0ECD51976CD_OFFSET UNITYSDK_OFFSET(0x16005A00)
#define CLASS_1_7E307543E55D519D_METHOD_1_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x16006910)
#define CLASS_1_7E307543E55D519D_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x160067E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_1902F14B0C116508_OFFSET UNITYSDK_OFFSET(0x160026D0)
#define CLASS_1_7E307543E55D519D_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x16001840)
#define CLASS_1_7E307543E55D519D_METHOD_1_29167EC1A7BD7332_OFFSET UNITYSDK_OFFSET(0x15FFF3B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_2A9D2E09A3334CBE_OFFSET UNITYSDK_OFFSET(0x16004F90)
#define CLASS_1_7E307543E55D519D_METHOD_1_372A6DDF933E5548_OFFSET UNITYSDK_OFFSET(0x160046B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_38ECBF1793925F70_OFFSET UNITYSDK_OFFSET(0x16003DE0)
#define CLASS_1_7E307543E55D519D_METHOD_1_3D9A014E7563D2F4_OFFSET UNITYSDK_OFFSET(0x16002260)
#define CLASS_1_7E307543E55D519D_METHOD_1_3F1D41A3E0FC993D_OFFSET UNITYSDK_OFFSET(0x160004E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_4EE0B4448938F0E3_OFFSET UNITYSDK_OFFSET(0x16005560)
#define CLASS_1_7E307543E55D519D_METHOD_1_5AD0E9E26907DC8D_OFFSET UNITYSDK_OFFSET(0x160041C0)
#define CLASS_1_7E307543E55D519D_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x16004C60)
#define CLASS_1_7E307543E55D519D_METHOD_1_677BA2C873990013_OFFSET UNITYSDK_OFFSET(0x160008F0)
#define CLASS_1_7E307543E55D519D_METHOD_1_6A71647A1183E3A9_OFFSET UNITYSDK_OFFSET(0x16001070)
#define CLASS_1_7E307543E55D519D_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x16002D10)
#define CLASS_1_7E307543E55D519D_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x16005260)
#define CLASS_1_7E307543E55D519D_METHOD_1_7BEFA04B080EE4F4_OFFSET UNITYSDK_OFFSET(0x160057F0)
#define CLASS_1_7E307543E55D519D_METHOD_1_7D30347BE84CCB21_OFFSET UNITYSDK_OFFSET(0x15FFD3D0)
#define CLASS_1_7E307543E55D519D_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x15FFD7D0)
#define CLASS_1_7E307543E55D519D_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16001560)
#define CLASS_1_7E307543E55D519D_METHOD_1_887A28BC44E48877_OFFSET UNITYSDK_OFFSET(0x16000C00)
#define CLASS_1_7E307543E55D519D_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x16005B50)
#define CLASS_1_7E307543E55D519D_METHOD_1_92E87767079E84BB_OFFSET UNITYSDK_OFFSET(0x160021B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_948F74B294198236_OFFSET UNITYSDK_OFFSET(0x16001B00)
#define CLASS_1_7E307543E55D519D_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x16006020)
#define CLASS_1_7E307543E55D519D_METHOD_1_9D7AB73CF286FD7F_OFFSET UNITYSDK_OFFSET(0x160029B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_A9DA84788279FA7B_OFFSET UNITYSDK_OFFSET(0x160048C0)
#define CLASS_1_7E307543E55D519D_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x16006A40)
#define CLASS_1_7E307543E55D519D_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x16005380)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5706CF725B977D_OFFSET UNITYSDK_OFFSET(0x16001E50)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x160068B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x16002BD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_CAD1BFB7BC627EAA_OFFSET UNITYSDK_OFFSET(0x16004E60)
#define CLASS_1_7E307543E55D519D_METHOD_1_CEC21AA00737347E_OFFSET UNITYSDK_OFFSET(0x160069D0)
#define CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_1_OFFSET UNITYSDK_OFFSET(0x16000720)
#define CLASS_1_7E307543E55D519D_METHOD_1_D27C207431848052_OFFSET UNITYSDK_OFFSET(0x16000A30)
#define CLASS_1_7E307543E55D519D_METHOD_1_DEA0C445C67849ED_OFFSET UNITYSDK_OFFSET(0x16004AD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16006660)
#define CLASS_1_7E307543E55D519D_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x160010B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x160010F0)
#define CLASS_1_7E307543E55D519D_METHOD_1_E7356AE72C3650D3_OFFSET UNITYSDK_OFFSET(0x160009A0)
#define CLASS_1_7E307543E55D519D_METHOD_1_E8ACDE0B6A8AD4F9_OFFSET UNITYSDK_OFFSET(0x15FFF580)
#define CLASS_1_7E307543E55D519D_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16000DD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x15FFD900)
#define CLASS_1_7E307543E55D519D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16000FE0)
#define CLASS_1_7E307543E55D519D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16002940)
#define CLASS_1_7E307543E55D519D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16006AA0)

inline static constexpr unsigned int Class_1_7E307543E55D519D_TypeDefinitionIndex = 60160;

class Class_1_7E307543E55D519D : public ::System::Object
{
public:
	static ::System::String** StaticGet_DMKMFMBHJDF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C60);
	}
	static ::System::Object** StaticGet_MODPPBEAFBH()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_HOHCNNKDPJM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C70);
	}
	static ::Struct_2_CC45B4503679E14E_41* StaticGet_IAIBKAJJEEO()
	{
		return (::Struct_2_CC45B4503679E14E_41*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C78);
	}
	static ::System::Object** StaticGet_JNACIPNELFK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>** StaticGet_IADMHNLIKPO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C90);
	}
	static ::System::Object** StaticGet_DBIJKJIMJGK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46C98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>** StaticGet_AAMPBOOKPAJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_AKAONHHKHMA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CA8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_FBAFMKDJDOM()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*>** StaticGet_NNEMHOPJHEB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CB8);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_HGNOCANBHBM()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CC0);
	}
	static ::System::String** StaticGet_LBKKLOPFNMJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_PMGFLPJJBJD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CD0);
	}
	static ::System::String** StaticGet_PFFEFDIPJIJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CD8);
	}
	static ::System::String** StaticGet_CJLFACFNDMI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>** StaticGet_GBOMKPLKBGE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CE8);
	}
	static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>** StaticGet_OFHCCHPEGIB()
	{
		return (::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CF0);
	}
	static ::System::Object** StaticGet_JKGNOHNLAKA()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x46CF8);
	}
	static ::System::Int32* StaticGet_LDBJPPPELJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10650);
	}
	static ::System::Single* StaticGet_ODOELMLPMMO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10654);
	}
	static ::System::Boolean* StaticGet_KHPDJOKEHIL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x10658);
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
