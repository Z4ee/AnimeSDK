#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD6C96CB8C168B19_METHOD_1_11E65074F3057FE0_OFFSET UNITYSDK_OFFSET(0x13369310)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_32430858A26EFDC4_OFFSET UNITYSDK_OFFSET(0x13369580)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_53D54D7564011497_OFFSET UNITYSDK_OFFSET(0x13369680)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_D323E239C12BCD26_OFFSET UNITYSDK_OFFSET(0x13369E90)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_E1DD8B28A740414D_OFFSET UNITYSDK_OFFSET(0x13369D90)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_EF68057CA19E8AFD_OFFSET UNITYSDK_OFFSET(0x13369530)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_F7727D8D7C86D0AF_OFFSET UNITYSDK_OFFSET(0x13369930)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_TypeDefinitionIndex = 46784;

class Class_1_FD6C96CB8C168B19 : public ::System::Object
{
public:
	static ::MoleMole::ConfigGalGameAvatarShow** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigGalGameAvatarShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD6C96CB8C168B19_TypeDefinitionIndex)->GetStaticField(0x2E700);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD6C96CB8C168B19_TypeDefinitionIndex)->GetStaticField(0x2E708);
	}

	static ::System::Void Method_1_11E65074F3057FE0(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_11E65074F3057FE0_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigGalGameAvatarShow* Method_1_EF68057CA19E8AFD()
	{
		return ((::MoleMole::ConfigGalGameAvatarShow*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_EF68057CA19E8AFD_OFFSET))();
	}

	static ::System::Void Method_1_32430858A26EFDC4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_32430858A26EFDC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::GalGameFacialSetting* Method_1_53D54D7564011497(::System::String* a1)
	{
		return ((::MoleMole::GalGameFacialSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_53D54D7564011497_OFFSET))(a1);
	}

	static ::System::Void Method_1_F7727D8D7C86D0AF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_F7727D8D7C86D0AF_OFFSET))(a1, a2);
	}

	static ::MoleMole::AvatarShowSetting* Method_1_E1DD8B28A740414D(::System::String* a1)
	{
		return ((::MoleMole::AvatarShowSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_E1DD8B28A740414D_OFFSET))(a1);
	}

	static ::MoleMole::UIAvatarCommonLightSetting* Method_1_D323E239C12BCD26()
	{
		return ((::MoleMole::UIAvatarCommonLightSetting*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_D323E239C12BCD26_OFFSET))();
	}
};
