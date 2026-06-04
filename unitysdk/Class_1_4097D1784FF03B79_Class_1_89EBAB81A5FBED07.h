#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class ColorGradingMaskWhitelist_StoryCharacter; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_EFFECTSET_OFFSET UNITYSDK_OFFSET(0x141B9900)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x141B98E0)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141B9910)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_METHOD_1_E829D9BB5BBBF9CB_OFFSET UNITYSDK_OFFSET(0x141B9950)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x141B9930)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x141B98F0)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x141B9920)
#define CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07__CTOR_OFFSET UNITYSDK_OFFSET(0x141B6EA0)

inline static constexpr unsigned int Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07_TypeDefinitionIndex = 56741;

class Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07 : public ::System::Object
{
public:
	::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _EffectSet_k__BackingField; // 0x18
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x20
	::System::Single _FadeProgress_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_SET_ENTITY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* get_EffectSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_EFFECTSET_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_E829D9BB5BBBF9CB(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_CLASS_1_89EBAB81A5FBED07_METHOD_1_E829D9BB5BBBF9CB_OFFSET))(this, a1);
	}
};
