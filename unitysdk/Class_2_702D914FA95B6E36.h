#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"

class Class_2_07A2E3D9266E9604;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_702D914FA95B6E36_METHOD_2_48D720539EEF6273_OFFSET UNITYSDK_OFFSET(0x18BA0200)
#define CLASS_2_702D914FA95B6E36_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B9FF90)
#define CLASS_2_702D914FA95B6E36_METHOD_2_DDB71E8F62C430BE_OFFSET UNITYSDK_OFFSET(0x18BA0020)
#define CLASS_2_702D914FA95B6E36_METHOD_2_E32E9B779683F382_OFFSET UNITYSDK_OFFSET(0x18B9FE40)
#define CLASS_2_702D914FA95B6E36_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18B9FD40)
#define CLASS_2_702D914FA95B6E36__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9FE30)

inline static constexpr unsigned int Class_2_702D914FA95B6E36_TypeDefinitionIndex = 90792;

class Class_2_702D914FA95B6E36 : public ::Class_1_BE149A7D6310B037
{
public:
	::Class_2_07A2E3D9266E9604* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_E32E9B779683F382(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36_METHOD_2_E32E9B779683F382_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DDB71E8F62C430BE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36_METHOD_2_DDB71E8F62C430BE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_48D720539EEF6273(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_702D914FA95B6E36_METHOD_2_48D720539EEF6273_OFFSET))(this, a1, a2);
	}
};
