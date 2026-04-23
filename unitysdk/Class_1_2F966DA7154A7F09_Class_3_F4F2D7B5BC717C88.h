#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x978B4E0)
#define CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x978B530)
#define CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_INVOKE_OFFSET UNITYSDK_OFFSET(0x978B140)
#define CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88__CTOR_OFFSET UNITYSDK_OFFSET(0x978B4C0)

inline static constexpr unsigned int Class_1_2F966DA7154A7F09_Class_3_F4F2D7B5BC717C88_TypeDefinitionIndex = 49809;

class Class_1_2F966DA7154A7F09_Class_3_F4F2D7B5BC717C88 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::FixPoint& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::FixPoint& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::RPG::GameCore::FixPoint& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_CLASS_3_F4F2D7B5BC717C88_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
