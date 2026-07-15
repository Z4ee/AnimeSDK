#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17B10160)
#define CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17B101A0)
#define CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_INVOKE_OFFSET UNITYSDK_OFFSET(0x17B0EEB0)
#define CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220__CTOR_OFFSET UNITYSDK_OFFSET(0x17B10070)

inline static constexpr unsigned int Class_1_527521BD6B2CC229_Class_3_AB3DCCDB3276A220_TypeDefinitionIndex = 35860;

class Class_1_527521BD6B2CC229_Class_3_AB3DCCDB3276A220 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_19* Invoke(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_19*(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_43BD383C98B4C0C5_19* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_19*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_527521BD6B2CC229_CLASS_3_AB3DCCDB3276A220_ENDINVOKE_OFFSET))(this, a1);
	}
};
