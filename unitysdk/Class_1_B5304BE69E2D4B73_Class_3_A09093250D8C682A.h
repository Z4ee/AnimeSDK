#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class NetPacket; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A22AD20)
#define CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A22AD80)
#define CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A22AD00)
#define CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22AC10)

inline static constexpr unsigned int Class_1_B5304BE69E2D4B73_Class_3_A09093250D8C682A_TypeDefinitionIndex = 59440;

class Class_1_B5304BE69E2D4B73_Class_3_A09093250D8C682A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::Client::NetPacket* a1, ::System::Object*& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::Client::NetPacket* a1, ::System::Object*& a2, ::System::UInt32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::Object*& a1, ::System::UInt32& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73_CLASS_3_A09093250D8C682A_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
