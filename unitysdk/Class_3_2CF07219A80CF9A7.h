#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class DynamicMaterialLoader; }
namespace RPG::GameCore { class SetDynamicMaterialLoadState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2CF07219A80CF9A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BC7350)
#define CLASS_3_2CF07219A80CF9A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BC7390)
#define CLASS_3_2CF07219A80CF9A7__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC7320)

inline static constexpr unsigned int Class_3_2CF07219A80CF9A7_TypeDefinitionIndex = 55594;

class Class_3_2CF07219A80CF9A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicMaterialLoadState*>
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>** StaticGet_KPGKNONGLCM()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2CF07219A80CF9A7_TypeDefinitionIndex)->GetStaticField(0x651F0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + CLASS_3_2CF07219A80CF9A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CF07219A80CF9A7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CF07219A80CF9A7_ONTASKBEGIN_OFFSET))(this);
	}
};
