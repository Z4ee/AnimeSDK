#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }

#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_ISMATCH_OFFSET UNITYSDK_OFFSET(0x9901360)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_LISTENERAVATARID_OFFSET UNITYSDK_OFFSET(0x9901390)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_SOURCELISTENERID_OFFSET UNITYSDK_OFFSET(0x99013A0)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_SPEAKERAVATARID_OFFSET UNITYSDK_OFFSET(0x9901380)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_3C4F44036F654455_OFFSET UNITYSDK_OFFSET(0x9900480)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x9901290)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x9900FF0)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_SET_ISMATCH_OFFSET UNITYSDK_OFFSET(0x9901370)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040__CTOR_OFFSET UNITYSDK_OFFSET(0x9900380)

inline static constexpr unsigned int Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040_TypeDefinitionIndex = 62797;

class Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	::RPG::Client::AvatarVoiceArchiveEntry* Field_1_5; // 0x10
	::System::UInt32 _SpeakerAvatarID_k__BackingField; // 0x18
	::System::UInt32 _ListenerAvatarID_k__BackingField; // 0x1C
	::System::UInt32 _SourceListenerID_k__BackingField; // 0x20
	::System::Boolean _IsMatch_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::AvatarLinkRow* a1, ::RPG::GameCore::GenderType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarLinkRow*, ::RPG::GameCore::GenderType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_3C4F44036F654455()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_3C4F44036F654455_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_METHOD_1_6AFDC50424099C5A_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_ISMATCH_OFFSET))(this);
	}

	::System::Void set_IsMatch(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_SET_ISMATCH_OFFSET))(this, value);
	}

	::System::UInt32 get_SpeakerAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_SPEAKERAVATARID_OFFSET))(this);
	}

	::System::UInt32 get_ListenerAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_LISTENERAVATARID_OFFSET))(this);
	}

	::System::UInt32 get_SourceListenerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040_GET_SOURCELISTENERID_OFFSET))(this);
	}
};
