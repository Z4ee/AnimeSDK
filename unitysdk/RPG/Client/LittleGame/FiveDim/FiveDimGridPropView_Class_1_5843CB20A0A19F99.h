#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView_Class_1_6020EABE4EF866AD; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_5843CB20A0A19F99_CLEAR_OFFSET UNITYSDK_OFFSET(0x189FB290)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_5843CB20A0A19F99__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB3D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView_Class_1_5843CB20A0A19F99_TypeDefinitionIndex = 73234;

	class FiveDimGridPropView_Class_1_5843CB20A0A19F99 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_0; // 0x10
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::FiveDimView_Class_1_6020EABE4EF866AD*>*>* Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_5843CB20A0A19F99__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_5843CB20A0A19F99_CLEAR_OFFSET))(this);
		}
	};
}
