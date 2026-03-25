#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D9FADE393C1BEBA_UIElementType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8;
class Class_1_AB817CB39E494C61;
class Class_1_ABFB5B7BFEBBC8F7;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_1_OFFSET UNITYSDK_OFFSET(0x1115B830)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_OFFSET UNITYSDK_OFFSET(0x1115B6E0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_5215D46B5F8B7E64_OFFSET UNITYSDK_OFFSET(0x1115B9E0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_BA9025B32518343C_OFFSET UNITYSDK_OFFSET(0x1115B540)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_D576072A5004A133_1_OFFSET UNITYSDK_OFFSET(0x1115C5B0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_D576072A5004A133_OFFSET UNITYSDK_OFFSET(0x1115C460)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_D9BE059BC0F149D4_OFFSET UNITYSDK_OFFSET(0x1115C210)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1115C6D0)
#define CLASS_1_A7B39FA675637A9F_METHOD_1_FB5A677A86C2D664_OFFSET UNITYSDK_OFFSET(0x1115BCC0)
#define CLASS_1_A7B39FA675637A9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1115C700)

inline static constexpr unsigned int Class_1_A7B39FA675637A9F_TypeDefinitionIndex = 48467;

class Class_1_A7B39FA675637A9F : public ::System::Object
{
public:
	::RPG::Client::CloudUIBattlePosRegion Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>* Method_1_BA9025B32518343C(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_BA9025B32518343C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A366F6A20FCD03B(::UnityEngine::RectTransform* a1, ::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*&))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3A366F6A20FCD03B_1(::UnityEngine::RectTransform* a1, ::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*&))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_3A366F6A20FCD03B_1_OFFSET))(this, a1, a2);
	}

	::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8* Method_1_FB5A677A86C2D664(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Class_1_5D9FADE393C1BEBA_UIElementType a4)
	{
		return ((::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_5D9FADE393C1BEBA_UIElementType))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_FB5A677A86C2D664_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_5215D46B5F8B7E64()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_5215D46B5F8B7E64_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_D9BE059BC0F149D4()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_D9BE059BC0F149D4_OFFSET))(this);
	}

	::Class_1_AB817CB39E494C61* Method_1_D576072A5004A133()
	{
		return ((::Class_1_AB817CB39E494C61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_D576072A5004A133_OFFSET))(this);
	}

	::Class_1_ABFB5B7BFEBBC8F7* Method_1_D576072A5004A133_1()
	{
		return ((::Class_1_ABFB5B7BFEBBC8F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_D576072A5004A133_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B39FA675637A9F_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}
};
