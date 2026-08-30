#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DBD884B6630BACC3_EyeTransform;
namespace RPG::Client { class EmoEyeCtrl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DBD884B6630BACC3_METHOD_1_2320670892182313_OFFSET UNITYSDK_OFFSET(0x1586F850)
#define CLASS_1_DBD884B6630BACC3_METHOD_1_ADEA865E2111F5E4_OFFSET UNITYSDK_OFFSET(0x1586EFE0)
#define CLASS_1_DBD884B6630BACC3_METHOD_1_C4ABCD49F1ACDCF0_OFFSET UNITYSDK_OFFSET(0x1586EE70)

inline static constexpr unsigned int Class_1_DBD884B6630BACC3_TypeDefinitionIndex = 60191;

class Class_1_DBD884B6630BACC3 : public ::System::Object
{
public:
	static ::System::Void Method_1_C4ABCD49F1ACDCF0(::RPG::GameCore::NPCBodySize a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::NPCBodySize, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_DBD884B6630BACC3_METHOD_1_C4ABCD49F1ACDCF0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_ADEA865E2111F5E4(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::RPG::Client::EmoEyeCtrl* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::RPG::Client::EmoEyeCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_DBD884B6630BACC3_METHOD_1_ADEA865E2111F5E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2320670892182313(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::System::Collections::Generic::List_1<::Class_1_DBD884B6630BACC3_EyeTransform*>* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::System::Collections::Generic::List_1<::Class_1_DBD884B6630BACC3_EyeTransform*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBD884B6630BACC3_METHOD_1_2320670892182313_OFFSET))(a1, a2, a3);
	}
};
