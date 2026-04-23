#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D96CF3F32F0BF24C_CLEAR_OFFSET UNITYSDK_OFFSET(0x9680100)
#define CLASS_1_D96CF3F32F0BF24C_METHOD_1_32A3DC7816419BBC_OFFSET UNITYSDK_OFFSET(0x9680360)
#define CLASS_1_D96CF3F32F0BF24C_METHOD_1_7D111DDD90066166_OFFSET UNITYSDK_OFFSET(0x9680870)
#define CLASS_1_D96CF3F32F0BF24C_METHOD_1_8131CE0B7175A4D7_OFFSET UNITYSDK_OFFSET(0x9680460)
#define CLASS_1_D96CF3F32F0BF24C_METHOD_1_A276E32D1EEAA9D9_OFFSET UNITYSDK_OFFSET(0x9680140)
#define CLASS_1_D96CF3F32F0BF24C_METHOD_1_B1203FFB9DD61890_OFFSET UNITYSDK_OFFSET(0x9680690)
#define CLASS_1_D96CF3F32F0BF24C__CTOR_OFFSET UNITYSDK_OFFSET(0x9681040)

inline static constexpr unsigned int Class_1_D96CF3F32F0BF24C_TypeDefinitionIndex = 70110;

class Class_1_D96CF3F32F0BF24C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_CLEAR_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::FixPoint>* Method_1_A276E32D1EEAA9D9(::System::UInt32 a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_METHOD_1_A276E32D1EEAA9D9_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_32A3DC7816419BBC(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_METHOD_1_32A3DC7816419BBC_OFFSET))(this, a1);
	}

	::System::String* Method_1_8131CE0B7175A4D7(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_METHOD_1_8131CE0B7175A4D7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_B1203FFB9DD61890(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_METHOD_1_B1203FFB9DD61890_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_7D111DDD90066166(::RPG::Client::TextID a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D96CF3F32F0BF24C_METHOD_1_7D111DDD90066166_OFFSET))(this, a1, a2, a3);
	}
};
