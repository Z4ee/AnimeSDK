#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_7325E2A200EF063B;
class Class_1_F9FBCC956DFCF137_1;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C906540)
#define CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C906580)
#define CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C900560)
#define CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C906450)

inline static constexpr unsigned int Class_1_41E172AFC0380B0D_Class_3_5E93CC2AF84237E0_TypeDefinitionIndex = 43166;

class Class_1_41E172AFC0380B0D_Class_3_5E93CC2AF84237E0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F9FBCC956DFCF137_1* Invoke(::RPG::GameCore::MarbleTaskConfig* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::Class_1_F9FBCC956DFCF137_1*(*)(::PVOID, ::RPG::GameCore::MarbleTaskConfig*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::MarbleTaskConfig* a1, ::Class_1_7325E2A200EF063B* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::MarbleTaskConfig*, ::Class_1_7325E2A200EF063B*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_F9FBCC956DFCF137_1* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_F9FBCC956DFCF137_1*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_41E172AFC0380B0D_CLASS_3_5E93CC2AF84237E0_ENDINVOKE_OFFSET))(this, a1);
	}
};
