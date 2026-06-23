#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_820EE119BACAC5A7.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_150;
class Class_2_604149159BD159AA;
class Class_3_1699D6295DC3F818_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_BF640CCE654093DA_METHOD_1_470198506D5CA338_OFFSET UNITYSDK_OFFSET(0x19545E50)
#define CLASS_1_BF640CCE654093DA_METHOD_1_4980B3094975B53D_OFFSET UNITYSDK_OFFSET(0x19545A50)
#define CLASS_1_BF640CCE654093DA_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x19545770)
#define CLASS_1_BF640CCE654093DA_METHOD_1_EA6CFAC9C4AD97CC_OFFSET UNITYSDK_OFFSET(0x195453B0)
#define CLASS_1_BF640CCE654093DA__CTOR_OFFSET UNITYSDK_OFFSET(0x195453A0)

inline static constexpr unsigned int Class_1_BF640CCE654093DA_TypeDefinitionIndex = 59537;

class Class_1_BF640CCE654093DA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_4 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Class_2_604149159BD159AA* Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_BF640CCE654093DA__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_820EE119BACAC5A7>* Method_1_EA6CFAC9C4AD97CC(::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_820EE119BACAC5A7>*(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_1699D6295DC3F818_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF640CCE654093DA_METHOD_1_EA6CFAC9C4AD97CC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_470198506D5CA338(::Struct_2_820EE119BACAC5A7 a1, ::Struct_2_820EE119BACAC5A7 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_820EE119BACAC5A7, ::Struct_2_820EE119BACAC5A7))((::PBYTE)hIl2Cpp + CLASS_1_BF640CCE654093DA_METHOD_1_470198506D5CA338_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF640CCE654093DA_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::Struct_2_820EE119BACAC5A7 Method_1_4980B3094975B53D(::Class_3_1699D6295DC3F818_1* a1, ::Class_2_208CC9941471731A_150* a2)
	{
		return ((::Struct_2_820EE119BACAC5A7(*)(::PVOID, ::Class_3_1699D6295DC3F818_1*, ::Class_2_208CC9941471731A_150*))((::PBYTE)hIl2Cpp + CLASS_1_BF640CCE654093DA_METHOD_1_4980B3094975B53D_OFFSET))(this, a1, a2);
	}
};
