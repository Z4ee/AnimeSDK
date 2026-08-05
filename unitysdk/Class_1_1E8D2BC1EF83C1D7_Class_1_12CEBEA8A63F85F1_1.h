#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1E8D2BC1EF83C1D7;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1_METHOD_1_2CA7A456F23971D0_OFFSET UNITYSDK_OFFSET(0x15615780)
#define CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1_METHOD_1_93A98E249E6005CA_OFFSET UNITYSDK_OFFSET(0x15615810)
#define CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15615770)

inline static constexpr unsigned int Class_1_1E8D2BC1EF83C1D7_Class_1_12CEBEA8A63F85F1_1_TypeDefinitionIndex = 81117;

class Class_1_1E8D2BC1EF83C1D7_Class_1_12CEBEA8A63F85F1_1 : public ::System::Object
{
public:
	::System::Action_1<::Foundation::AssetRequestHandle>* Field_1_0; // 0x10
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* Field_1_7; // 0x18
	::Class_1_1E8D2BC1EF83C1D7* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CA7A456F23971D0(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1_METHOD_1_2CA7A456F23971D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93A98E249E6005CA(::UnityEngine::Sprite* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1E8D2BC1EF83C1D7_CLASS_1_12CEBEA8A63F85F1_1_METHOD_1_93A98E249E6005CA_OFFSET))(this, a1, a2);
	}
};
