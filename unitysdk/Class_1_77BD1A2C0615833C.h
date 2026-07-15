#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52242588807D4112;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77BD1A2C0615833C_METHOD_1_25AE245D2CF9F4F4_OFFSET UNITYSDK_OFFSET(0x173BC9A0)
#define CLASS_1_77BD1A2C0615833C_METHOD_1_6A8FAFE580E197E7_OFFSET UNITYSDK_OFFSET(0x173BD5D0)
#define CLASS_1_77BD1A2C0615833C_METHOD_1_83A4158C7436AC75_OFFSET UNITYSDK_OFFSET(0x173BD0A0)
#define CLASS_1_77BD1A2C0615833C_METHOD_1_858EE0E3CEF5E9F3_OFFSET UNITYSDK_OFFSET(0x173BC8B0)
#define CLASS_1_77BD1A2C0615833C_METHOD_1_B2542075CC7B6943_OFFSET UNITYSDK_OFFSET(0x173BD2C0)
#define CLASS_1_77BD1A2C0615833C_METHOD_1_CE71DF3E1A715D46_OFFSET UNITYSDK_OFFSET(0x173BCA90)

inline static constexpr unsigned int Class_1_77BD1A2C0615833C_TypeDefinitionIndex = 58505;

class Class_1_77BD1A2C0615833C : public ::System::Object
{
public:
	static ::System::Boolean Method_1_858EE0E3CEF5E9F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_858EE0E3CEF5E9F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_25AE245D2CF9F4F4(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_25AE245D2CF9F4F4_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_CE71DF3E1A715D46(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_CE71DF3E1A715D46_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_83A4158C7436AC75(::Class_1_52242588807D4112*& a1)
	{
		return ((::System::Boolean(*)(::Class_1_52242588807D4112*&))((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_83A4158C7436AC75_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_B2542075CC7B6943()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_B2542075CC7B6943_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_6A8FAFE580E197E7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77BD1A2C0615833C_METHOD_1_6A8FAFE580E197E7_OFFSET))();
	}
};
