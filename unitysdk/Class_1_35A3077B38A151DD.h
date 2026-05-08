#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35A3077B38A151DD_METHOD_1_365D788DE9F4AEF1_OFFSET UNITYSDK_OFFSET(0x1284FAA0)
#define CLASS_1_35A3077B38A151DD_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1284F870)
#define CLASS_1_35A3077B38A151DD_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x1284FDA0)
#define CLASS_1_35A3077B38A151DD_METHOD_1_885835DE88BDB17E_OFFSET UNITYSDK_OFFSET(0x1284FD90)
#define CLASS_1_35A3077B38A151DD_METHOD_1_E4E8897F3C66CB55_OFFSET UNITYSDK_OFFSET(0x1284FA90)

inline static constexpr unsigned int Class_1_35A3077B38A151DD_TypeDefinitionIndex = 57013;

class Class_1_35A3077B38A151DD : public ::System::Object
{
public:
	static ::MoleMole::Config::SkillTypeToAttackTagsConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::SkillTypeToAttackTagsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35A3077B38A151DD_TypeDefinitionIndex)->GetStaticField(0x39AB0);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::SkillTypeToAttackTagsConfig* Method_1_E4E8897F3C66CB55()
	{
		return ((::MoleMole::Config::SkillTypeToAttackTagsConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_METHOD_1_E4E8897F3C66CB55_OFFSET))();
	}

	static ::System::Boolean Method_1_365D788DE9F4AEF1(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::Config::EntitySkillType& a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::EntitySkillType&))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_METHOD_1_365D788DE9F4AEF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_885835DE88BDB17E(::MoleMole::Config::SkillTypeToAttackTagsConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_METHOD_1_885835DE88BDB17E_OFFSET))(a1);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
