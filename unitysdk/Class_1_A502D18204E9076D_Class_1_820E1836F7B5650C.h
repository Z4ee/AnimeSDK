#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A511EC341C76F1D;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A502D18204E9076D_CLASS_1_820E1836F7B5650C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF8FD0)

inline static constexpr unsigned int Class_1_A502D18204E9076D_Class_1_820E1836F7B5650C_TypeDefinitionIndex = 66730;

class Class_1_A502D18204E9076D_Class_1_820E1836F7B5650C : public ::System::Object
{
public:
	::RPG::Client::IAvatarComparer* NFPPDEOJACA; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* GNFFGBJGFPI; // 0x18
	::Class_1_0A511EC341C76F1D* KPLENGFGHHG; // 0x20
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* FJHJLBJMKNA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A502D18204E9076D_CLASS_1_820E1836F7B5650C__CTOR_OFFSET))(this);
	}
};
