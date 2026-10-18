#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3833970CC4FA195E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E9AFECF170E7E28_METHOD_1_59803B2D40C464EA_OFFSET UNITYSDK_OFFSET(0xBF5DBC0)
#define CLASS_1_5E9AFECF170E7E28_METHOD_1_6A8FAFE580E197E7_OFFSET UNITYSDK_OFFSET(0xBF5E9B0)
#define CLASS_1_5E9AFECF170E7E28_METHOD_1_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0xBF5E4D0)
#define CLASS_1_5E9AFECF170E7E28_METHOD_1_B2542075CC7B6943_OFFSET UNITYSDK_OFFSET(0xBF5E6A0)
#define CLASS_1_5E9AFECF170E7E28_METHOD_1_C0893B30230FDF88_OFFSET UNITYSDK_OFFSET(0xBF5DE00)
#define CLASS_1_5E9AFECF170E7E28_METHOD_1_F85ECD38F69810FD_OFFSET UNITYSDK_OFFSET(0xBF5DCE0)

inline static constexpr unsigned int Class_1_5E9AFECF170E7E28_TypeDefinitionIndex = 61241;

class Class_1_5E9AFECF170E7E28 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_59803B2D40C464EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_59803B2D40C464EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F85ECD38F69810FD(::System::String* a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_F85ECD38F69810FD_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_C0893B30230FDF88(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_C0893B30230FDF88_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AC13E1A23375417A(::Class_1_3833970CC4FA195E*& a1)
	{
		return ((::System::Boolean(*)(::Class_1_3833970CC4FA195E*&))((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_AC13E1A23375417A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_B2542075CC7B6943()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_B2542075CC7B6943_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_6A8FAFE580E197E7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E9AFECF170E7E28_METHOD_1_6A8FAFE580E197E7_OFFSET))();
	}
};
