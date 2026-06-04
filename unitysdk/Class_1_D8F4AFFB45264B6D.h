#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA;
class Class_1_D8F4AFFB45264B6D_Class_1_A6CA61AEC345F980;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_07195F2BBC2A88A9_OFFSET UNITYSDK_OFFSET(0xAD3CA80)
#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAD3CBE0)
#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_8CF01BD5711AA8E0_OFFSET UNITYSDK_OFFSET(0xAD3D7E0)
#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_B5EEF58E762DE03E_OFFSET UNITYSDK_OFFSET(0xAD3DC40)
#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_C8E8054F0CE6C1CE_OFFSET UNITYSDK_OFFSET(0xAD3D9D0)
#define CLASS_1_D8F4AFFB45264B6D_METHOD_1_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0xAD3CE80)
#define CLASS_1_D8F4AFFB45264B6D__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD3DF20)
#define CLASS_1_D8F4AFFB45264B6D__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3DE80)

inline static constexpr unsigned int Class_1_D8F4AFFB45264B6D_TypeDefinitionIndex = 56964;

class Class_1_D8F4AFFB45264B6D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8F4AFFB45264B6D_TypeDefinitionIndex)->GetStaticField(0x9420);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_D8F4AFFB45264B6D_Class_1_A6CA61AEC345F980* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA*>* Field_1_3; // 0x20
	::Il2CppArray<::System::Single>* Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_07195F2BBC2A88A9(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_07195F2BBC2A88A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E8054F0CE6C1CE(::Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA*))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_C8E8054F0CE6C1CE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5EEF58E762DE03E(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_B5EEF58E762DE03E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CF01BD5711AA8E0(::System::Collections::Generic::List_1<::Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D8F4AFFB45264B6D_Class_1_45A90A13716B3EFA*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D8F4AFFB45264B6D_METHOD_1_8CF01BD5711AA8E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
