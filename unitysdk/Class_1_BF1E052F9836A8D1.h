#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BF1E052F9836A8D1_METHOD_1_08CB237FDC93F760_OFFSET UNITYSDK_OFFSET(0x1D9028C0)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x1D902C20)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x1D902B40)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_A62E28A24D7C794C_OFFSET UNITYSDK_OFFSET(0x1D902FB0)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_B57B15BBC2ED3061_OFFSET UNITYSDK_OFFSET(0x1D902650)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D9028B0)
#define CLASS_1_BF1E052F9836A8D1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D902640)
#define CLASS_1_BF1E052F9836A8D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9025A0)

inline static constexpr unsigned int Class_1_BF1E052F9836A8D1_TypeDefinitionIndex = 35229;

class Class_1_BF1E052F9836A8D1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B57B15BBC2ED3061(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_B57B15BBC2ED3061_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_08CB237FDC93F760()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_08CB237FDC93F760_OFFSET))(this);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A62E28A24D7C794C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF1E052F9836A8D1_METHOD_1_A62E28A24D7C794C_OFFSET))(this, a1, a2);
	}
};
