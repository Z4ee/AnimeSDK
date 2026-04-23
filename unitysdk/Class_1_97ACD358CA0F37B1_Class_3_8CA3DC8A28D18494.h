#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC704C20)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC704C60)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_INVOKE_OFFSET UNITYSDK_OFFSET(0xC6FE860)
#define CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494__CTOR_OFFSET UNITYSDK_OFFSET(0xC703100)

inline static constexpr unsigned int Class_1_97ACD358CA0F37B1_Class_3_8CA3DC8A28D18494_TypeDefinitionIndex = 62606;

class Class_1_97ACD358CA0F37B1_Class_3_8CA3DC8A28D18494 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Object* Invoke(::System::Type* a1, ::Class_1_7A22A3DBEEDD1F80* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::Class_1_7A22A3DBEEDD1F80* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::Class_1_7A22A3DBEEDD1F80*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_97ACD358CA0F37B1_CLASS_3_8CA3DC8A28D18494_ENDINVOKE_OFFSET))(this, a1);
	}
};
