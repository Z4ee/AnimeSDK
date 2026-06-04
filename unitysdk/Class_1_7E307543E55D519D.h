#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7E307543E55D519D_FileLoadMode.h"
#include "unitysdk/Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_40.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_3;
class Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16;
namespace RPG::GameCore { template <typename T> class ConfigDataPool_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::Threading::Tasks { class Task; }

#define CLASS_1_7E307543E55D519D_METHOD_1_01759EC197D96B42_OFFSET UNITYSDK_OFFSET(0x1062A9E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_02DFF0ECD51976CD_OFFSET UNITYSDK_OFFSET(0x1062B1E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_0A9532FAEAAC0B12_OFFSET UNITYSDK_OFFSET(0x1062BEB0)
#define CLASS_1_7E307543E55D519D_METHOD_1_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x1062BFE0)
#define CLASS_1_7E307543E55D519D_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x1062BD80)
#define CLASS_1_7E307543E55D519D_METHOD_1_1902F14B0C116508_OFFSET UNITYSDK_OFFSET(0x10627E40)
#define CLASS_1_7E307543E55D519D_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x10627040)
#define CLASS_1_7E307543E55D519D_METHOD_1_29167EC1A7BD7332_OFFSET UNITYSDK_OFFSET(0x106251C0)
#define CLASS_1_7E307543E55D519D_METHOD_1_2A9D2E09A3334CBE_OFFSET UNITYSDK_OFFSET(0x1062A410)
#define CLASS_1_7E307543E55D519D_METHOD_1_2CB85368945CE45E_OFFSET UNITYSDK_OFFSET(0x10627860)
#define CLASS_1_7E307543E55D519D_METHOD_1_372A6DDF933E5548_OFFSET UNITYSDK_OFFSET(0x10629C20)
#define CLASS_1_7E307543E55D519D_METHOD_1_3884C140DFBE4A9B_OFFSET UNITYSDK_OFFSET(0x1062ADC0)
#define CLASS_1_7E307543E55D519D_METHOD_1_38ECBF1793925F70_OFFSET UNITYSDK_OFFSET(0x106293B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_3F1D41A3E0FC993D_OFFSET UNITYSDK_OFFSET(0x10626110)
#define CLASS_1_7E307543E55D519D_METHOD_1_5AD0E9E26907DC8D_OFFSET UNITYSDK_OFFSET(0x10629790)
#define CLASS_1_7E307543E55D519D_METHOD_1_5EA793F2761A19ED_1_OFFSET UNITYSDK_OFFSET(0x10626350)
#define CLASS_1_7E307543E55D519D_METHOD_1_5EA793F2761A19ED_OFFSET UNITYSDK_OFFSET(0x10626690)
#define CLASS_1_7E307543E55D519D_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x1062A0E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_677BA2C873990013_OFFSET UNITYSDK_OFFSET(0x10626550)
#define CLASS_1_7E307543E55D519D_METHOD_1_6A71647A1183E3A9_OFFSET UNITYSDK_OFFSET(0x10626D00)
#define CLASS_1_7E307543E55D519D_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1062A6E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_7BEFA04B080EE4F4_OFFSET UNITYSDK_OFFSET(0x1062AFD0)
#define CLASS_1_7E307543E55D519D_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x10623680)
#define CLASS_1_7E307543E55D519D_METHOD_1_887A28BC44E48877_OFFSET UNITYSDK_OFFSET(0x10626890)
#define CLASS_1_7E307543E55D519D_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1062B330)
#define CLASS_1_7E307543E55D519D_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x1062B7A0)
#define CLASS_1_7E307543E55D519D_METHOD_1_9765F72F107F26F0_OFFSET UNITYSDK_OFFSET(0x10623300)
#define CLASS_1_7E307543E55D519D_METHOD_1_9D7AB73CF286FD7F_OFFSET UNITYSDK_OFFSET(0x10628120)
#define CLASS_1_7E307543E55D519D_METHOD_1_A9DA84788279FA7B_OFFSET UNITYSDK_OFFSET(0x10629DE0)
#define CLASS_1_7E307543E55D519D_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x1062A800)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5706CF725B977D_OFFSET UNITYSDK_OFFSET(0x10627450)
#define CLASS_1_7E307543E55D519D_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1062BE50)
#define CLASS_1_7E307543E55D519D_METHOD_1_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x10628340)
#define CLASS_1_7E307543E55D519D_METHOD_1_CAD1BFB7BC627EAA_OFFSET UNITYSDK_OFFSET(0x1062A2E0)
#define CLASS_1_7E307543E55D519D_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x10628480)
#define CLASS_1_7E307543E55D519D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10627340)
#define CLASS_1_7E307543E55D519D_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x10626D80)
#define CLASS_1_7E307543E55D519D_METHOD_1_DEA0C445C67849ED_OFFSET UNITYSDK_OFFSET(0x10629F50)
#define CLASS_1_7E307543E55D519D_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x10626D40)
#define CLASS_1_7E307543E55D519D_METHOD_1_E7356AE72C3650D3_OFFSET UNITYSDK_OFFSET(0x10626600)
#define CLASS_1_7E307543E55D519D_METHOD_1_E8ACDE0B6A8AD4F9_OFFSET UNITYSDK_OFFSET(0x10625390)
#define CLASS_1_7E307543E55D519D_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10626A60)
#define CLASS_1_7E307543E55D519D_METHOD_1_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x106237B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_F3BFAF457B1F9107_OFFSET UNITYSDK_OFFSET(0x1062BF70)
#define CLASS_1_7E307543E55D519D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x10626C70)
#define CLASS_1_7E307543E55D519D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x106280B0)
#define CLASS_1_7E307543E55D519D_METHOD_1_FFF1F0D8EDD566E1_OFFSET UNITYSDK_OFFSET(0x106277B0)
#define CLASS_1_7E307543E55D519D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062C040)

inline static constexpr unsigned int Class_1_7E307543E55D519D_TypeDefinitionIndex = 56120;

class Class_1_7E307543E55D519D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF590);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF598);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_43BD383C98B4C0C5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5A0);
	}
	static ::System::Object** StaticGet_Field_1_3()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5B0);
	}
	static ::System::Object** StaticGet_Field_1_5()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5B8);
	}
	static ::Struct_2_CC45B4503679E14E_40* StaticGet_Field_1_6()
	{
		return (::Struct_2_CC45B4503679E14E_40*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5C0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5D8);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5E0);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5F0);
	}
	static ::System::Object** StaticGet_Field_1_12()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF5F8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF600);
	}
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF608);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7E307543E55D519D_Struct_2_E658502528B7C034_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF610);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_16()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF618);
	}
	static ::System::Object** StaticGet_Field_1_17()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0xF620);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x4DE0);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x4DE4);
	}
	static ::System::Single* StaticGet_Field_1_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E307543E55D519D_TypeDefinitionIndex)->GetStaticField(0x4DE8);
	}
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x258; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D__CCTOR_OFFSET))();
	}

	static ::System::Int64 Method_1_9765F72F107F26F0()
	{
		return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_9765F72F107F26F0_OFFSET))();
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

	static ::System::Int32 Method_1_5EA793F2761A19ED(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_5EA793F2761A19ED_OFFSET))(a1);
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

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}

	static ::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_1947BC35B7A7FCB8_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::String* Method_1_BF5706CF725B977D(::System::UInt64 a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::UInt64, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_BF5706CF725B977D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_FFF1F0D8EDD566E1(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_FFF1F0D8EDD566E1_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_2CB85368945CE45E(::System::String* a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_2CB85368945CE45E_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_CB8E229BDF290D41_OFFSET))();
	}

	static ::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_38ECBF1793925F70(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_38ECBF1793925F70_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AD0E9E26907DC8D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_5AD0E9E26907DC8D_OFFSET))(a1);
	}

	static ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16* Method_1_372A6DDF933E5548(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_7E307543E55D519D_FileLoadMode a4)
	{
		return ((::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::Class_1_7E307543E55D519D_FileLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_372A6DDF933E5548_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A9DA84788279FA7B(::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16* a1)
	{
		return ((::System::Void(*)(::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_A9DA84788279FA7B_OFFSET))(a1);
	}

	static ::System::Void Method_1_DEA0C445C67849ED(::System::String* a1, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_7E307543E55D519D_Class_0_16E7307DCC43CB2C_16*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_DEA0C445C67849ED_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_01759EC197D96B42(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_01759EC197D96B42_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5EA793F2761A19ED_1(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_5EA793F2761A19ED_1_OFFSET))(a1);
	}

	static ::Class_1_43BD383C98B4C0C5_3* Method_1_7BEFA04B080EE4F4(::System::String* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_7BEFA04B080EE4F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_02DFF0ECD51976CD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_02DFF0ECD51976CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3884C140DFBE4A9B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_3884C140DFBE4A9B_OFFSET))(a1);
	}

	static ::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_907E24F785836BA0_OFFSET))();
	}

	static ::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_96A53A17AC5D0E93_OFFSET))();
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

	static ::System::Boolean Method_1_F3BFAF457B1F9107(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_F3BFAF457B1F9107_OFFSET))(a1);
	}

	static ::System::Void Method_1_0E142E3463F30350()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E307543E55D519D_METHOD_1_0E142E3463F30350_OFFSET))();
	}
};
