#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_E1A0B536F0285137_2;
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_7355942AF392AE50_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17028CF0)
#define CLASS_2_7355942AF392AE50_METHOD_2_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x17028D60)
#define CLASS_2_7355942AF392AE50_METHOD_2_819D1565CD491572_OFFSET UNITYSDK_OFFSET(0x17028BB0)
#define CLASS_2_7355942AF392AE50_METHOD_2_A759A0BF05FCEA49_OFFSET UNITYSDK_OFFSET(0x17028B30)
#define CLASS_2_7355942AF392AE50_METHOD_2_EEEE76A85ACE14F1_OFFSET UNITYSDK_OFFSET(0x17028DE0)
#define CLASS_2_7355942AF392AE50_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x17028B40)
#define CLASS_2_7355942AF392AE50_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17028A60)
#define CLASS_2_7355942AF392AE50__CTOR_OFFSET UNITYSDK_OFFSET(0x17028B20)

inline static constexpr unsigned int Class_2_7355942AF392AE50_TypeDefinitionIndex = 57752;

class Class_2_7355942AF392AE50 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_1; // 0x80
	::Class_1_BBE667D4A3124D9B<::Class_3_E1A0B536F0285137_2*>* Field_2_0; // 0x88
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_3_E1A0B536F0285137_2*>* Method_2_A759A0BF05FCEA49()
	{
		return ((::System::Collections::Generic::IList_1<::Class_3_E1A0B536F0285137_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_A759A0BF05FCEA49_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_2_819D1565CD491572(::System::Collections::Generic::IList_1<::Class_3_E1A0B536F0285137_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_E1A0B536F0285137_2*>*))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_819D1565CD491572_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_29388402F1C16287_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEEE76A85ACE14F1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7355942AF392AE50_METHOD_2_EEEE76A85ACE14F1_OFFSET))(this, a1);
	}
};
