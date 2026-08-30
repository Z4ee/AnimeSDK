#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_47EB23CB5C4B2615_42;
class Class_1_91C9195F7AC754D8;
namespace RPG::Client::PixAir { class PixAirGameProgressNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1BCF92E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1BCF92F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF9120)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressViewModel_TypeDefinitionIndex = 78776;

	class PixAirGameProgressViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_91C9195F7AC754D8* _GameFlowService; // 0x20
		::Class_1_47EB23CB5C4B2615_42* _WindowService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* _NodeViewModels_k__BackingField; // 0x30
		::System::Single Progress; // 0x38
		::System::UInt32 CurAreaID; // 0x3C
		::System::UInt32 CurNodeID; // 0x40

		::System::Void _ctor(::Class_1_47EB23CB5C4B2615_42* a1, ::Class_1_91C9195F7AC754D8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_42*, ::Class_1_91C9195F7AC754D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* get_NodeViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_NodeViewModels(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET))(this, a1);
		}
	};
}
