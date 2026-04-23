#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleTransitionInfoConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92E3E110E38400D6_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xE654F10)
#define CLASS_1_92E3E110E38400D6__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6550C0)
#define CLASS_1_92E3E110E38400D6__CTOR_OFFSET UNITYSDK_OFFSET(0xE654F40)

inline static constexpr unsigned int Class_1_92E3E110E38400D6_TypeDefinitionIndex = 52783;

class Class_1_92E3E110E38400D6 : public ::System::Object
{
public:
	static ::Class_1_92E3E110E38400D6** StaticGet__Empty_k__BackingField()
	{
		return (::Class_1_92E3E110E38400D6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92E3E110E38400D6_TypeDefinitionIndex)->GetStaticField(0x7460);
	}
	::RPG::GameCore::FreeStyleTransitionInfoConfig* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>* Field_1_9; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimEventConfig*>*>* Field_1_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* Field_1_4; // 0x48
	::System::Single Field_1_3; // 0x50
	::System::UInt32 Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E3E110E38400D6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92E3E110E38400D6__CCTOR_OFFSET))();
	}

	static ::Class_1_92E3E110E38400D6* get_Empty()
	{
		return ((::Class_1_92E3E110E38400D6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_92E3E110E38400D6_GET_EMPTY_OFFSET))();
	}
};
