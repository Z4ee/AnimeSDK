#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSavedEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5752037E7846F67E_METHOD_1_44641DFE6D61562D_OFFSET UNITYSDK_OFFSET(0x17FEC480)
#define CLASS_1_5752037E7846F67E_METHOD_1_9802EC0F4B8318B3_OFFSET UNITYSDK_OFFSET(0x17FEC5E0)
#define CLASS_1_5752037E7846F67E__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEC690)

inline static constexpr unsigned int Class_1_5752037E7846F67E_TypeDefinitionIndex = 77067;

class Class_1_5752037E7846F67E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5752037E7846F67E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_44641DFE6D61562D(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5752037E7846F67E_METHOD_1_44641DFE6D61562D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_9802EC0F4B8318B3(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5752037E7846F67E_METHOD_1_9802EC0F4B8318B3_OFFSET))(this, a1, a2);
	}
};
