#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_573;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBD856C0)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBD856F0)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_INVOKE_OFFSET UNITYSDK_OFFSET(0xBD7DC40)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD855D0)

inline static constexpr unsigned int Class_1_D08EE9D46913ADA9_Class_3_C4B52DB4730F1F2B_TypeDefinitionIndex = 56136;

class Class_1_D08EE9D46913ADA9_Class_3_C4B52DB4730F1F2B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_573* Invoke(::RPG::GameCore::TargetSeqOperation* a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TargetSeqOperation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TargetSeqOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_573* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_C4B52DB4730F1F2B_ENDINVOKE_OFFSET))(this, a1);
	}
};
