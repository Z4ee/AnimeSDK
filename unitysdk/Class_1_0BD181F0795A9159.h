#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_0BD181F0795A9159_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x128FFA40)
#define CLASS_1_0BD181F0795A9159_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x128FF9D0)
#define CLASS_1_0BD181F0795A9159_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x128FFAA0)
#define CLASS_1_0BD181F0795A9159_METHOD_1_D25AB90E19F05044_OFFSET UNITYSDK_OFFSET(0x128FFB30)
#define CLASS_1_0BD181F0795A9159_METHOD_1_D6CABC35D23CEDB8_OFFSET UNITYSDK_OFFSET(0x128FF610)
#define CLASS_1_0BD181F0795A9159_METHOD_1_E7F9B3EAF447479A_OFFSET UNITYSDK_OFFSET(0x128FF6E0)
#define CLASS_1_0BD181F0795A9159__CTOR_OFFSET UNITYSDK_OFFSET(0x128FF6A0)

inline static constexpr unsigned int Class_1_0BD181F0795A9159_TypeDefinitionIndex = 55313;

class Class_1_0BD181F0795A9159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159__CTOR_OFFSET))(this);
	}

	static ::Class_1_0BD181F0795A9159* Method_1_D6CABC35D23CEDB8(::System::String* a1)
	{
		return ((::Class_1_0BD181F0795A9159*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_D6CABC35D23CEDB8_OFFSET))(a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_E7F9B3EAF447479A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_E7F9B3EAF447479A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D25AB90E19F05044(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_0BD181F0795A9159_METHOD_1_D25AB90E19F05044_OFFSET))(this, a1);
	}
};
