#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIInterKnotV3PageController; }

#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17829F40)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x17829F50)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x17829F60)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x1782A000)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x1782A080)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x1782A090)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x1782A130)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__6_OFFSET UNITYSDK_OFFSET(0x1782A3D0)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__7_OFFSET UNITYSDK_OFFSET(0x1782A3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageController___c__DisplayClass30_0_TypeDefinitionIndex = 77339;

	class UIInterKnotV3PageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotV3PageController* __4__this; // 0x10
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__7; // 0x18
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__6; // 0x20
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> oldProgress; // 0x28
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> curProgress; // 0x34
		::System::Single curValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Single _DoExpAnimation_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _DoExpAnimation_b__1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__1_OFFSET))(this, v);
		}

		::System::Void _DoExpAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__2_OFFSET))(this);
		}

		::System::Single _DoExpAnimation_b__3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__3_OFFSET))(this);
		}

		::System::Void _DoExpAnimation_b__4(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__4_OFFSET))(this, v);
		}

		::System::Void _DoExpAnimation_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__5_OFFSET))(this);
		}

		::System::Single _DoExpAnimation_b__6()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__6_OFFSET))(this);
		}

		::System::Void _DoExpAnimation_b__7(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTROLLER___C__DISPLAYCLASS30_0__DOEXPANIMATION_B__7_OFFSET))(this, v);
		}
	};
}
