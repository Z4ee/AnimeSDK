#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class DynamicMaterialLoader; }
namespace RPG::GameCore { class SetDynamicMaterialLoadState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2CF07219A80CF9A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AD3EF0)
#define CLASS_3_2CF07219A80CF9A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AD3F30)
#define CLASS_3_2CF07219A80CF9A7__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD3EC0)
#define CLASS_3_2CF07219A80CF9A7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AD42E0)

inline static constexpr unsigned int Class_3_2CF07219A80CF9A7_TypeDefinitionIndex = 51075;

class Class_3_2CF07219A80CF9A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicMaterialLoadState*>
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2CF07219A80CF9A7_TypeDefinitionIndex)->GetStaticField(0x147E0);
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CF07219A80CF9A7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
