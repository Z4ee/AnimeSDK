#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78305B09E07108A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA79E4E0)
#define CLASS_3_78305B09E07108A7_METHOD_3_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xA79E580)
#define CLASS_3_78305B09E07108A7_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xA79E530)
#define CLASS_3_78305B09E07108A7_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA79E520)
#define CLASS_3_78305B09E07108A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA79E9D0)
#define CLASS_3_78305B09E07108A7__CCTOR_OFFSET UNITYSDK_OFFSET(0xA79EA20)
#define CLASS_3_78305B09E07108A7__CTOR_OFFSET UNITYSDK_OFFSET(0xA79E4B0)
#define CLASS_3_78305B09E07108A7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA79EAB0)

inline static constexpr unsigned int Class_3_78305B09E07108A7_TypeDefinitionIndex = 51990;

class Class_3_78305B09E07108A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityVisible*>
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_3_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_78305B09E07108A7_TypeDefinitionIndex)->GetStaticField(0x6B3F0);
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

	::System::Void Method_3_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7_METHOD_3_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78305B09E07108A7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
