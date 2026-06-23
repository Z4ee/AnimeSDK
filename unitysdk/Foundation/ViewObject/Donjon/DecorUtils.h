#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS_FOREACHDECOR_1_OFFSET UNITYSDK_OFFSET(0x10F1D6A0)
#define FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS_FOREACHDECOR_OFFSET UNITYSDK_OFFSET(0x10F1D640)
#define FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS__REALFOREACHDECOR_OFFSET UNITYSDK_OFFSET(0x10F1D100)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DecorUtils_TypeDefinitionIndex = 79183;

	class DecorUtils : public ::System::Object
	{
	public:
		static ::System::Void _RealForEachDecor(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject, ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>* action1, ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>* action2)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>*, ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS__REALFOREACHDECOR_OFFSET))(floorObject, action1, action2);
		}

		static ::System::Void ForEachDecor(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject, ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>* action)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS_FOREACHDECOR_OFFSET))(floorObject, action);
		}

		static ::System::Void ForEachDecor_1(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject, ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>* action)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DECORUTILS_FOREACHDECOR_1_OFFSET))(floorObject, action);
		}
	};
}
