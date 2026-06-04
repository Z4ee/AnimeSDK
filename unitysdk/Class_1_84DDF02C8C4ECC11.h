#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_84DDF02C8C4ECC11_METHOD_1_39689BD8F3E60ECF_OFFSET UNITYSDK_OFFSET(0xA890EC0)
#define CLASS_1_84DDF02C8C4ECC11_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA890C20)
#define CLASS_1_84DDF02C8C4ECC11_METHOD_1_F2A165FD9DCABEF5_OFFSET UNITYSDK_OFFSET(0xA890CC0)
#define CLASS_1_84DDF02C8C4ECC11_METHOD_1_F8BFB17B3DD6568D_OFFSET UNITYSDK_OFFSET(0xA890BC0)
#define CLASS_1_84DDF02C8C4ECC11_METHOD_1_FA3D6E45984D6807_OFFSET UNITYSDK_OFFSET(0xA890E30)
#define CLASS_1_84DDF02C8C4ECC11__CTOR_OFFSET UNITYSDK_OFFSET(0xA890FA0)

inline static constexpr unsigned int Class_1_84DDF02C8C4ECC11_TypeDefinitionIndex = 67327;

class Class_1_84DDF02C8C4ECC11 : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::RectTransform*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8BFB17B3DD6568D(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11_METHOD_1_F8BFB17B3DD6568D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_F2A165FD9DCABEF5(::System::String* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11_METHOD_1_F2A165FD9DCABEF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA3D6E45984D6807(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11_METHOD_1_FA3D6E45984D6807_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* Method_1_39689BD8F3E60ECF(::System::String* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84DDF02C8C4ECC11_METHOD_1_39689BD8F3E60ECF_OFFSET))(this, a1);
	}
};
