#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D17955143A7C521B_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x16267980)
#define CLASS_1_D17955143A7C521B_METHOD_1_60EF1E2939F0029A_OFFSET UNITYSDK_OFFSET(0x16267E00)
#define CLASS_1_D17955143A7C521B_METHOD_1_70B1EFD392409545_OFFSET UNITYSDK_OFFSET(0x162685C0)
#define CLASS_1_D17955143A7C521B_METHOD_1_9E8C8E82893C2FE8_OFFSET UNITYSDK_OFFSET(0x162684B0)
#define CLASS_1_D17955143A7C521B_METHOD_1_AB782E7A80A16168_OFFSET UNITYSDK_OFFSET(0x16267CE0)
#define CLASS_1_D17955143A7C521B_METHOD_1_FE9F71632EABD97B_OFFSET UNITYSDK_OFFSET(0x16267B90)
#define CLASS_1_D17955143A7C521B__CCTOR_OFFSET UNITYSDK_OFFSET(0x162678E0)

inline static constexpr unsigned int Class_1_D17955143A7C521B_TypeDefinitionIndex = 61880;

class Class_1_D17955143A7C521B : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAvatarLayoutCameraMisc** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigAvatarLayoutCameraMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17955143A7C521B_TypeDefinitionIndex)->GetStaticField(0x3B860);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AvatarLayoutCameraConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AvatarLayoutCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17955143A7C521B_TypeDefinitionIndex)->GetStaticField(0x3B868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Cameras::AvatarLayoutCameraConfig* Method_1_FE9F71632EABD97B(::System::String* a1)
	{
		return ((::MoleMole::Cameras::AvatarLayoutCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_FE9F71632EABD97B_OFFSET))(a1);
	}

	static ::System::Void Method_1_AB782E7A80A16168(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_AB782E7A80A16168_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E8C8E82893C2FE8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_9E8C8E82893C2FE8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_60EF1E2939F0029A(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_60EF1E2939F0029A_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigAvatarLayoutCameraMisc* Method_1_70B1EFD392409545()
	{
		return ((::MoleMole::Config::ConfigAvatarLayoutCameraMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_METHOD_1_70B1EFD392409545_OFFSET))();
	}
};
