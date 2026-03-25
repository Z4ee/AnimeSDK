#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_08DBFC9B3812777F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1D8DBED385F55542;
class Class_1_2F02D0D2C192BA56;
class Class_1_9CBC71DC5240DC00;
class Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_F0D462198B262603_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C87CA0)
#define CLASS_1_F0D462198B262603_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10C89250)
#define CLASS_1_F0D462198B262603_METHOD_1_0CE118F684623355_OFFSET UNITYSDK_OFFSET(0x10C876F0)
#define CLASS_1_F0D462198B262603_METHOD_1_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x10C88CE0)
#define CLASS_1_F0D462198B262603_METHOD_1_20E4F4E336273485_OFFSET UNITYSDK_OFFSET(0x10C8A060)
#define CLASS_1_F0D462198B262603_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10C8AB60)
#define CLASS_1_F0D462198B262603_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10C87BE0)
#define CLASS_1_F0D462198B262603_METHOD_1_37D6C0AFCB04844E_OFFSET UNITYSDK_OFFSET(0x10C88370)
#define CLASS_1_F0D462198B262603_METHOD_1_4F837B65CC054363_OFFSET UNITYSDK_OFFSET(0x10C88630)
#define CLASS_1_F0D462198B262603_METHOD_1_6255C8C1767E1E02_OFFSET UNITYSDK_OFFSET(0x10C879D0)
#define CLASS_1_F0D462198B262603_METHOD_1_72ED9416876F2ECA_OFFSET UNITYSDK_OFFSET(0x10C877C0)
#define CLASS_1_F0D462198B262603_METHOD_1_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x10C8A270)
#define CLASS_1_F0D462198B262603_METHOD_1_7CBB465B70522434_OFFSET UNITYSDK_OFFSET(0x10C88B10)
#define CLASS_1_F0D462198B262603_METHOD_1_9C7783596F21942D_OFFSET UNITYSDK_OFFSET(0x10C89E80)
#define CLASS_1_F0D462198B262603_METHOD_1_9CE6B6BDB67E724E_OFFSET UNITYSDK_OFFSET(0x10C891C0)
#define CLASS_1_F0D462198B262603_METHOD_1_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x10C88790)
#define CLASS_1_F0D462198B262603_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x10C87D10)
#define CLASS_1_F0D462198B262603_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x10C89520)
#define CLASS_1_F0D462198B262603_METHOD_1_E76B06A099117223_OFFSET UNITYSDK_OFFSET(0x10C89A10)
#define CLASS_1_F0D462198B262603_METHOD_1_ED538B87F8DDB660_OFFSET UNITYSDK_OFFSET(0x10C888B0)
#define CLASS_1_F0D462198B262603_METHOD_1_FB9F1BD7416A13F9_OFFSET UNITYSDK_OFFSET(0x10C89BC0)
#define CLASS_1_F0D462198B262603_METHOD_1_FF4C4800DAA9F7E3_OFFSET UNITYSDK_OFFSET(0x10C892E0)
#define CLASS_1_F0D462198B262603__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8AB70)

inline static constexpr unsigned int Class_1_F0D462198B262603_TypeDefinitionIndex = 57119;

class Class_1_F0D462198B262603 : public ::System::Object
{
public:
	static ::Class_1_F0D462198B262603** StaticGet_Field_1_2()
	{
		return (::Class_1_F0D462198B262603**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0D462198B262603_TypeDefinitionIndex)->GetStaticField(0x5A10);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_15; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RendererMaterialCache*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B*>* Field_1_10; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_14; // 0x48
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_1_9CBC71DC5240DC00*>>* Field_1_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::Il2CppArray<::UnityEngine::Material*>*, ::Class_1_1D8DBED385F55542*>* Field_1_1; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x60
	::System::Collections::Generic::Dictionary_2<::Struct_2_08DBFC9B3812777F, ::Class_1_2F02D0D2C192BA56*>* Field_1_0; // 0x68
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x70
	::System::Int32 Field_1_17; // 0x78
	::System::Single Field_1_16; // 0x7C
	::System::Int32 Field_1_13; // 0x80
	::System::UInt32 Field_1_12; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CE118F684623355(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_0CE118F684623355_OFFSET))(this, a1);
	}

	::System::Void Method_1_72ED9416876F2ECA(::Class_1_1D8DBED385F55542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D8DBED385F55542*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_72ED9416876F2ECA_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::UnityEngine::Material*>* Method_1_6255C8C1767E1E02(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_6255C8C1767E1E02_OFFSET))(a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::RendererMaterialCache* Method_1_37D6C0AFCB04844E(::UnityEngine::Renderer* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::RendererMaterialCache*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_37D6C0AFCB04844E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4F837B65CC054363(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_4F837B65CC054363_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::Class_1_9CBC71DC5240DC00* Method_1_ED538B87F8DDB660(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::Class_1_9CBC71DC5240DC00*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_ED538B87F8DDB660_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CBB465B70522434(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_7CBB465B70522434_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00*>* Method_1_9CE6B6BDB67E724E()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_9CE6B6BDB67E724E_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF4C4800DAA9F7E3(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_FF4C4800DAA9F7E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E76B06A099117223(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_E76B06A099117223_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB9F1BD7416A13F9(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_FB9F1BD7416A13F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9C7783596F21942D(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_9C7783596F21942D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_20E4F4E336273485(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_20E4F4E336273485_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	static ::Class_1_F0D462198B262603* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F0D462198B262603*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0D462198B262603_METHOD_1_24748FC20F375725_OFFSET))();
	}
};
