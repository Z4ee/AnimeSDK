#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_079E7911E4334C20_METHOD_1_025ED737F0A1C294_OFFSET UNITYSDK_OFFSET(0x14066470)
#define CLASS_1_079E7911E4334C20_METHOD_1_9123E7AE4C1ABB04_OFFSET UNITYSDK_OFFSET(0x140669C0)
#define CLASS_1_079E7911E4334C20_METHOD_1_B3C2857DD971A23C_OFFSET UNITYSDK_OFFSET(0x14066360)
#define CLASS_1_079E7911E4334C20__CCTOR_OFFSET UNITYSDK_OFFSET(0x14066AA0)

inline static constexpr unsigned int Class_1_079E7911E4334C20_TypeDefinitionIndex = 40219;

class Class_1_079E7911E4334C20 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_OEAPCKKBJHG()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_079E7911E4334C20_TypeDefinitionIndex)->GetStaticField(0xF690);
	}
	// static const ::System::UInt32 MPEKOHMJBPB = 0x9E3779B9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_079E7911E4334C20__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B3C2857DD971A23C(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_079E7911E4334C20_METHOD_1_B3C2857DD971A23C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_025ED737F0A1C294(::System::Byte* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6)
	{
		return ((::System::Void(*)(::System::Byte*, ::System::UInt32, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_079E7911E4334C20_METHOD_1_025ED737F0A1C294_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_9123E7AE4C1ABB04(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_079E7911E4334C20_METHOD_1_9123E7AE4C1ABB04_OFFSET))(a1, a2);
	}
};
