#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1501;
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD63F550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD63F5A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftLoadingControl_TypeDefinitionIndex = 79974;

	class MechCraftLoadingControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1501*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1501*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1501*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTLOADINGCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
