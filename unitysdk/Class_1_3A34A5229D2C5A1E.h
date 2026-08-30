#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

class Class_1_321DAC1151B4F640;
namespace RPG::Client { template <typename T> class SimpleLRU_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_0A5288432D0397AA_OFFSET UNITYSDK_OFFSET(0x19BCA940)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_2266EAC1705D39C5_OFFSET UNITYSDK_OFFSET(0x19BCAB80)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_2F381734DBBAB430_OFFSET UNITYSDK_OFFSET(0x19BCADF0)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_519BDF7FF3334D1A_OFFSET UNITYSDK_OFFSET(0x19BCA620)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_752A54513BCAB8D2_OFFSET UNITYSDK_OFFSET(0x19BCAA90)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_CD054ADA8D27B4D4_OFFSET UNITYSDK_OFFSET(0x19BCAEF0)
#define CLASS_1_3A34A5229D2C5A1E_METHOD_1_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x19BCB010)
#define CLASS_1_3A34A5229D2C5A1E__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCA570)

inline static constexpr unsigned int Class_1_3A34A5229D2C5A1E_TypeDefinitionIndex = 73097;

class Class_1_3A34A5229D2C5A1E : public ::System::Object
{
public:
	::RPG::Client::SimpleLRU_1<::Class_1_321DAC1151B4F640*>* DINIBPLLNNG; // 0x10
	::System::Collections::Generic::List_1<::Class_1_321DAC1151B4F640*>* EFOFFBLGOCB; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E__CTOR_OFFSET))(this, a1);
	}

	::Class_1_321DAC1151B4F640* Method_1_519BDF7FF3334D1A(::RPG::Client::ViewCacheType a1, ::System::String* a2)
	{
		return ((::Class_1_321DAC1151B4F640*(*)(::PVOID, ::RPG::Client::ViewCacheType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_519BDF7FF3334D1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A5288432D0397AA(::RPG::Client::ViewCacheType a1, ::Class_1_321DAC1151B4F640* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ViewCacheType, ::Class_1_321DAC1151B4F640*))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_0A5288432D0397AA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2266EAC1705D39C5(::RPG::Client::ViewCacheType a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ViewCacheType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_2266EAC1705D39C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F381734DBBAB430()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_2F381734DBBAB430_OFFSET))(this);
	}

	::System::Void Method_1_CD054ADA8D27B4D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_CD054ADA8D27B4D4_OFFSET))(this);
	}

	::System::Void Method_1_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_D632BCCC272D40EA_OFFSET))(this);
	}

	::System::Void Method_1_752A54513BCAB8D2(::Class_1_321DAC1151B4F640* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_321DAC1151B4F640*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3A34A5229D2C5A1E_METHOD_1_752A54513BCAB8D2_OFFSET))(this, a1, a2);
	}
};
