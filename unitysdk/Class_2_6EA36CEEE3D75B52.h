#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_3_1A345EAE5F749316_37;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_152;
template <typename T> class Class_0_16E4307DCC41950C_14;
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_6EA36CEEE3D75B52_METHOD_2_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0x147EA830)
#define CLASS_2_6EA36CEEE3D75B52_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x147EA680)
#define CLASS_2_6EA36CEEE3D75B52_METHOD_2_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x147EAEF0)
#define CLASS_2_6EA36CEEE3D75B52_METHOD_2_ADCB2ED8479E941C_OFFSET UNITYSDK_OFFSET(0x147EAAE0)
#define CLASS_2_6EA36CEEE3D75B52_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x147EA7A0)
#define CLASS_2_6EA36CEEE3D75B52_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x147EA590)
#define CLASS_2_6EA36CEEE3D75B52__CTOR_OFFSET UNITYSDK_OFFSET(0x147EA790)

inline static constexpr unsigned int Class_2_6EA36CEEE3D75B52_TypeDefinitionIndex = 68825;

class Class_2_6EA36CEEE3D75B52 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC41950C_14<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* Field_2_1; // 0x80
	::System::Collections::Generic::Queue_1<::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_152<::System::Boolean>* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_METHOD_2_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_2_ADCB2ED8479E941C(::Class_1_27F786FF2A30778C<::Class_3_1A345EAE5F749316_37*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_1A345EAE5F749316_37*>*))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_METHOD_2_ADCB2ED8479E941C_OFFSET))(this, a1);
	}

	::System::Void Method_2_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA36CEEE3D75B52_METHOD_2_660474B0F8C5FECE_OFFSET))(this);
	}
};
