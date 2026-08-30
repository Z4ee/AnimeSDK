#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0DEB44140A26ADC0_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CE9CE30)
#define CLASS_3_0DEB44140A26ADC0_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CE9CE70)
#define CLASS_3_0DEB44140A26ADC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9CE60)

inline static constexpr unsigned int Class_3_0DEB44140A26ADC0_TypeDefinitionIndex = 23814;

class Class_3_0DEB44140A26ADC0 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJEADACFDCI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DEB44140A26ADC0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0DEB44140A26ADC0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0DEB44140A26ADC0*&))((::PBYTE)hIl2Cpp + CLASS_3_0DEB44140A26ADC0_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0DEB44140A26ADC0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0DEB44140A26ADC0*))((::PBYTE)hIl2Cpp + CLASS_3_0DEB44140A26ADC0_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
