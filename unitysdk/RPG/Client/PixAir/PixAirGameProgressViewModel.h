#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_17365F5FA0311FC9;
class Class_1_774B79B08DDA9E9C;
namespace RPG::Client::PixAir { class PixAirGameProgressNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xC3CE6F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xC3CE700)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CD270)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressViewModel_TypeDefinitionIndex = 73580;

	class PixAirGameProgressViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* _NodeViewModels_k__BackingField; // 0x20
		::Class_1_17365F5FA0311FC9* _GameFlowService; // 0x28
		::Class_1_774B79B08DDA9E9C* _WindowService; // 0x30
		::System::UInt32 CurNodeID; // 0x38
		::System::UInt32 CurAreaID; // 0x3C
		::System::Single Progress; // 0x40

		::System::Void _ctor(::Class_1_774B79B08DDA9E9C* a1, ::Class_1_17365F5FA0311FC9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_774B79B08DDA9E9C*, ::Class_1_17365F5FA0311FC9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
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
