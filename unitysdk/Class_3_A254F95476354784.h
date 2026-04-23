#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class MapDef; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A254F95476354784_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95A3CF0)
#define CLASS_3_A254F95476354784_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95A3D30)
#define CLASS_3_A254F95476354784_INVOKE_OFFSET UNITYSDK_OFFSET(0x95A3730)
#define CLASS_3_A254F95476354784__CTOR_OFFSET UNITYSDK_OFFSET(0x95A3710)

inline static constexpr unsigned int Class_3_A254F95476354784_TypeDefinitionIndex = 57374;

class Class_3_A254F95476354784 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A254F95476354784__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_3_A254F95476354784_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::RPG::Client::MapDef* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::RPG::Client::MapDef*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A254F95476354784_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A254F95476354784_ENDINVOKE_OFFSET))(this, a1);
	}
};
