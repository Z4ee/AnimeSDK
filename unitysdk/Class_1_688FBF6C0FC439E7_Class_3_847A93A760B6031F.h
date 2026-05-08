#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_688FBF6C0FC439E7_Class_2_E54BED9962644023;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16535810)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16535850)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_INVOKE_OFFSET UNITYSDK_OFFSET(0x165351F0)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F__CTOR_OFFSET UNITYSDK_OFFSET(0x165351E0)

inline static constexpr unsigned int Class_1_688FBF6C0FC439E7_Class_3_847A93A760B6031F_TypeDefinitionIndex = 67616;

class Class_1_688FBF6C0FC439E7_Class_3_847A93A760B6031F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_688FBF6C0FC439E7_Class_2_E54BED9962644023* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*, ::Class_1_688FBF6C0FC439E7_Class_2_E54BED9962644023*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_688FBF6C0FC439E7_Class_2_E54BED9962644023* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*, ::Class_1_688FBF6C0FC439E7_Class_2_E54BED9962644023*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_847A93A760B6031F_ENDINVOKE_OFFSET))(this, a1);
	}
};
