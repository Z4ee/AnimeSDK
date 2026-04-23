#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C321B1CDFAC76C87_EyeTransform;
namespace RPG::Client { class EmoEyeCtrl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C321B1CDFAC76C87_METHOD_1_D15B8ADF93E2F6FA_OFFSET UNITYSDK_OFFSET(0x932DC80)
#define CLASS_1_C321B1CDFAC76C87_METHOD_1_D28F3EA775FE03DB_OFFSET UNITYSDK_OFFSET(0x932D480)
#define CLASS_1_C321B1CDFAC76C87_METHOD_1_D73E40BF9F3BF21D_OFFSET UNITYSDK_OFFSET(0x932D380)

inline static constexpr unsigned int Class_1_C321B1CDFAC76C87_TypeDefinitionIndex = 55404;

class Class_1_C321B1CDFAC76C87 : public ::System::Object
{
public:
	static ::System::Void Method_1_D73E40BF9F3BF21D(::RPG::GameCore::NPCBodySize a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::NPCBodySize, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C321B1CDFAC76C87_METHOD_1_D73E40BF9F3BF21D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D28F3EA775FE03DB(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::RPG::Client::EmoEyeCtrl* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::RPG::Client::EmoEyeCtrl*))((::PBYTE)hIl2Cpp + CLASS_1_C321B1CDFAC76C87_METHOD_1_D28F3EA775FE03DB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D15B8ADF93E2F6FA(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::System::Collections::Generic::List_1<::Class_1_C321B1CDFAC76C87_EyeTransform*>* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::System::Collections::Generic::List_1<::Class_1_C321B1CDFAC76C87_EyeTransform*>*))((::PBYTE)hIl2Cpp + CLASS_1_C321B1CDFAC76C87_METHOD_1_D15B8ADF93E2F6FA_OFFSET))(a1, a2, a3);
	}
};
