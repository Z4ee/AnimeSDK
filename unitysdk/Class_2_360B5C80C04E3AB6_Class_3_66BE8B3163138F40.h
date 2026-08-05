#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1365C91C8EBBD2FF.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_217;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14D5C790)
#define CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14D5C810)
#define CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_INVOKE_OFFSET UNITYSDK_OFFSET(0x14D5C470)
#define CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5C450)

inline static constexpr unsigned int Class_2_360B5C80C04E3AB6_Class_3_66BE8B3163138F40_TypeDefinitionIndex = 58391;

class Class_2_360B5C80C04E3AB6_Class_3_66BE8B3163138F40 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_217*& a1, ::Enum_3_1365C91C8EBBD2FF& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&, ::Enum_3_1365C91C8EBBD2FF&))((::PBYTE)hIl2Cpp + CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_217*& a1, ::Enum_3_1365C91C8EBBD2FF& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&, ::Enum_3_1365C91C8EBBD2FF&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::Class_0_16E4307DCC419505_217*& a1, ::Enum_3_1365C91C8EBBD2FF& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&, ::Enum_3_1365C91C8EBBD2FF&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_360B5C80C04E3AB6_CLASS_3_66BE8B3163138F40_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
