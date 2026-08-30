#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AFC3C7A272BDF32C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB9C6D0)
#define CLASS_1_AFC3C7A272BDF32C_GET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1ABA0140)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_10626A8EF67FC79B_OFFSET UNITYSDK_OFFSET(0x1AB9FE00)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_11204FB96892C531_OFFSET UNITYSDK_OFFSET(0x1AB9FC00)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_2055E356167A6E24_OFFSET UNITYSDK_OFFSET(0x1AB9C9D0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_21CDF8CB708F194D_OFFSET UNITYSDK_OFFSET(0x1ABA0070)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1AB9E490)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_2821A73AAB77A2A0_OFFSET UNITYSDK_OFFSET(0x1AB9ED20)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_2F44624B7E169EF4_OFFSET UNITYSDK_OFFSET(0x1AB9DE70)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_413A6BC52928E53F_OFFSET UNITYSDK_OFFSET(0x1AB9CC80)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_41C5DCB68A2CA7FB_OFFSET UNITYSDK_OFFSET(0x1AB9F610)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_4375B0A9CF8C4554_OFFSET UNITYSDK_OFFSET(0x1AB9CB00)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_45EAB6EE994942F8_OFFSET UNITYSDK_OFFSET(0x1AB9C900)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_6275F121BDF44629_OFFSET UNITYSDK_OFFSET(0x1AB9E290)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0x1AB9D130)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_6E7BB34C4A33BA62_OFFSET UNITYSDK_OFFSET(0x1AB9CA40)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_790CBB7E237DE411_OFFSET UNITYSDK_OFFSET(0x1AB9E6A0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x1AB9E4F0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_836B825FBC821E0E_OFFSET UNITYSDK_OFFSET(0x1AB9FF40)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_847D0440C92A8CDE_OFFSET UNITYSDK_OFFSET(0x1AB9F850)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_8C7AA876B0540908_OFFSET UNITYSDK_OFFSET(0x1AB9DAB0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_96C1D26737F3F629_OFFSET UNITYSDK_OFFSET(0x1AB9EB20)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_9995BC60352EC353_OFFSET UNITYSDK_OFFSET(0x1AB9D7A0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_A1C737D89C779DCE_OFFSET UNITYSDK_OFFSET(0x1ABA0160)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_A68BE3EB6BB61429_OFFSET UNITYSDK_OFFSET(0x1AB9CB80)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_B66A9C30B6B70E7E_OFFSET UNITYSDK_OFFSET(0x1AB9E860)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_BEF654B58E223777_OFFSET UNITYSDK_OFFSET(0x1AB9E780)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_CA1E0FA1865267BB_OFFSET UNITYSDK_OFFSET(0x1AB9DCA0)
#define CLASS_1_AFC3C7A272BDF32C_METHOD_1_D20C9C3F34DA2DBE_OFFSET UNITYSDK_OFFSET(0x1AB9E7F0)
#define CLASS_1_AFC3C7A272BDF32C_SET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1ABA0150)
#define CLASS_1_AFC3C7A272BDF32C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABA0380)
#define CLASS_1_AFC3C7A272BDF32C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9C4B0)

inline static constexpr unsigned int Class_1_AFC3C7A272BDF32C_TypeDefinitionIndex = 60865;

class Class_1_AFC3C7A272BDF32C : public ::System::Object
{
public:
	static ::System::String** StaticGet_EFHOLEHGNGP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFC3C7A272BDF32C_TypeDefinitionIndex)->GetStaticField(0x60E10);
	}
	static ::System::Boolean* StaticGet_EIBLANLCEBH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFC3C7A272BDF32C_TypeDefinitionIndex)->GetStaticField(0x13EC0);
	}
	::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* CODPEMLMCAO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* IMCBHOPMLCI; // 0x18
	::RPG::GameCore::HoyoTag* CENNIMLCDIA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* PLKHAAOBCPC; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _PropEntityList_k__BackingField; // 0x30
	::RPG::GameCore::GameWorld* LMMOLOCONLH; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Matrix4x4>* JKCGMENFGAE; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JFCCIJHDKHJ; // 0x48
	::RPG::GameCore::CharacterVisibleReason IDOIOMAMBLB; // 0x50
	::System::Boolean CIPMPLAJDLP; // 0x51
	::System::Boolean ECBLJJJILDF; // 0x52

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropConfig* Method_1_45EAB6EE994942F8(::RPG::GameCore::PropRow* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::RPG::GameCore::PropConfig*(*)(::PVOID, ::RPG::GameCore::PropRow*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_45EAB6EE994942F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2055E356167A6E24(::RPG::GameCore::PropComponent* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_2055E356167A6E24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6E7BB34C4A33BA62(::RPG::GameCore::PropComponent* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_6E7BB34C4A33BA62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4375B0A9CF8C4554(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_4375B0A9CF8C4554_OFFSET))(this, a1);
	}

	::System::Void Method_1_A68BE3EB6BB61429(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_A68BE3EB6BB61429_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_413A6BC52928E53F(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::System::String* a3, ::UnityEngine::GameObject* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::RPG::Client::MapPropDef* a10, ::System::String* a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::RPG::GameCore::EntityClassifyType a13, ::System::Boolean a14, ::RPG::Client::OpenWorld::StreamingItemData* a15, ::System::Boolean a16)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::System::String*, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::RPG::Client::MapPropDef*, ::System::String*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_413A6BC52928E53F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_1_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9995BC60352EC353(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_9995BC60352EC353_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C7AA876B0540908(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_8C7AA876B0540908_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CA1E0FA1865267BB(::System::String* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_CA1E0FA1865267BB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_1_2F44624B7E169EF4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_2F44624B7E169EF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_790CBB7E237DE411(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_790CBB7E237DE411_OFFSET))(this, a1);
	}

	::System::Void Method_1_6275F121BDF44629(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_6275F121BDF44629_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BEF654B58E223777(::RPG::Client::MapProp* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_BEF654B58E223777_OFFSET))(this, a1);
	}

	::System::Void Method_1_D20C9C3F34DA2DBE(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_D20C9C3F34DA2DBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B66A9C30B6B70E7E(::RPG::GameCore::TeamType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_B66A9C30B6B70E7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96C1D26737F3F629(::RPG::GameCore::TeamType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_96C1D26737F3F629_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2821A73AAB77A2A0(::RPG::GameCore::CharacterVisibleReason a1, ::RPG::GameCore::HoyoTag* a2, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::RPG::GameCore::HoyoTag*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_2821A73AAB77A2A0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_41C5DCB68A2CA7FB(::RPG::GameCore::CharacterVisibleReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_41C5DCB68A2CA7FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_847D0440C92A8CDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_847D0440C92A8CDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_11204FB96892C531(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_11204FB96892C531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10626A8EF67FC79B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_10626A8EF67FC79B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_836B825FBC821E0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_836B825FBC821E0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_21CDF8CB708F194D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_21CDF8CB708F194D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_PropEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_GET_PROPENTITYLIST_OFFSET))(this);
	}

	::System::Void set_PropEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_SET_PROPENTITYLIST_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_A1C737D89C779DCE(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C_METHOD_1_A1C737D89C779DCE_OFFSET))(a1, a2);
	}
};
