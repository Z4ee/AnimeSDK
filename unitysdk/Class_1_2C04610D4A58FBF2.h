#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_5.h"
#include "unitysdk/Struct_2_8C28452846BC9CD5.h"
#include "unitysdk/Struct_2_EC98B14B1B23001B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class Class_1_D2B8D50DD9833CFC;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C04610D4A58FBF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF39D50)
#define CLASS_1_2C04610D4A58FBF2_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0x1AF3C6F0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1AF3A970)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_3C092CF69374C63B_OFFSET UNITYSDK_OFFSET(0x1AF3C090)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_4B2C88022C29B618_OFFSET UNITYSDK_OFFSET(0x1AF3C4B0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_61C61A4D5B1CAB1C_OFFSET UNITYSDK_OFFSET(0x1AF3BA10)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_65D79DE7509E7805_OFFSET UNITYSDK_OFFSET(0x1AF3B6D0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_66B06D14D5E4D654_OFFSET UNITYSDK_OFFSET(0x1AF3B970)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_6852DC894AC1E216_OFFSET UNITYSDK_OFFSET(0x1AF3A800)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_7976BB22602FCA77_OFFSET UNITYSDK_OFFSET(0x1AF39ED0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x1AF39C70)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1AF3AA30)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_8E6AA668BCBFD16D_OFFSET UNITYSDK_OFFSET(0x1AF3A4B0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1AF3B2D0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_9B94601409ACF78B_OFFSET UNITYSDK_OFFSET(0x1AF3B8D0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_9DA79C3754CF9783_OFFSET UNITYSDK_OFFSET(0x1AF3B320)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x1AF3AFE0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_B93A9FB8A3E13C83_OFFSET UNITYSDK_OFFSET(0x1AF39DB0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x1AF3BBD0)
#define CLASS_1_2C04610D4A58FBF2_METHOD_1_DE2C4CD7BF3E857D_OFFSET UNITYSDK_OFFSET(0x1AF39F20)
#define CLASS_1_2C04610D4A58FBF2_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0x1AF3C700)
#define CLASS_1_2C04610D4A58FBF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF39D10)

inline static constexpr unsigned int Class_1_2C04610D4A58FBF2_TypeDefinitionIndex = 60630;

class Class_1_2C04610D4A58FBF2 : public ::System::Object
{
public:
	static ::Class_1_2C04610D4A58FBF2** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_2C04610D4A58FBF2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C04610D4A58FBF2_TypeDefinitionIndex)->GetStaticField(0x66CA0);
	}
	// static const ::System::Int32 OHBJOEKJBAC = 0x4; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>* HFBCDHKLFGN; // 0x10
	::Il2CppArray<::System::Collections::Generic::List_1<::Struct_2_EC98B14B1B23001B>*>* ODKMIPIKMNE; // 0x18
	::RPG::Client::FiveDimManager* EEOHCCOCEDI; // 0x20
	::Class_1_D2B8D50DD9833CFC* _BoundsOccluderForJob_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_EC98B14B1B23001B>* IAJGIEJLKBL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>, ::System::Int32>* IALOMHHHMJK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2__CTOR_OFFSET))(this);
	}

	static ::Class_1_2C04610D4A58FBF2* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_2C04610D4A58FBF2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7976BB22602FCA77(::RPG::Client::FiveDimManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager*))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_7976BB22602FCA77_OFFSET))(this, a1);
	}

	::System::Void Method_1_B93A9FB8A3E13C83()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_B93A9FB8A3E13C83_OFFSET))(this);
	}

	::System::Void Method_1_DE2C4CD7BF3E857D(::RPG::Client::FiveDimGameInstance* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_DE2C4CD7BF3E857D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E6AA668BCBFD16D(::RPG::Client::FiveDimGameInstance* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_8E6AA668BCBFD16D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_9DA79C3754CF9783(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_9DA79C3754CF9783_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9B94601409ACF78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_9B94601409ACF78B_OFFSET))(this);
	}

	::System::Void Method_1_66B06D14D5E4D654(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_66B06D14D5E4D654_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_61C61A4D5B1CAB1C(::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_5> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_5>))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_61C61A4D5B1CAB1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_C4EFD31239F98A71_OFFSET))(this);
	}

	static ::System::Void Method_1_6852DC894AC1E216(::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_6852DC894AC1E216_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_1_4B2C88022C29B618(::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_4B2C88022C29B618_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C092CF69374C63B(::Struct_2_EC98B14B1B23001B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EC98B14B1B23001B))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_3C092CF69374C63B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65D79DE7509E7805(::Struct_2_EC98B14B1B23001B a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_EC98B14B1B23001B, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_METHOD_1_65D79DE7509E7805_OFFSET))(this, a1, a2);
	}

	::Class_1_D2B8D50DD9833CFC* get_BoundsOccluderForJob()
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
	}

	::System::Void set_BoundsOccluderForJob(::Class_1_D2B8D50DD9833CFC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B8D50DD9833CFC*))((::PBYTE)hIl2Cpp + CLASS_1_2C04610D4A58FBF2_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, a1);
	}
};
