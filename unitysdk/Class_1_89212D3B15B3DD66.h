#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_89212D3B15B3DD66_METHOD_1_1676EF709A8D0329_OFFSET UNITYSDK_OFFSET(0xB5D2280)
#define CLASS_1_89212D3B15B3DD66__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D40B0)

inline static constexpr unsigned int Class_1_89212D3B15B3DD66_TypeDefinitionIndex = 79695;

class Class_1_89212D3B15B3DD66 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89212D3B15B3DD66__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Method_1_1676EF709A8D0329(::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* a1)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*))((::PBYTE)hIl2Cpp + CLASS_1_89212D3B15B3DD66_METHOD_1_1676EF709A8D0329_OFFSET))(this, a1);
	}
};
