#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_5845D5E7E3311DD9;
class Class_1_B85817849BC6CF88;
class Class_1_FE7E81DE5EE6F03B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F80ACDC6C476D82_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1297C850)
#define CLASS_1_1F80ACDC6C476D82_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1297C180)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_468D850A5DBE74B5_OFFSET UNITYSDK_OFFSET(0x1297CE40)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1297C200)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_1_OFFSET UNITYSDK_OFFSET(0x1297D440)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_2_OFFSET UNITYSDK_OFFSET(0x1297D5E0)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_OFFSET UNITYSDK_OFFSET(0x1297D2A0)
#define CLASS_1_1F80ACDC6C476D82_METHOD_1_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x1297C8B0)
#define CLASS_1_1F80ACDC6C476D82__CTOR_OFFSET UNITYSDK_OFFSET(0x1297CBC0)

inline static constexpr unsigned int Class_1_1F80ACDC6C476D82_TypeDefinitionIndex = 85739;

class Class_1_1F80ACDC6C476D82 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FE7E81DE5EE6F03B*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B85817849BC6CF88*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5845D5E7E3311DD9*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_11; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x40
	::System::String* Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_468D850A5DBE74B5(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_5845D5E7E3311DD9*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_5845D5E7E3311DD9*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_468D850A5DBE74B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_689C310CE8562A0E(::System::Int32 a1, ::Class_1_FE7E81DE5EE6F03B*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_FE7E81DE5EE6F03B*&))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_689C310CE8562A0E_1(::System::Int32 a1, ::Class_1_B85817849BC6CF88*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_B85817849BC6CF88*&))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_689C310CE8562A0E_2(::System::Int32 a1, ::Class_1_5845D5E7E3311DD9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_5845D5E7E3311DD9*&))((::PBYTE)hIl2Cpp + CLASS_1_1F80ACDC6C476D82_METHOD_1_689C310CE8562A0E_2_OFFSET))(this, a1, a2);
	}
};
