#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA;
class Class_1_44B8EC842F459D62_Class_1_4B25A8F0AB4BC937;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44B8EC842F459D62_METHOD_1_233FEB68EB4BAE6C_OFFSET UNITYSDK_OFFSET(0x99AA010)
#define CLASS_1_44B8EC842F459D62_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x99A9DA0)
#define CLASS_1_44B8EC842F459D62_METHOD_1_A61A083A9F3C415F_OFFSET UNITYSDK_OFFSET(0x99AA830)
#define CLASS_1_44B8EC842F459D62_METHOD_1_EBF05C2AB0390B9F_OFFSET UNITYSDK_OFFSET(0x99AAC50)
#define CLASS_1_44B8EC842F459D62_METHOD_1_FA19279A03526B10_OFFSET UNITYSDK_OFFSET(0x99AAA00)
#define CLASS_1_44B8EC842F459D62_METHOD_1_FBD583DBCC97056A_OFFSET UNITYSDK_OFFSET(0x99A9B80)
#define CLASS_1_44B8EC842F459D62__CCTOR_OFFSET UNITYSDK_OFFSET(0x99AAE40)
#define CLASS_1_44B8EC842F459D62__CTOR_OFFSET UNITYSDK_OFFSET(0x9984DD0)

inline static constexpr unsigned int Class_1_44B8EC842F459D62_TypeDefinitionIndex = 56202;

class Class_1_44B8EC842F459D62 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B8EC842F459D62_TypeDefinitionIndex)->GetStaticField(0x7830);
	}
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::Class_1_44B8EC842F459D62_Class_1_4B25A8F0AB4BC937* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA*>* Field_1_3; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FBD583DBCC97056A(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_FBD583DBCC97056A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_233FEB68EB4BAE6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_233FEB68EB4BAE6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA19279A03526B10(::Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA*))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_FA19279A03526B10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_EBF05C2AB0390B9F(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_EBF05C2AB0390B9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A61A083A9F3C415F(::System::Collections::Generic::List_1<::Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_44B8EC842F459D62_Class_1_45A90A13716B3EFA*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_44B8EC842F459D62_METHOD_1_A61A083A9F3C415F_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
