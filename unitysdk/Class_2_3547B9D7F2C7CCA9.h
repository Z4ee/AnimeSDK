#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E05E7A6D9DE9138B.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_28E647CAD6B28FCC_OFFSET UNITYSDK_OFFSET(0x1281D5D0)
#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_3FC3290B14907015_OFFSET UNITYSDK_OFFSET(0x1281D1C0)
#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_510A9A0A57A734A8_OFFSET UNITYSDK_OFFSET(0x1281CF20)
#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_87E19CC4B739A03A_OFFSET UNITYSDK_OFFSET(0x1281CE70)
#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_C06E44FA9A3D2618_OFFSET UNITYSDK_OFFSET(0x1281D840)
#define CLASS_2_3547B9D7F2C7CCA9_METHOD_2_CF3FF89BC7293141_OFFSET UNITYSDK_OFFSET(0x1281D3D0)
#define CLASS_2_3547B9D7F2C7CCA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1281D7A0)

inline static constexpr unsigned int Class_2_3547B9D7F2C7CCA9_TypeDefinitionIndex = 55286;

class Class_2_3547B9D7F2C7CCA9 : public ::Class_1_E05E7A6D9DE9138B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87E19CC4B739A03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_87E19CC4B739A03A_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_510A9A0A57A734A8(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_510A9A0A57A734A8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_3FC3290B14907015(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_3FC3290B14907015_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_CF3FF89BC7293141(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_CF3FF89BC7293141_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_28E647CAD6B28FCC(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_28E647CAD6B28FCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C06E44FA9A3D2618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3547B9D7F2C7CCA9_METHOD_2_C06E44FA9A3D2618_OFFSET))(this);
	}
};
