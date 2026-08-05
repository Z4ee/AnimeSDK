#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_8FDF110BA93DB06A_Class_0_16E7307DCC43CB2C_82;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8FDF110BA93DB06A_METHOD_3_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x1477CE80)
#define CLASS_3_8FDF110BA93DB06A_METHOD_3_2F7FE94BA9E4AE62_OFFSET UNITYSDK_OFFSET(0x1477CF10)
#define CLASS_3_8FDF110BA93DB06A_METHOD_3_484C07E1CF62ADA1_OFFSET UNITYSDK_OFFSET(0x1477CE30)
#define CLASS_3_8FDF110BA93DB06A_METHOD_3_52B84B7405383DA2_OFFSET UNITYSDK_OFFSET(0x1477D2E0)
#define CLASS_3_8FDF110BA93DB06A_METHOD_3_637AD73D210A3956_OFFSET UNITYSDK_OFFSET(0x1477D1F0)
#define CLASS_3_8FDF110BA93DB06A__CTOR_OFFSET UNITYSDK_OFFSET(0x1477CDF0)

inline static constexpr unsigned int Class_3_8FDF110BA93DB06A_TypeDefinitionIndex = 91230;

class Class_3_8FDF110BA93DB06A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_8FDF110BA93DB06A*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_484C07E1CF62ADA1(::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>*))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_METHOD_3_484C07E1CF62ADA1_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_METHOD_3_10867B69EFBCA83E_OFFSET))(a1);
	}

	::System::Void Method_3_2F7FE94BA9E4AE62(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_METHOD_3_2F7FE94BA9E4AE62_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_52B84B7405383DA2(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_METHOD_3_52B84B7405383DA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_637AD73D210A3956(::MoleMole::Config::ProjectileTraitConfig a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::Class_3_8FDF110BA93DB06A_Class_0_16E7307DCC43CB2C_82* a4)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig, ::UnityEngine::Vector3, ::System::Action*, ::Class_3_8FDF110BA93DB06A_Class_0_16E7307DCC43CB2C_82*))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_METHOD_3_637AD73D210A3956_OFFSET))(this, a1, a2, a3, a4);
	}
};
