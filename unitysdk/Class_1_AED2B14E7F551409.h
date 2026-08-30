#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockData; }
namespace RPG::GameCore { class FunctionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AED2B14E7F551409_METHOD_1_757172F0BF472799_OFFSET UNITYSDK_OFFSET(0x1A770590)
#define CLASS_1_AED2B14E7F551409_METHOD_1_A76A07E68FFF9CDC_1_OFFSET UNITYSDK_OFFSET(0x1A7704E0)
#define CLASS_1_AED2B14E7F551409_METHOD_1_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0x1A770430)
#define CLASS_1_AED2B14E7F551409_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1A7703E0)
#define CLASS_1_AED2B14E7F551409_METHOD_1_BF5C59025A13AA03_OFFSET UNITYSDK_OFFSET(0x1A770640)
#define CLASS_1_AED2B14E7F551409__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7706B0)

inline static constexpr unsigned int Class_1_AED2B14E7F551409_TypeDefinitionIndex = 68014;

class Class_1_AED2B14E7F551409 : public ::System::Object
{
public:
	::RPG::GameCore::FunctionConfigRow* POBMBPIIJND; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHINHANLDAL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* KLLKKBOFKEK; // 0x20

	::System::Void _ctor(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409_METHOD_1_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409_METHOD_1_A76A07E68FFF9CDC_1_OFFSET))(this);
	}

	::RPG::Client::FuncUnlockData* Method_1_757172F0BF472799()
	{
		return ((::RPG::Client::FuncUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409_METHOD_1_757172F0BF472799_OFFSET))(this);
	}

	static ::Class_1_AED2B14E7F551409* Method_1_BF5C59025A13AA03(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::Class_1_AED2B14E7F551409*(*)(::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_AED2B14E7F551409_METHOD_1_BF5C59025A13AA03_OFFSET))(a1);
	}
};
