#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54897FD7051CEF6A;
class Class_2_49CAB3DE74280C58;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_539B43D83AA6128F_METHOD_1_38814E211C5AF7C5_OFFSET UNITYSDK_OFFSET(0xA52A250)
#define CLASS_1_539B43D83AA6128F_METHOD_1_3F3A79F7E0B95602_OFFSET UNITYSDK_OFFSET(0xA52A7C0)
#define CLASS_1_539B43D83AA6128F_METHOD_1_E875885542B220AD_OFFSET UNITYSDK_OFFSET(0xA52AA00)
#define CLASS_1_539B43D83AA6128F__CTOR_OFFSET UNITYSDK_OFFSET(0xA52ABA0)

inline static constexpr unsigned int Class_1_539B43D83AA6128F_TypeDefinitionIndex = 71175;

class Class_1_539B43D83AA6128F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_539B43D83AA6128F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_38814E211C5AF7C5(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_539B43D83AA6128F_METHOD_1_38814E211C5AF7C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3F3A79F7E0B95602(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_539B43D83AA6128F_METHOD_1_3F3A79F7E0B95602_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_54897FD7051CEF6A*>* Method_1_E875885542B220AD(::System::String* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54897FD7051CEF6A*>*(*)(::PVOID, ::System::String*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_539B43D83AA6128F_METHOD_1_E875885542B220AD_OFFSET))(this, a1, a2);
	}
};
