#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::GameCore { class SetComponentAssetLoadState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6E5B2D66843DE500_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156BA9B0)
#define CLASS_3_6E5B2D66843DE500_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156BA9F0)
#define CLASS_3_6E5B2D66843DE500__CTOR_OFFSET UNITYSDK_OFFSET(0x156BA980)

inline static constexpr unsigned int Class_3_6E5B2D66843DE500_TypeDefinitionIndex = 55573;

class Class_3_6E5B2D66843DE500 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetComponentAssetLoadState*>
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::ComponentAssetLoader*>** StaticGet_KPGKNONGLCM()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::ComponentAssetLoader*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6E5B2D66843DE500_TypeDefinitionIndex)->GetStaticField(0x247A0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComponentAssetLoadState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComponentAssetLoadState*))((::PBYTE)hIl2Cpp + CLASS_3_6E5B2D66843DE500__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E5B2D66843DE500_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E5B2D66843DE500_ONTASKBEGIN_OFFSET))(this);
	}
};
