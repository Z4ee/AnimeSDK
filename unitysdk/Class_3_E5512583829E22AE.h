#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_1044;
class Class_0_16E4307DCC419505_1045;
class Class_1_82DA885B15E1F653;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_E5512583829E22AE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB589A60)
#define CLASS_3_E5512583829E22AE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB589AF0)
#define CLASS_3_E5512583829E22AE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB589A40)
#define CLASS_3_E5512583829E22AE__CTOR_OFFSET UNITYSDK_OFFSET(0xB589950)

inline static constexpr unsigned int Class_3_E5512583829E22AE_TypeDefinitionIndex = 67114;

class Class_3_E5512583829E22AE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_E5512583829E22AE__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1044* Invoke(::Class_0_16E4307DCC419505_1045* a1, ::Enum_3_63BCB6C405BA8A1D_4 a2, ::Class_1_82DA885B15E1F653* a3)
	{
		return ((::Class_0_16E4307DCC419505_1044*(*)(::PVOID, ::Class_0_16E4307DCC419505_1045*, ::Enum_3_63BCB6C405BA8A1D_4, ::Class_1_82DA885B15E1F653*))((::PBYTE)hIl2Cpp + CLASS_3_E5512583829E22AE_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_1045* a1, ::Enum_3_63BCB6C405BA8A1D_4 a2, ::Class_1_82DA885B15E1F653* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_1045*, ::Enum_3_63BCB6C405BA8A1D_4, ::Class_1_82DA885B15E1F653*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E5512583829E22AE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_1044* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_1044*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_E5512583829E22AE_ENDINVOKE_OFFSET))(this, a1);
	}
};
