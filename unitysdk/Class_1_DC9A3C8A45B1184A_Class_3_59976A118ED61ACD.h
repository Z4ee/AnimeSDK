#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_3E663F02593BDAF0;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0A5C00)
#define CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0A5C90)
#define CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0A4DF0)
#define CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A5B90)

inline static constexpr unsigned int Class_1_DC9A3C8A45B1184A_Class_3_59976A118ED61ACD_TypeDefinitionIndex = 36743;

class Class_1_DC9A3C8A45B1184A_Class_3_59976A118ED61ACD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_3E663F02593BDAF0* Invoke(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_1_3E663F02593BDAF0*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_3E663F02593BDAF0* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_3E663F02593BDAF0*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A_CLASS_3_59976A118ED61ACD_ENDINVOKE_OFFSET))(this, a1);
	}
};
