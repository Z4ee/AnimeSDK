#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_0BC942C41895B4DC_OFFSET UNITYSDK_OFFSET(0xDC245F0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_1E2C0B86BA2D02B7_OFFSET UNITYSDK_OFFSET(0xDC246A0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0xDC24740)
#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_D95160FA61EDB70B_OFFSET UNITYSDK_OFFSET(0xDC242E0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDC24890)
#define RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC24A00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelModelVfxPlayer_TypeDefinitionIndex = 77863;

	class ChimeraDuelModelVfxPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PEAKEMHLGCH; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* Method_5_D95160FA61EDB70B(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3, ::System::Nullable_1<::System::Single> a4, ::System::Nullable_1<::UnityEngine::Vector3> a5, ::System::String* a6, ::System::Nullable_1<::System::Single> a7)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_D95160FA61EDB70B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_5_0BC942C41895B4DC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_0BC942C41895B4DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_1E2C0B86BA2D02B7(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_1E2C0B86BA2D02B7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_95ADE8ED590C5559(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_METHOD_5_95ADE8ED590C5559_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELVFXPLAYER_ONDISABLE_OFFSET))(this);
		}
	};
}
