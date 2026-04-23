#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

class Class_1_321DAC1151B4F640;
namespace RPG::Client { template <typename T> class SimpleLRU_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9625D463385089F2_METHOD_1_2266EAC1705D39C5_OFFSET UNITYSDK_OFFSET(0xEC9B1E0)
#define CLASS_1_9625D463385089F2_METHOD_1_752A54513BCAB8D2_OFFSET UNITYSDK_OFFSET(0xEC9B0F0)
#define CLASS_1_9625D463385089F2_METHOD_1_A032A57710D8E50C_OFFSET UNITYSDK_OFFSET(0xEC9ACF0)
#define CLASS_1_9625D463385089F2_METHOD_1_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0xEC9B480)
#define CLASS_1_9625D463385089F2_METHOD_1_BCBFDD8957F4AF33_OFFSET UNITYSDK_OFFSET(0xEC9B020)
#define CLASS_1_9625D463385089F2_METHOD_1_CD054ADA8D27B4D4_OFFSET UNITYSDK_OFFSET(0xEC9B590)
#define CLASS_1_9625D463385089F2_METHOD_1_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0xEC9B6A0)
#define CLASS_1_9625D463385089F2__CTOR_OFFSET UNITYSDK_OFFSET(0xEC9AC40)

inline static constexpr unsigned int Class_1_9625D463385089F2_TypeDefinitionIndex = 67399;

class Class_1_9625D463385089F2 : public ::System::Object
{
public:
	::RPG::Client::SimpleLRU_1<::Class_1_321DAC1151B4F640*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_321DAC1151B4F640*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2__CTOR_OFFSET))(this, a1);
	}

	::Class_1_321DAC1151B4F640* Method_1_A032A57710D8E50C(::RPG::Client::ViewCacheType a1, ::System::String* a2)
	{
		return ((::Class_1_321DAC1151B4F640*(*)(::PVOID, ::RPG::Client::ViewCacheType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_A032A57710D8E50C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCBFDD8957F4AF33(::RPG::Client::ViewCacheType a1, ::Class_1_321DAC1151B4F640* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ViewCacheType, ::Class_1_321DAC1151B4F640*))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_BCBFDD8957F4AF33_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2266EAC1705D39C5(::RPG::Client::ViewCacheType a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ViewCacheType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_2266EAC1705D39C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_1_CD054ADA8D27B4D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_CD054ADA8D27B4D4_OFFSET))(this);
	}

	::System::Void Method_1_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_1_752A54513BCAB8D2(::Class_1_321DAC1151B4F640* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_321DAC1151B4F640*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9625D463385089F2_METHOD_1_752A54513BCAB8D2_OFFSET))(this, a1, a2);
	}
};
