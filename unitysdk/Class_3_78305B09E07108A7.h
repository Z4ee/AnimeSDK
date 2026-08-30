#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78305B09E07108A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18922C10)
#define CLASS_3_78305B09E07108A7_METHOD_3_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x18922CB0)
#define CLASS_3_78305B09E07108A7_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x18922C60)
#define CLASS_3_78305B09E07108A7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18922C50)
#define CLASS_3_78305B09E07108A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18923150)
#define CLASS_3_78305B09E07108A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x189231A0)
#define CLASS_3_78305B09E07108A7__CTOR_OFFSET UNITYSDK_OFFSET(0x18922BE0)

inline static constexpr unsigned int Class_3_78305B09E07108A7_TypeDefinitionIndex = 56593;

class Class_3_78305B09E07108A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityVisible*>
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_FHNEIBMMEFH()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_78305B09E07108A7_TypeDefinitionIndex)->GetStaticField(0x11640);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityVisible*))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_METHOD_3_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_METHOD_3_1713F44301AA802F_OFFSET))(this);
	}
};
