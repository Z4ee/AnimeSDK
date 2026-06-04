#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_413D5A0FF338BAB8_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13B17320)
#define CLASS_1_413D5A0FF338BAB8_GET_VALUEPAYLOADS_OFFSET UNITYSDK_OFFSET(0x13B17330)
#define CLASS_1_413D5A0FF338BAB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13B17310)

inline static constexpr unsigned int Class_1_413D5A0FF338BAB8_TypeDefinitionIndex = 71826;

class Class_1_413D5A0FF338BAB8 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _ValuePayloads_k__BackingField; // 0x10
	::RPG::GameCore::PixAirEventType Field_1_1; // 0x18
	::System::Int32 _SenderRuntimeID_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::PixAirEventType a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_413D5A0FF338BAB8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_SenderRuntimeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413D5A0FF338BAB8_GET_SENDERRUNTIMEID_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_ValuePayloads()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413D5A0FF338BAB8_GET_VALUEPAYLOADS_OFFSET))(this);
	}
};
