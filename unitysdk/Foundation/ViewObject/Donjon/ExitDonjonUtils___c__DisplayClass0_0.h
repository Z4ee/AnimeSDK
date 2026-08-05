#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

class Class_1_0333092B652ED806;
class Class_3_568600B6F5743120;
class Class_3_E6DBB0638F698853_73;
namespace System { template <typename T1, typename T2> class Action_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D74470)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__0_OFFSET UNITYSDK_OFFSET(0x14D74480)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__1_OFFSET UNITYSDK_OFFSET(0x14D744E0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass0_0_TypeDefinitionIndex = 69991;

	class ExitDonjonUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_0333092B652ED806* timerInfo; // 0x10
		::Class_3_568600B6F5743120* streamingContext; // 0x18
		::System::Action_2<::System::Boolean, ::Class_3_568600B6F5743120*>* onResultContextPrepared; // 0x20
		::System::Int32 escapeId; // 0x28
		::Enum_3_F80BFD5B986D5503_4 result; // 0x2C
		::System::Boolean isZenkov; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _EndCurrentXKovDungeon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__0_OFFSET))(this);
		}

		::Class_3_E6DBB0638F698853_73* _EndCurrentXKovDungeon_b__1()
		{
			return ((::Class_3_E6DBB0638F698853_73*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__1_OFFSET))(this);
		}
	};
}
