#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_F59C8DF29FF9694F;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19D9DD70)
#define CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19D9DDD0)
#define CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x19D9CF00)
#define CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9B480)

inline static constexpr unsigned int Class_1_F59C8DF29FF9694F_Class_3_4FF8BBC96790DA30_1_TypeDefinitionIndex = 39755;

class Class_1_F59C8DF29FF9694F_Class_3_4FF8BBC96790DA30_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_F59C8DF29FF9694F* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_F59C8DF29FF9694F* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F59C8DF29FF9694F_CLASS_3_4FF8BBC96790DA30_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
