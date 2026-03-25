#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_F3C6DC456A6F78EF_METHOD_1_142946B5AEEB511A_OFFSET UNITYSDK_OFFSET(0x10CAE990)
#define CLASS_1_F3C6DC456A6F78EF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10CAE8E0)
#define CLASS_1_F3C6DC456A6F78EF_METHOD_1_39689BD8F3E60ECF_OFFSET UNITYSDK_OFFSET(0x10CAEB90)
#define CLASS_1_F3C6DC456A6F78EF_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x10CAEB00)
#define CLASS_1_F3C6DC456A6F78EF_METHOD_1_F8BFB17B3DD6568D_OFFSET UNITYSDK_OFFSET(0x10CAE880)
#define CLASS_1_F3C6DC456A6F78EF__CTOR_OFFSET UNITYSDK_OFFSET(0x10CAEC80)

inline static constexpr unsigned int Class_1_F3C6DC456A6F78EF_TypeDefinitionIndex = 59019;

class Class_1_F3C6DC456A6F78EF : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::RectTransform*>* Field_1_2; // 0x18
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8BFB17B3DD6568D(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF_METHOD_1_F8BFB17B3DD6568D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_142946B5AEEB511A(::System::String* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF_METHOD_1_142946B5AEEB511A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* Method_1_39689BD8F3E60ECF(::System::String* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3C6DC456A6F78EF_METHOD_1_39689BD8F3E60ECF_OFFSET))(this, a1);
	}
};
