#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_AC66714FF5876767;
class Class_1_F9FBCC956DFCF137_5;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x157EF5F0)
#define CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x157EF630)
#define CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_INVOKE_OFFSET UNITYSDK_OFFSET(0x157EDF70)
#define CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079__CTOR_OFFSET UNITYSDK_OFFSET(0x157EF500)

inline static constexpr unsigned int Class_1_02BC53BFC6F9A5B6_Class_3_F539C5B5E4B1A079_TypeDefinitionIndex = 54545;

class Class_1_02BC53BFC6F9A5B6_Class_3_F539C5B5E4B1A079 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F9FBCC956DFCF137_5* Invoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::Class_1_F9FBCC956DFCF137_5*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_F9FBCC956DFCF137_5* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_F9FBCC956DFCF137_5*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_02BC53BFC6F9A5B6_CLASS_3_F539C5B5E4B1A079_ENDINVOKE_OFFSET))(this, a1);
	}
};
