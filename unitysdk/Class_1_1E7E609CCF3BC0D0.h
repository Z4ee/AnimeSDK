#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DAFF948AFE7BB466;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x19D8B3E0)
#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19D8B4F0)
#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x19D8B450)
#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_732EDB3121B072B2_OFFSET UNITYSDK_OFFSET(0x19D8B810)
#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_AA419394C46C4621_OFFSET UNITYSDK_OFFSET(0x19D8B500)
#define CLASS_1_1E7E609CCF3BC0D0_METHOD_1_F734C42B184CEA5C_OFFSET UNITYSDK_OFFSET(0x19D8B750)
#define CLASS_1_1E7E609CCF3BC0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D8B2B0)

inline static constexpr unsigned int Class_1_1E7E609CCF3BC0D0_TypeDefinitionIndex = 9701;

class Class_1_1E7E609CCF3BC0D0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x20
	::Class_1_DAFF948AFE7BB466* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_1_DAFF948AFE7BB466* Method_1_24748FC20F375725()
	{
		return ((::Class_1_DAFF948AFE7BB466*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_AA419394C46C4621(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_AA419394C46C4621_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F734C42B184CEA5C(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_F734C42B184CEA5C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_732EDB3121B072B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E609CCF3BC0D0_METHOD_1_732EDB3121B072B2_OFFSET))(this);
	}
};
