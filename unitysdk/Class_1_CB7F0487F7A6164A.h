#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28D6F6163F0E0EBC.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigFeatureTarget; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CB7F0487F7A6164A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17D998C0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_41A8C39D5411E4A9_OFFSET UNITYSDK_OFFSET(0x17D991E0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_4CD1C228B7562F8C_OFFSET UNITYSDK_OFFSET(0x17D9A2B0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x17D9A480)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_9FC62B0F7CBD0B1D_OFFSET UNITYSDK_OFFSET(0x17D9A5A0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_A2F45BAF724C5BF5_OFFSET UNITYSDK_OFFSET(0x17D9A5B0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x17D996D0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_B7007E71FED3D9C2_OFFSET UNITYSDK_OFFSET(0x17D9A490)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x17D9A9A0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D99880)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_CE859053E352A1B7_OFFSET UNITYSDK_OFFSET(0x17D99C90)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0x17D9A4A0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x17D9A070)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_EF968487574EEFE6_OFFSET UNITYSDK_OFFSET(0x17D99DD0)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D9A470)
#define CLASS_1_CB7F0487F7A6164A_METHOD_1_F0BF6766FD7D9D8C_OFFSET UNITYSDK_OFFSET(0x17D999F0)
#define CLASS_1_CB7F0487F7A6164A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D99970)
#define CLASS_1_CB7F0487F7A6164A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D98DC0)
#define CLASS_1_CB7F0487F7A6164A__CTOR_OFFSET UNITYSDK_OFFSET(0x17D98D30)

inline static constexpr unsigned int Class_1_CB7F0487F7A6164A_TypeDefinitionIndex = 85882;

class Class_1_CB7F0487F7A6164A : public ::System::Object
{
public:
	static ::MoleMole::GameplayTag* StaticGet_Field_1_0()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB7F0487F7A6164A_TypeDefinitionIndex)->GetStaticField(0x3D900);
	}
	static ::MoleMole::ConfigFeatureTarget** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigFeatureTarget**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB7F0487F7A6164A_TypeDefinitionIndex)->GetStaticField(0x3D910);
	}
	::MoleMole::ConfigFeatureTarget* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_28D6F6163F0E0EBC, ::System::String*>* Field_1_5; // 0x28
	::MoleMole::Battle::Entity* Field_1_3; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::ConfigFeatureTarget* a1, ::MoleMole::Battle::Entity* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigFeatureTarget*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_1_41A8C39D5411E4A9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_41A8C39D5411E4A9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_F0BF6766FD7D9D8C()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_F0BF6766FD7D9D8C_OFFSET))(this);
	}

	::System::Boolean Method_1_CE859053E352A1B7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_CE859053E352A1B7_OFFSET))(this);
	}

	::System::Void Method_1_EF968487574EEFE6(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_EF968487574EEFE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_4CD1C228B7562F8C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_4CD1C228B7562F8C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B7007E71FED3D9C2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_B7007E71FED3D9C2_OFFSET))(this);
	}

	::System::Void Method_1_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_CF27EDB12528CE39_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Method_1_9FC62B0F7CBD0B1D()
	{
		return ((::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_9FC62B0F7CBD0B1D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_A2F45BAF724C5BF5()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_A2F45BAF724C5BF5_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB7F0487F7A6164A_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}
};
