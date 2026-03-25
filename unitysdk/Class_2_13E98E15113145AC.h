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

#define CLASS_2_13E98E15113145AC_METHOD_2_510A9A0A57A734A8_OFFSET UNITYSDK_OFFSET(0x8A7FDD0)
#define CLASS_2_13E98E15113145AC_METHOD_2_87E19CC4B739A03A_OFFSET UNITYSDK_OFFSET(0x8A7FD20)
#define CLASS_2_13E98E15113145AC_METHOD_2_94F138B2BFF6914C_OFFSET UNITYSDK_OFFSET(0x8A80070)
#define CLASS_2_13E98E15113145AC_METHOD_2_C06E44FA9A3D2618_OFFSET UNITYSDK_OFFSET(0x8A80740)
#define CLASS_2_13E98E15113145AC_METHOD_2_CF3FF89BC7293141_OFFSET UNITYSDK_OFFSET(0x8A802A0)
#define CLASS_2_13E98E15113145AC_METHOD_2_D3B838232B4C6E95_OFFSET UNITYSDK_OFFSET(0x8A804A0)
#define CLASS_2_13E98E15113145AC__CTOR_OFFSET UNITYSDK_OFFSET(0x8A806A0)

inline static constexpr unsigned int Class_2_13E98E15113145AC_TypeDefinitionIndex = 48537;

class Class_2_13E98E15113145AC : public ::Class_1_E05E7A6D9DE9138B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87E19CC4B739A03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_87E19CC4B739A03A_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_510A9A0A57A734A8(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_510A9A0A57A734A8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_94F138B2BFF6914C(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_94F138B2BFF6914C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_CF3FF89BC7293141(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_CF3FF89BC7293141_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D3B838232B4C6E95(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_D3B838232B4C6E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C06E44FA9A3D2618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13E98E15113145AC_METHOD_2_C06E44FA9A3D2618_OFFSET))(this);
	}
};
