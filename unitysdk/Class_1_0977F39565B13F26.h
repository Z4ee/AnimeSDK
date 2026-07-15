#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_0977F39565B13F26_METHOD_1_0B15933E8AE3DFE8_OFFSET UNITYSDK_OFFSET(0x16CEBD60)
#define CLASS_1_0977F39565B13F26_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16CEC420)
#define CLASS_1_0977F39565B13F26_METHOD_1_47DCDDBA2ED87848_OFFSET UNITYSDK_OFFSET(0x16CEC510)
#define CLASS_1_0977F39565B13F26_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16CEC480)
#define CLASS_1_0977F39565B13F26_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x16CEC3A0)
#define CLASS_1_0977F39565B13F26_METHOD_1_D6CABC35D23CEDB8_OFFSET UNITYSDK_OFFSET(0x16CEBC90)
#define CLASS_1_0977F39565B13F26__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEBD20)

inline static constexpr unsigned int Class_1_0977F39565B13F26_TypeDefinitionIndex = 57286;

class Class_1_0977F39565B13F26 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26__CTOR_OFFSET))(this);
	}

	static ::Class_1_0977F39565B13F26* Method_1_D6CABC35D23CEDB8(::System::String* a1)
	{
		return ((::Class_1_0977F39565B13F26*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_D6CABC35D23CEDB8_OFFSET))(a1);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_0B15933E8AE3DFE8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_0B15933E8AE3DFE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_47DCDDBA2ED87848(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_0977F39565B13F26_METHOD_1_47DCDDBA2ED87848_OFFSET))(this, a1);
	}
};
