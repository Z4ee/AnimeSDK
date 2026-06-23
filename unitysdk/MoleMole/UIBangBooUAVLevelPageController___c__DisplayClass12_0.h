#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_3_48A3D3A34C52331D_46;
namespace MoleMole { class UIBangBooUAVLevelPageController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4AFB0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0x17A4AFC0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__1_OFFSET UNITYSDK_OFFSET(0x17A4B530)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController___c__DisplayClass12_0_TypeDefinitionIndex = 61527;

	class UIBangBooUAVLevelPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_3_48A3D3A34C52331D_46*>* __9__1; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* enhanceList; // 0x18
		::MoleMole::UIBangBooUAVLevelPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__0_OFFSET))(this, data);
		}

		::System::Void _OnStart_b__1(::Class_3_48A3D3A34C52331D_46* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_46*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSTART_B__1_OFFSET))(this, ret);
		}
	};
}
