#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class NetPacket; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE460930)
#define CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE460990)
#define CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_INVOKE_OFFSET UNITYSDK_OFFSET(0xE4600C0)
#define CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A__CTOR_OFFSET UNITYSDK_OFFSET(0xE460910)

inline static constexpr unsigned int Class_1_857979286963EC4B_Class_3_A09093250D8C682A_TypeDefinitionIndex = 47946;

class Class_1_857979286963EC4B_Class_3_A09093250D8C682A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::Client::NetPacket* a1, ::System::Object*& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::Client::NetPacket* a1, ::System::Object*& a2, ::System::UInt32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::Object*& a1, ::System::UInt32& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_CLASS_3_A09093250D8C682A_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
