#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x188B3220)
#define CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x188B3270)
#define CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_INVOKE_OFFSET UNITYSDK_OFFSET(0x188B3210)
#define CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4__CTOR_OFFSET UNITYSDK_OFFSET(0x188B31A0)

inline static constexpr unsigned int Class_2_CE4B10DFAEE2F36E_Class_3_0C3B6203AC5255D4_TypeDefinitionIndex = 47708;

class Class_2_CE4B10DFAEE2F36E_Class_3_0C3B6203AC5255D4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_CLASS_3_0C3B6203AC5255D4_ENDINVOKE_OFFSET))(this, a1);
	}
};
