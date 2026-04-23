#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_695BA9A73779D495;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3D3983B9CFA0F3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12389ED0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3541031022052435_OFFSET UNITYSDK_OFFSET(0x1238B920)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x1238AB50)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x1238B750)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_6852ABFF9AA428B2_OFFSET UNITYSDK_OFFSET(0x1238A9D0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_69EAD987F6F2052B_OFFSET UNITYSDK_OFFSET(0x1238B800)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_7EF1A80154478442_OFFSET UNITYSDK_OFFSET(0x1238A800)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_936D3806939567E8_OFFSET UNITYSDK_OFFSET(0x1238ACD0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_9F01B448AD7A04F2_OFFSET UNITYSDK_OFFSET(0x1238BBF0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_1_OFFSET UNITYSDK_OFFSET(0x1238A380)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_2_OFFSET UNITYSDK_OFFSET(0x1238A500)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_3_OFFSET UNITYSDK_OFFSET(0x1238A680)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x1238A200)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1238B310)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1238BEC0)
#define CLASS_1_6D3D3983B9CFA0F3_METHOD_1_FBB3443D127CBF20_OFFSET UNITYSDK_OFFSET(0x1238B0C0)
#define CLASS_1_6D3D3983B9CFA0F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1238BED0)
#define CLASS_1_6D3D3983B9CFA0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12389710)

inline static constexpr unsigned int Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex = 59106;

class Class_1_6D3D3983B9CFA0F3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D3D3983B9CFA0F3_TypeDefinitionIndex)->GetStaticField(0x11BB0);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::Class_1_695BA9A73779D495*>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_13; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3EB6D13BCFBCDBBC*>* Field_1_11; // 0x38
	::System::Boolean Field_1_9; // 0x40
	::System::Boolean Field_1_8; // 0x41
	::System::Boolean Field_1_10; // 0x42
	::System::Single Field_1_5; // 0x44
	::System::UInt32 Field_1_2; // 0x48
	::System::Int32 Field_1_14; // 0x4C
	::System::Single Field_1_3; // 0x50
	::System::Int32 Field_1_6; // 0x54
	::System::Int32 Field_1_4; // 0x58
	::System::Single Field_1_15; // 0x5C

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}

	::System::Void Method_1_E67FA6A042436B76_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_1_OFFSET))(this);
	}

	::System::Void Method_1_E67FA6A042436B76_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_2_OFFSET))(this);
	}

	::System::Void Method_1_E67FA6A042436B76_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E67FA6A042436B76_3_OFFSET))(this);
	}

	::System::Void Method_1_7EF1A80154478442(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_7EF1A80154478442_OFFSET))(this, a1);
	}

	::System::Void Method_1_6852ABFF9AA428B2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_6852ABFF9AA428B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Void Method_1_936D3806939567E8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_936D3806939567E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBB3443D127CBF20(::Class_1_3EB6D13BCFBCDBBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EB6D13BCFBCDBBC*))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_FBB3443D127CBF20_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_69EAD987F6F2052B(::System::Single a1, ::System::Int32& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_69EAD987F6F2052B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3541031022052435(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_3541031022052435_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F01B448AD7A04F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_9F01B448AD7A04F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3D3983B9CFA0F3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
