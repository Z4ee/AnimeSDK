#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_24379B084564DE42;
class Class_1_3DC9CBDE28D0553C;
class Class_1_8EAF75EE983FA1E7;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_EB3A38E60C647F98_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA411A0)
#define CLASS_3_EB3A38E60C647F98_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA411F0)
#define CLASS_3_EB3A38E60C647F98_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA40AF0)
#define CLASS_3_EB3A38E60C647F98__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA40AE0)

inline static constexpr unsigned int Class_3_EB3A38E60C647F98_TypeDefinitionIndex = 26323;

class Class_3_EB3A38E60C647F98 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_1_3DC9CBDE28D0553C* a1, ::Class_1_3DC9CBDE28D0553C* a2, ::Class_1_24379B084564DE42* a3, ::Class_1_8EAF75EE983FA1E7* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DC9CBDE28D0553C*, ::Class_1_3DC9CBDE28D0553C*, ::Class_1_24379B084564DE42*, ::Class_1_8EAF75EE983FA1E7*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_3DC9CBDE28D0553C* a1, ::Class_1_3DC9CBDE28D0553C* a2, ::Class_1_24379B084564DE42* a3, ::Class_1_8EAF75EE983FA1E7* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_3DC9CBDE28D0553C*, ::Class_1_3DC9CBDE28D0553C*, ::Class_1_24379B084564DE42*, ::Class_1_8EAF75EE983FA1E7*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_ENDINVOKE_OFFSET))(this, a1);
	}
};
