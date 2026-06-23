#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D79D852F682C7303_Struct_2_151AE31549DD75A6.h"
#include "unitysdk/Enum_3_0269E9CD0547602F.h"
#include "unitysdk/Enum_3_CBE15F282C7D6943.h"
#include "unitysdk/Struct_2_01B5071406F53CB4.h"
#include "unitysdk/Struct_2_12607DDCBFAB5CA5.h"
#include "unitysdk/Struct_2_80FC707AAE5C2307.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_0_16E4307DCC419505_570;
class Class_1_D79D852F682C7303_Class_2_14F5F3BD428DDE8E;
class Class_1_D79D852F682C7303_Class_2_17107A40C2E0CCFB;
class Class_1_D79D852F682C7303_Class_3_6994D39DC3127F12;
class Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D79D852F682C7303_METHOD_1_05C7CE814302536B_OFFSET UNITYSDK_OFFSET(0x113A63B0)
#define CLASS_1_D79D852F682C7303_METHOD_1_30E4D9182AB1C12E_1_OFFSET UNITYSDK_OFFSET(0x113A64F0)
#define CLASS_1_D79D852F682C7303_METHOD_1_30E4D9182AB1C12E_OFFSET UNITYSDK_OFFSET(0x113A3AB0)
#define CLASS_1_D79D852F682C7303_METHOD_1_4E3FBA4435CE0C63_OFFSET UNITYSDK_OFFSET(0x113A3B40)
#define CLASS_1_D79D852F682C7303_METHOD_1_5E49CC2100225067_OFFSET UNITYSDK_OFFSET(0x113A37D0)
#define CLASS_1_D79D852F682C7303_METHOD_1_AB31F96C2D9D17C1_OFFSET UNITYSDK_OFFSET(0x113A3510)
#define CLASS_1_D79D852F682C7303_METHOD_1_C61C228601C85E9D_OFFSET UNITYSDK_OFFSET(0x113A3BC0)
#define CLASS_1_D79D852F682C7303_METHOD_1_D13A45D556A46D38_OFFSET UNITYSDK_OFFSET(0x113A3770)
#define CLASS_1_D79D852F682C7303_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x113A6390)
#define CLASS_1_D79D852F682C7303_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x113A6370)
#define CLASS_1_D79D852F682C7303_METHOD_1_FDC663BBD0C687CD_OFFSET UNITYSDK_OFFSET(0x113A37B0)
#define CLASS_1_D79D852F682C7303__CCTOR_OFFSET UNITYSDK_OFFSET(0x113A34A0)
#define CLASS_1_D79D852F682C7303__CTOR_OFFSET UNITYSDK_OFFSET(0x113A3490)

inline static constexpr unsigned int Class_1_D79D852F682C7303_TypeDefinitionIndex = 83832;

class Class_1_D79D852F682C7303 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_80FC707AAE5C2307>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_80FC707AAE5C2307>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D79D852F682C7303_TypeDefinitionIndex)->GetStaticField(0x32490);
	}
	::Il2CppArray<::Class_0_16E4307DCC419505_570*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Char, ::System::UInt16>* Field_1_3; // 0x18
	::Il2CppArray<::System::Char>* Field_1_1; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_AB31F96C2D9D17C1(::System::Span_1<::Struct_2_01B5071406F53CB4> a1, ::System::Int32 a2, ::Struct_2_80FC707AAE5C2307 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Span_1<::Struct_2_01B5071406F53CB4>, ::System::Int32, ::Struct_2_80FC707AAE5C2307, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_AB31F96C2D9D17C1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_5E49CC2100225067(::System::Char a1, ::System::Span_1<::Class_1_D79D852F682C7303_Struct_2_151AE31549DD75A6> a2, ::System::Span_1<::System::UInt32> a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Span_1<::Class_1_D79D852F682C7303_Struct_2_151AE31549DD75A6>, ::System::Span_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_5E49CC2100225067_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_FDC663BBD0C687CD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Struct_2_01B5071406F53CB4 a4)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::Struct_2_01B5071406F53CB4))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_FDC663BBD0C687CD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_D79D852F682C7303_Class_2_17107A40C2E0CCFB* Method_1_30E4D9182AB1C12E(::Enum_3_CBE15F282C7D6943 a1)
	{
		return ((::Class_1_D79D852F682C7303_Class_2_17107A40C2E0CCFB*(*)(::Enum_3_CBE15F282C7D6943))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_30E4D9182AB1C12E_OFFSET))(a1);
	}

	static ::System::Void Method_1_4E3FBA4435CE0C63(::System::Span_1<::Struct_2_01B5071406F53CB4> a1, ::System::Int32& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Span_1<::Struct_2_01B5071406F53CB4>, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_4E3FBA4435CE0C63_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_C61C228601C85E9D(::System::String* a1, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5> a2, ::Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB* a3, ::Class_1_D79D852F682C7303_Class_3_6994D39DC3127F12* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Span_1<::Struct_2_12607DDCBFAB5CA5>, ::Class_1_D79D852F682C7303_Class_3_E5F5430D92070BCB*, ::Class_1_D79D852F682C7303_Class_3_6994D39DC3127F12*))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_C61C228601C85E9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int16 Method_1_05C7CE814302536B(::System::Int32 a1)
	{
		return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_05C7CE814302536B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	static ::Class_1_D79D852F682C7303_Class_2_14F5F3BD428DDE8E* Method_1_30E4D9182AB1C12E_1(::Enum_3_0269E9CD0547602F a1)
	{
		return ((::Class_1_D79D852F682C7303_Class_2_14F5F3BD428DDE8E*(*)(::Enum_3_0269E9CD0547602F))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_30E4D9182AB1C12E_1_OFFSET))(a1);
	}

	::Class_0_16E4307DCC419505_570* Method_1_D13A45D556A46D38(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_570*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_D13A45D556A46D38_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D79D852F682C7303_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}
};
