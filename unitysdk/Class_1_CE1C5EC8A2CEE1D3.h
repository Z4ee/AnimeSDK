#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3239354810657E86;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CE1C5EC8A2CEE1D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA53DF60)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_112A10D7FC198CB9_OFFSET UNITYSDK_OFFSET(0xA53E4F0)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xA53DDA0)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xA53DE80)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_732EDB3121B072B2_OFFSET UNITYSDK_OFFSET(0xA53DBD0)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_89A98EDEB56E4A08_OFFSET UNITYSDK_OFFSET(0xA53E170)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA53E690)
#define CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_EDA3923B891A3359_OFFSET UNITYSDK_OFFSET(0xA53DB60)
#define CLASS_1_CE1C5EC8A2CEE1D3_TICK_OFFSET UNITYSDK_OFFSET(0xA53E010)
#define CLASS_1_CE1C5EC8A2CEE1D3__CTOR_OFFSET UNITYSDK_OFFSET(0xA53E6F0)

inline static constexpr unsigned int Class_1_CE1C5EC8A2CEE1D3_TypeDefinitionIndex = 56019;

class Class_1_CE1C5EC8A2CEE1D3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3239354810657E86*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDA3923B891A3359(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_EDA3923B891A3359_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_89A98EDEB56E4A08(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_89A98EDEB56E4A08_OFFSET))(this, a1);
	}

	::System::Void Method_1_112A10D7FC198CB9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_112A10D7FC198CB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_732EDB3121B072B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1C5EC8A2CEE1D3_METHOD_1_732EDB3121B072B2_OFFSET))(this);
	}
};
