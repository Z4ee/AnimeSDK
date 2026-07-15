#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17999870)
#define CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17999920)
#define CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_INVOKE_OFFSET UNITYSDK_OFFSET(0x17999230)
#define CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260__CTOR_OFFSET UNITYSDK_OFFSET(0x17999800)

inline static constexpr unsigned int Class_2_646CCD18043C3F6C_Class_3_6340F8F348E84260_TypeDefinitionIndex = 62274;

class Class_2_646CCD18043C3F6C_Class_3_6340F8F348E84260 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::RPG::Client::GridFightRoleChangeType& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleChangeType&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_CLASS_3_6340F8F348E84260_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
