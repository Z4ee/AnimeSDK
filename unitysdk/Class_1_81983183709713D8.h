#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelGroupEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_81983183709713D8_METHOD_1_9904EA85C275F5A4_OFFSET UNITYSDK_OFFSET(0x13F0C4A0)
#define CLASS_1_81983183709713D8_METHOD_1_D56383B8731DF442_OFFSET UNITYSDK_OFFSET(0x13F0C5E0)
#define CLASS_1_81983183709713D8__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0C6A0)

inline static constexpr unsigned int Class_1_81983183709713D8_TypeDefinitionIndex = 77035;

class Class_1_81983183709713D8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81983183709713D8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_9904EA85C275F5A4(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_81983183709713D8_METHOD_1_9904EA85C275F5A4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_D56383B8731DF442(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_81983183709713D8_METHOD_1_D56383B8731DF442_OFFSET))(this, a1, a2);
	}
};
