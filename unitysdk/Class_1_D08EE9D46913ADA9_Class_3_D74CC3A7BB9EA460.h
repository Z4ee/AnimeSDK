#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_515;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1824C7A0)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1824C7D0)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_INVOKE_OFFSET UNITYSDK_OFFSET(0x18244BE0)
#define CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460__CTOR_OFFSET UNITYSDK_OFFSET(0x1824C6B0)

inline static constexpr unsigned int Class_1_D08EE9D46913ADA9_Class_3_D74CC3A7BB9EA460_TypeDefinitionIndex = 53421;

class Class_1_D08EE9D46913ADA9_Class_3_D74CC3A7BB9EA460 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_515* Invoke(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::Class_0_16E4307DCC419505_515*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TargetEvaluator* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_515* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_515*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D08EE9D46913ADA9_CLASS_3_D74CC3A7BB9EA460_ENDINVOKE_OFFSET))(this, a1);
	}
};
