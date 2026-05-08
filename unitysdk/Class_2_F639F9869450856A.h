#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F639F9869450856A_Class_0_16E7307DCC43CB2C_16;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F639F9869450856A_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x14CA1ED0)
#define CLASS_2_F639F9869450856A_METHOD_2_2F7FE94BA9E4AE62_OFFSET UNITYSDK_OFFSET(0x14CA1BF0)
#define CLASS_2_F639F9869450856A_METHOD_2_484C07E1CF62ADA1_OFFSET UNITYSDK_OFFSET(0x14CA17E0)
#define CLASS_2_F639F9869450856A_METHOD_2_52B84B7405383DA2_OFFSET UNITYSDK_OFFSET(0x14CA1920)
#define CLASS_2_F639F9869450856A_METHOD_2_69894F206FA3DF5D_OFFSET UNITYSDK_OFFSET(0x14CA1830)
#define CLASS_2_F639F9869450856A__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA17D0)

inline static constexpr unsigned int Class_2_F639F9869450856A_TypeDefinitionIndex = 42042;

class Class_2_F639F9869450856A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_F639F9869450856A*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_484C07E1CF62ADA1(::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>*))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_METHOD_2_484C07E1CF62ADA1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_69894F206FA3DF5D(::MoleMole::Config::ProjectileTraitConfig a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::Class_2_F639F9869450856A_Class_0_16E7307DCC43CB2C_16* a4)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig, ::UnityEngine::Vector3, ::System::Action*, ::Class_2_F639F9869450856A_Class_0_16E7307DCC43CB2C_16*))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_METHOD_2_69894F206FA3DF5D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_52B84B7405383DA2(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_METHOD_2_52B84B7405383DA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2F7FE94BA9E4AE62(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_METHOD_2_2F7FE94BA9E4AE62_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_2_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_METHOD_2_10867B69EFBCA83E_OFFSET))(a1);
	}
};
