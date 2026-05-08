#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
class Class_1_8088D8743C1058EF;
class Class_3_92503BC2DBB2A179;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10505500)
#define CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x105055A0)
#define CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x10504C30)
#define CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x105054F0)

inline static constexpr unsigned int Class_3_92503BC2DBB2A179_Class_3_C70A3EEFA1B9596C_1_TypeDefinitionIndex = 67741;

class Class_3_92503BC2DBB2A179_Class_3_C70A3EEFA1B9596C_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8088D8743C1058EF* a1, ::Class_1_5CAB9AA46D466E98* a2, ::Class_3_92503BC2DBB2A179* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8088D8743C1058EF*, ::Class_1_5CAB9AA46D466E98*, ::Class_3_92503BC2DBB2A179*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8088D8743C1058EF* a1, ::Class_1_5CAB9AA46D466E98* a2, ::Class_3_92503BC2DBB2A179* a3, ::System::Single a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8088D8743C1058EF*, ::Class_1_5CAB9AA46D466E98*, ::Class_3_92503BC2DBB2A179*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_92503BC2DBB2A179_CLASS_3_C70A3EEFA1B9596C_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
