#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F5E0F040DC0991EB_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x15B6DE30)
#define CLASS_1_F5E0F040DC0991EB_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x15B6DD40)
#define CLASS_1_F5E0F040DC0991EB_METHOD_1_71CC7747C88D1D42_OFFSET UNITYSDK_OFFSET(0x15B6E050)
#define CLASS_1_F5E0F040DC0991EB_METHOD_1_75ED2DC717AA03A6_OFFSET UNITYSDK_OFFSET(0x15B6E200)
#define CLASS_1_F5E0F040DC0991EB_METHOD_1_CF56FEA085C38DB8_OFFSET UNITYSDK_OFFSET(0x15B6E250)

inline static constexpr unsigned int Class_1_F5E0F040DC0991EB_TypeDefinitionIndex = 80582;

class Class_1_F5E0F040DC0991EB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIGachaPortrait** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIGachaPortrait**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5E0F040DC0991EB_TypeDefinitionIndex)->GetStaticField(0x493C0);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigUIGachaRoleConfig* Method_1_71CC7747C88D1D42(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_METHOD_1_71CC7747C88D1D42_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::ConfigUIGachaPortrait* Method_1_75ED2DC717AA03A6()
	{
		return ((::MoleMole::Config::ConfigUIGachaPortrait*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_METHOD_1_75ED2DC717AA03A6_OFFSET))();
	}

	static ::MoleMole::Config::ConfigUIPortraitItem* Method_1_CF56FEA085C38DB8(::System::String* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_METHOD_1_CF56FEA085C38DB8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
