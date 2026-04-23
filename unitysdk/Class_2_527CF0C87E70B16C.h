#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_1_049B9A4D827304A8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_527CF0C87E70B16C_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x129F7F80)
#define CLASS_2_527CF0C87E70B16C_METHOD_2_31D466E1922BC701_OFFSET UNITYSDK_OFFSET(0x129F7F90)
#define CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x129F8420)
#define CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x129F8460)
#define CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129F83E0)
#define CLASS_2_527CF0C87E70B16C__CTOR_OFFSET UNITYSDK_OFFSET(0x129F83D0)

inline static constexpr unsigned int Class_2_527CF0C87E70B16C_TypeDefinitionIndex = 72654;

class Class_2_527CF0C87E70B16C : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::Class_1_049B9A4D827304A8* Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_31D466E1922BC701()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527CF0C87E70B16C_METHOD_2_31D466E1922BC701_OFFSET))(this);
	}
};
