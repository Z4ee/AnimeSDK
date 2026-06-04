#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76ED9B246ED58A54_METHOD_1_2C2F7B8BC8763B74_OFFSET UNITYSDK_OFFSET(0x18A5B150)
#define CLASS_1_76ED9B246ED58A54_METHOD_1_F6A3C68E47127D67_OFFSET UNITYSDK_OFFSET(0x18A5B680)
#define CLASS_1_76ED9B246ED58A54__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5B140)

inline static constexpr unsigned int Class_1_76ED9B246ED58A54_TypeDefinitionIndex = 34442;

class Class_1_76ED9B246ED58A54 : public ::System::Object
{
public:
	::Class_1_D8BECDCE48063EC7* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_D8BECDCE48063EC7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_1_76ED9B246ED58A54__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_2C2F7B8BC8763B74(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_76ED9B246ED58A54_METHOD_1_2C2F7B8BC8763B74_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F6A3C68E47127D67(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_76ED9B246ED58A54_METHOD_1_F6A3C68E47127D67_OFFSET))(this, a1, a2);
	}
};
