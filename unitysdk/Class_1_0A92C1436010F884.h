#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_15;
class Class_1_9CA228C8ABDBE29A;
class Class_1_E7C4009BCC22497A_16;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0A92C1436010F884_METHOD_1_2B3CCEDE81EBCBEE_OFFSET UNITYSDK_OFFSET(0x11362AE0)
#define CLASS_1_0A92C1436010F884_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x11362970)
#define CLASS_1_0A92C1436010F884_METHOD_1_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x11362530)
#define CLASS_1_0A92C1436010F884_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x11361C20)
#define CLASS_1_0A92C1436010F884_METHOD_1_7036D44519B33947_OFFSET UNITYSDK_OFFSET(0x11362AD0)
#define CLASS_1_0A92C1436010F884_METHOD_1_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0x11362100)
#define CLASS_1_0A92C1436010F884_METHOD_1_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x11362010)
#define CLASS_1_0A92C1436010F884__CTOR_OFFSET UNITYSDK_OFFSET(0x11362AF0)

inline static constexpr unsigned int Class_1_0A92C1436010F884_TypeDefinitionIndex = 51952;

class Class_1_0A92C1436010F884 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_E7C4009BCC22497A_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_16*))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8458C1526636349(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_352A8B3482C80E7D_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_15*))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_1_76C14174E094F341(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_76C14174E094F341_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CFA30FA85BD5218(::Class_1_9CA228C8ABDBE29A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CA228C8ABDBE29A*))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* Method_1_7036D44519B33947()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_7036D44519B33947_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* Method_1_2B3CCEDE81EBCBEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A92C1436010F884_METHOD_1_2B3CCEDE81EBCBEE_OFFSET))(this);
	}
};
