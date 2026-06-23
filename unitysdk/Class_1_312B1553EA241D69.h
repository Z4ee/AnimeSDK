#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_312B1553EA241D69_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116DD160)
#define CLASS_1_312B1553EA241D69_METHOD_1_5DDC08FDDBE841C1_OFFSET UNITYSDK_OFFSET(0x116DE0C0)
#define CLASS_1_312B1553EA241D69_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x116DD530)
#define CLASS_1_312B1553EA241D69_METHOD_1_999E6A65C9FA43E6_OFFSET UNITYSDK_OFFSET(0x116DD5D0)
#define CLASS_1_312B1553EA241D69_METHOD_1_AA8D63E20F167858_OFFSET UNITYSDK_OFFSET(0x116DDD30)
#define CLASS_1_312B1553EA241D69__CTOR_OFFSET UNITYSDK_OFFSET(0x116DD520)

inline static constexpr unsigned int Class_1_312B1553EA241D69_TypeDefinitionIndex = 50857;

class Class_1_312B1553EA241D69 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*>* Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_999E6A65C9FA43E6(::Foundation::AssetPath a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69_METHOD_1_999E6A65C9FA43E6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_AA8D63E20F167858(::Foundation::AssetPath a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69_METHOD_1_AA8D63E20F167858_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DDC08FDDBE841C1(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_312B1553EA241D69_METHOD_1_5DDC08FDDBE841C1_OFFSET))(this, a1, a2);
	}
};
