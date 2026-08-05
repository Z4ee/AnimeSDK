#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITape3DModelController; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E1CF10)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1CF50)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__FILTERCENTERTAPE_B__54_0_OFFSET UNITYSDK_OFFSET(0x11E1CF60)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c_TypeDefinitionIndex = 60813;

	class UITapesGroup3DModelController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITapesGroup3DModelController___c** StaticGet___9()
		{
			return (::MoleMole::UITapesGroup3DModelController___c**)Il2CppClass::FromTypeDefinitionIndex(UITapesGroup3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3A910);
		}
		static ::System::Comparison_1<::MoleMole::UITape3DModelController*>** StaticGet___9__54_0()
		{
			return (::System::Comparison_1<::MoleMole::UITape3DModelController*>**)Il2CppClass::FromTypeDefinitionIndex(UITapesGroup3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3A918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FilterCenterTape_b__54_0(::MoleMole::UITape3DModelController* a, ::MoleMole::UITape3DModelController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::MoleMole::UITape3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__FILTERCENTERTAPE_B__54_0_OFFSET))(this, a, b);
		}
	};
}
