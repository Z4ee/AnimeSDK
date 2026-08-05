#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C218C31784467D5.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1171;
class Class_2_604149159BD159AA;
class Class_3_1699D6295DC3F818_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_FF516117F5348853_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1BC091E0)
#define CLASS_1_FF516117F5348853_METHOD_1_5AEA9FB303616D6B_OFFSET UNITYSDK_OFFSET(0x1BC08A40)
#define CLASS_1_FF516117F5348853_METHOD_1_CAFACC08A15F95F5_OFFSET UNITYSDK_OFFSET(0x1BC094C0)
#define CLASS_1_FF516117F5348853_METHOD_1_EA6CFAC9C4AD97CC_OFFSET UNITYSDK_OFFSET(0x1BC08E40)
#define CLASS_1_FF516117F5348853_METHOD_1_FD20A27ACA3DCE18_OFFSET UNITYSDK_OFFSET(0x1BC09650)
#define CLASS_1_FF516117F5348853__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC08A30)

inline static constexpr unsigned int Class_1_FF516117F5348853_TypeDefinitionIndex = 52079;

class Class_1_FF516117F5348853 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	::Class_2_604149159BD159AA* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_4C218C31784467D5 Method_1_5AEA9FB303616D6B(::System::Int32 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_1171* a3)
	{
		return ((::Struct_2_4C218C31784467D5(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_2_208CC9941471731A_1171*))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853_METHOD_1_5AEA9FB303616D6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Struct_2_4C218C31784467D5>* Method_1_EA6CFAC9C4AD97CC(::Class_1_27F786FF2A30778C<::Class_3_1699D6295DC3F818_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_4C218C31784467D5>*(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_1699D6295DC3F818_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853_METHOD_1_EA6CFAC9C4AD97CC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CAFACC08A15F95F5(::Struct_2_4C218C31784467D5 a1, ::Struct_2_4C218C31784467D5 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_4C218C31784467D5, ::Struct_2_4C218C31784467D5))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853_METHOD_1_CAFACC08A15F95F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_4C218C31784467D5>* Method_1_FD20A27ACA3DCE18(::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_4C218C31784467D5>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1>*))((::PBYTE)hIl2Cpp + CLASS_1_FF516117F5348853_METHOD_1_FD20A27ACA3DCE18_OFFSET))(this, a1);
	}
};
