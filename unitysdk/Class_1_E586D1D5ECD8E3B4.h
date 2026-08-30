#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_0F619134FBABAEE6_OFFSET UNITYSDK_OFFSET(0x16089850)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_17AFA59DECAAAB73_OFFSET UNITYSDK_OFFSET(0x16088F60)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_53B4F437767D44BA_OFFSET UNITYSDK_OFFSET(0x160892A0)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_60CB671F191DF7EA_OFFSET UNITYSDK_OFFSET(0x16089D80)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x160893F0)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_9D0D5BB6017CD394_OFFSET UNITYSDK_OFFSET(0x160894A0)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_B121ED1F69668289_OFFSET UNITYSDK_OFFSET(0x16089930)
#define CLASS_1_E586D1D5ECD8E3B4_METHOD_1_B190F8BB00264010_OFFSET UNITYSDK_OFFSET(0x16089690)

inline static constexpr unsigned int Class_1_E586D1D5ECD8E3B4_TypeDefinitionIndex = 57364;

class Class_1_E586D1D5ECD8E3B4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>** StaticGet_CIMCIDALGGF()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E586D1D5ECD8E3B4_TypeDefinitionIndex)->GetStaticField(0x25600);
	}

	static ::System::Void Method_1_17AFA59DECAAAB73(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_17AFA59DECAAAB73_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D0D5BB6017CD394(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_9D0D5BB6017CD394_OFFSET))(a1);
	}

	static ::System::Void Method_1_B190F8BB00264010(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_B190F8BB00264010_OFFSET))(a1);
	}

	static ::System::Void Method_1_0F619134FBABAEE6(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_0F619134FBABAEE6_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_B121ED1F69668289(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_B121ED1F69668289_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* Method_1_60CB671F191DF7EA(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_60CB671F191DF7EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_73DD48D58191807C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_53B4F437767D44BA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E586D1D5ECD8E3B4_METHOD_1_53B4F437767D44BA_OFFSET))(a1);
	}
};
