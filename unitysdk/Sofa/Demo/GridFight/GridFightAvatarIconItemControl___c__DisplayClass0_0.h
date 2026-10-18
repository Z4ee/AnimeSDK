#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_488;
namespace R3 { template <typename T> class Observable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE97BC30)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0___BINDING_B__7_OFFSET UNITYSDK_OFFSET(0xE97C5B0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0___BINDING_B__8_OFFSET UNITYSDK_OFFSET(0xE97C6E0)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarIconItemControl___c__DisplayClass0_0_TypeDefinitionIndex = 49708;

	class GridFightAvatarIconItemControl___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__8; // 0x10
		::System::Int32 starIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__7(::Class_0_16E4307DCC419505_488* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_488*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0___BINDING_B__7_OFFSET))(this, a1);
		}

		::System::Boolean __Binding_b__8(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL___C__DISPLAYCLASS0_0___BINDING_B__8_OFFSET))(this, a1);
		}
	};
}
