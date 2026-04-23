#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_BD800F5B29A08E1F;
class Class_1_F9FBCC956DFCF137_3;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1239D820)
#define CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1239D860)
#define CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_INVOKE_OFFSET UNITYSDK_OFFSET(0x1239BD90)
#define CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079__CTOR_OFFSET UNITYSDK_OFFSET(0x1239D800)

inline static constexpr unsigned int Class_1_80CEF93C8502A7FD_Class_3_F539C5B5E4B1A079_TypeDefinitionIndex = 50112;

class Class_1_80CEF93C8502A7FD_Class_3_F539C5B5E4B1A079 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F9FBCC956DFCF137_3* Invoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::Class_1_F9FBCC956DFCF137_3*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_BD800F5B29A08E1F* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_F9FBCC956DFCF137_3* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_F9FBCC956DFCF137_3*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_80CEF93C8502A7FD_CLASS_3_F539C5B5E4B1A079_ENDINVOKE_OFFSET))(this, a1);
	}
};
