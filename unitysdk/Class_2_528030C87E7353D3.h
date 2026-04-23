#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_2_293C6AF513403273;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_528030C87E7353D3_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x118410D0)
#define CLASS_2_528030C87E7353D3_METHOD_2_1418424D36C6EED2_OFFSET UNITYSDK_OFFSET(0x118410E0)
#define CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11841500)
#define CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11841540)
#define CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118414C0)
#define CLASS_2_528030C87E7353D3__CTOR_OFFSET UNITYSDK_OFFSET(0x118414B0)

inline static constexpr unsigned int Class_2_528030C87E7353D3_TypeDefinitionIndex = 72645;

class Class_2_528030C87E7353D3 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::Class_2_293C6AF513403273* Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1418424D36C6EED2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_528030C87E7353D3_METHOD_2_1418424D36C6EED2_OFFSET))(this);
	}
};
