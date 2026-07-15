#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_973AEE2294153826;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x19D637D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0x19D637F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_READLAYER_OFFSET UNITYSDK_OFFSET(0x19D639F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x19D637E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_STORELAYER_OFFSET UNITYSDK_OFFSET(0x19D63930)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D63B20)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPolishLayer_TypeDefinitionIndex = 47120;

	class WhiteBoxPolishLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _itemCount; // 0x18
		::System::String* _serializedLayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_SET_ITEMCOUNT_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void StoreLayer(::Class_1_973AEE2294153826* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973AEE2294153826*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_STORELAYER_OFFSET))(this, a1);
		}

		::Class_1_973AEE2294153826* ReadLayer()
		{
			return ((::Class_1_973AEE2294153826*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_READLAYER_OFFSET))(this);
		}
	};
}
