#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_4.h"
#include "unitysdk/Struct_2_8C28452846BC9CD5.h"
#include "unitysdk/Struct_2_EC98B14B1B23001B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class Class_1_D2B8D50DD9833CFC;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_000E0FC4872742C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115BF940)
#define CLASS_1_000E0FC4872742C3_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0x115C1F60)
#define CLASS_1_000E0FC4872742C3_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x115C0540)
#define CLASS_1_000E0FC4872742C3_METHOD_1_45EA701A126D5ACA_OFFSET UNITYSDK_OFFSET(0x115C13A0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0x115C0A60)
#define CLASS_1_000E0FC4872742C3_METHOD_1_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x115C1240)
#define CLASS_1_000E0FC4872742C3_METHOD_1_760C441FBCB7CAF7_OFFSET UNITYSDK_OFFSET(0x115C12F0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_7976BB22602FCA77_OFFSET UNITYSDK_OFFSET(0x115BFB20)
#define CLASS_1_000E0FC4872742C3_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x115BF860)
#define CLASS_1_000E0FC4872742C3_METHOD_1_8B4B64752DAC0E9E_OFFSET UNITYSDK_OFFSET(0x115C03E0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_8C9AA5C396FB64E4_OFFSET UNITYSDK_OFFSET(0x115C0140)
#define CLASS_1_000E0FC4872742C3_METHOD_1_8E007DA9036887B2_OFFSET UNITYSDK_OFFSET(0x115C19E0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_9039B804003AEECA_OFFSET UNITYSDK_OFFSET(0x115C1D40)
#define CLASS_1_000E0FC4872742C3_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x115C0CB0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_A7776357D171958C_OFFSET UNITYSDK_OFFSET(0x115BFB70)
#define CLASS_1_000E0FC4872742C3_METHOD_1_BB8B02CA6B7C0AD1_OFFSET UNITYSDK_OFFSET(0x115C0D00)
#define CLASS_1_000E0FC4872742C3_METHOD_1_F21FF9FD01E71B7F_OFFSET UNITYSDK_OFFSET(0x115C1040)
#define CLASS_1_000E0FC4872742C3_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x115C0600)
#define CLASS_1_000E0FC4872742C3_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x115C14E0)
#define CLASS_1_000E0FC4872742C3_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x115BF9A0)
#define CLASS_1_000E0FC4872742C3_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0x115C1F70)
#define CLASS_1_000E0FC4872742C3__CTOR_OFFSET UNITYSDK_OFFSET(0x115BF900)

inline static constexpr unsigned int Class_1_000E0FC4872742C3_TypeDefinitionIndex = 49021;

class Class_1_000E0FC4872742C3 : public ::System::Object
{
public:
	static ::Class_1_000E0FC4872742C3** StaticGet_Field_1_7()
	{
		return (::Class_1_000E0FC4872742C3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_000E0FC4872742C3_TypeDefinitionIndex)->GetStaticField(0x44CE0);
	}
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>, ::System::Int32>* Field_1_4; // 0x10
	::RPG::Client::FiveDimManager* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_EC98B14B1B23001B>* Field_1_1; // 0x20
	::Class_1_D2B8D50DD9833CFC* _BoundsOccluderForJob_k__BackingField; // 0x28
	::Il2CppArray<::System::Collections::Generic::List_1<::Struct_2_EC98B14B1B23001B>*>* Field_1_2; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>* Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3__CTOR_OFFSET))(this);
	}

	static ::Class_1_000E0FC4872742C3* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_000E0FC4872742C3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7976BB22602FCA77(::RPG::Client::FiveDimManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager*))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_7976BB22602FCA77_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_1_A7776357D171958C(::RPG::Client::FiveDimGameInstance* a1, ::Class_2_9DD8A46984F1AFFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_A7776357D171958C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C9AA5C396FB64E4(::RPG::Client::FiveDimGameInstance* a1, ::Class_2_9DD8A46984F1AFFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_8C9AA5C396FB64E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_BB8B02CA6B7C0AD1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_BB8B02CA6B7C0AD1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void Method_1_760C441FBCB7CAF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_760C441FBCB7CAF7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_45EA701A126D5ACA(::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_4> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_4>))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_45EA701A126D5ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	static ::System::Void Method_1_8B4B64752DAC0E9E(::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_8C28452846BC9CD5>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_8B4B64752DAC0E9E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_6A61469FD94C414E_OFFSET))(this);
	}

	::System::Void Method_1_9039B804003AEECA(::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_9039B804003AEECA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E007DA9036887B2(::Struct_2_EC98B14B1B23001B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EC98B14B1B23001B))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_8E007DA9036887B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F21FF9FD01E71B7F(::Struct_2_EC98B14B1B23001B a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_EC98B14B1B23001B, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_METHOD_1_F21FF9FD01E71B7F_OFFSET))(this, a1, a2);
	}

	::Class_1_D2B8D50DD9833CFC* get_BoundsOccluderForJob()
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
	}

	::System::Void set_BoundsOccluderForJob(::Class_1_D2B8D50DD9833CFC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B8D50DD9833CFC*))((::PBYTE)hIl2Cpp + CLASS_1_000E0FC4872742C3_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, value);
	}
};
